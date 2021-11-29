cmake_minimum_required(VERSION 3.20)
project(Curswork_OOP)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5 COMPONENTS graphics audio)
add_executable(Curswork_OOP main.cpp Ball.h Ball.cpp Rectangle.h Rectangle.cpp general.h general.cpp Data.h Data.cpp Design.h Design.cpp level_constructor.cpp Board.h Board.cpp)

target_link_libraries(Curswork_OOP sfml-graphics sfml-audio sfml-network)