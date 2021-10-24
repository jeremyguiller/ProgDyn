cmake_minimum_required(VERSION 3.20)
project(ProgDyn C)

set(CMAKE_C_STANDARD 99)

add_executable(ProgDyn main.c headers/dichotomy.h source/dichotomy.c source/glouton.c headers/glouton.h headers/PGCB.h source/PGCB.c source/tests.c headers/tests.h /usr/include/CUnit/CUnit.h)
include_directories("/usr/include/Cunit")
add_custom_target(documentation COMMAND doxygen ../Doxyfile)
