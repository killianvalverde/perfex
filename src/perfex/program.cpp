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
 * @file        program.cpp
 * @brief       program class implementation.
 * @author      Killian Valverde
 * @date        2025/08/03
 */

#include "program.hpp"

#include "operations.hpp"

namespace perfex {

program::program(program_args&& prog_args) 
        : prog_args_(std::move(prog_args))
{
}

int program::execute()
{
    int exit_cod;
    spd::sys::tm::time_specification cpu_time_spec;
    spd::sys::tm::time_specification elapsed_time_spec;
    std::error_code error_cod;
    std::ostringstream  oss;
    std::string messge;
    
    if (!spd::sys::proc::execute(prog_args_.commnd.c_str(), &exit_cod, &cpu_time_spec,
            &elapsed_time_spec, &error_cod))
    {
        spd::ios::print_error_and_exit(std::cerr, "perfex", error_cod.message(), 1);
    }
    
    oss << "Process exited after "
        << elapsed_time_spec
        << " (CPU: "
        << cpu_time_spec
        << ") seconds with return value "
        << exit_cod;
    
    messge = oss.str();
    
    std::cout << spd::ios::newl;
    for (std::size_t i = 0; i < messge.size(); i++)
    {
        std::cout.put('-');
    }
    
    std::cout << spd::ios::newl
              << messge
              << std::endl;
    
    return 0;
}

}
