find_package(GTest REQUIRED)

include_directories(${CMAKE_CURRENT_LIST_DIR}/../../src)

set(PERFEX_TEST_SOURCE_FILES
        program_test.cpp
)

add_executable(perfex_test
        main.cpp
        ${PERFEX_TEST_SOURCE_FILES}
)

target_link_libraries(perfex_test perfex ${GTEST_BOTH_LIBRARIES})
