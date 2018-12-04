cmake_minimum_required(VERSION 3.12)
project(BeerBrewing C)

set(CMAKE_C_STANDARD 99)

add_executable(BeerBrewing main.c ingridienser.h recipe.c edit.c)