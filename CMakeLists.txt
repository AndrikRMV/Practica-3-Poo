cmake_minimum_required(VERSION 3.27)
project(Practica_3_POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(Practica_3_POO main.cpp
        Utils.cpp
        Utils.h
        Player/Player.cpp
        Player/Player.h
        Enemy/Enemy.cpp
        Enemy/Enemy.h
        Character/Character.cpp
        Character/Character.h)
