/*  Copyright (C) 2012-2020 by László Nagy
    This file is part of Bear.

    Bear is a tool to generate compilation database for clang tooling.

    Bear is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Bear is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "libresult/Result.h"
#include "libsys/Environment.h"

#include <filesystem>
#include <list>
#include <map>
#include <string>

namespace fs = std::filesystem;

namespace sys::os {

    // Query methods about the system.
    [[nodiscard]] rust::Result<std::string> get_confstr(int key);
    [[nodiscard]] rust::Result<std::map<std::string, std::string>> get_uname();

    // Return PATH from environment and fall back to confstr default one.
    [[nodiscard]] rust::Result<std::string> get_path(const sys::env::Vars& env);
}
