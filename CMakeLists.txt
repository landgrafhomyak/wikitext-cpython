cmake_minimum_required(VERSION 3.19)
project(wikitext-cpython C)

set(CMAKE_C_STANDARD 90)
set(CMAKE_CXX_STANDARD 98)

add_subdirectory(wikitext)

find_package(Python COMPONENTS Development)

python_add_library(
        wikitext-cpython
        SHARED

        src/wikitext-cpython.def
        src/init.c

)
set_target_properties(wikitext-cpython PROPERTIES OUTPUT_NAME wikitext-cpython)
target_link_libraries(wikitext-cpython PUBLIC wikitext)
target_include_directories(wikitext-cpython PUBLIC Include)
install(TARGETS wikitext-cpython DESTINATION wikitext)