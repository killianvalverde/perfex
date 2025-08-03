find_package(speed REQUIRED)

set(debug_suffix "$<IF:$<CONFIG:Debug>,d,>")

set(PERFEX_SOURCE_FILES
        exception.hpp
        operations.hpp
        program.cpp
        program.hpp
        program_args.hpp
        perfex.hpp
)

add_library(perfex STATIC ${PERFEX_SOURCE_FILES})
target_link_libraries(perfex speed::speed)
set_target_properties(perfex PROPERTIES OUTPUT_NAME perfex${debug_suffix})
