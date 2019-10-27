cmake_minimum_required(VERSION 3.14)
project(datastruct)
aux_source_directory(./DataStruct/templatemethod src_dir)
aux_source_directory(./DataStruct/strategy src_dir)
aux_source_directory(./DataStruct/state src_dir)
aux_source_directory(./DataStruct src_dir)
aux_source_directory(./DataStruct/observer src_dir)
aux_source_directory(./DataStruct/visitor src_dir)
aux_source_directory(./DataStruct/ChainOfResponsibility src_dir)

find_file(myfile [*.h *.cpp]  ./DataStruct/state )
message(WARNING "${myfile}")

add_executable(datastruct ${src_dir})