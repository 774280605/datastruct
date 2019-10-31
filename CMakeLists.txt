cmake_minimum_required(VERSION 3.14)
project(datastruct)


file(GLOB_RECURSE src_list ./DataStruct/*/*.cpp ./DataStruct/*/*.h ./DataStruct/*.cpp)

foreach(name ${src_list})
    message("this fileName:" ${name})
endforeach()
add_executable(datastruct ${src_list})