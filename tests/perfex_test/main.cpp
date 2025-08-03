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
 * @file        main.cpp
 * @brief       perfex_gtest entry point.
 * @author      Killian Valverde
 * @date        2025/08/03
 */

#include <gtest/gtest.h>


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
