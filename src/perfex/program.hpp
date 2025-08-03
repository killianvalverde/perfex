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
 * @file        program.hpp
 * @brief       program class header.
 * @author      Killian Valverde
 * @date        2025/08/03
 */

#pragma once

#include <speed/speed.hpp>

#include "exception.hpp"
#include "program_args.hpp"

namespace perfex {

/**
 * @brief       perfex entry point class.
 */
class program
{
public:
    /**
     * @brief       Constructor with parameters.
     * @param       prog_args : The program arguments.
     */
    explicit program(program_args&& prog_args);
    
    /**
     * @brief       Execute the program.
     * @return      The value that represents if the program succeed.
     */
    int execute();

private:

private:
    /** The program arguments. */
    program_args prog_args_;
};

}
