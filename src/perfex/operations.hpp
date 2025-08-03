/* perfex
 * Copyright (C) 2025 Killian Valverde.
 *
 * This file is part of perfex.
 *
 * perfex is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * perfex is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with perfex. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file        operations.hpp
 * @brief       operations header.
 * @author      Killian Valverde
 * @date        2025/08/05
 */

#pragma once

#include <iomanip>
#include <iostream>
#include <speed/speed.hpp>

namespace perfex {

inline std::ostream& operator<<(std::ostream& os, const spd::sys::tm::time_specification& ts)
{
    os << ts.get_seconds()
       << '.'
       << std::setfill('0') << std::setw(3)
       << (ts.get_nseconds() / 1'000'000);
    
    return os;
}

}
