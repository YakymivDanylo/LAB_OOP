cmake_minimum_required(VERSION 3.27)
project(OOP_lab3)

set(CMAKE_CXX_STANDARD 23)

add_executable(OOP_lab3 main.cpp
        Order.cpp
        Client.cpp
        Furniture.cpp
        Operator.cpp
        Operator.h
        Table.cpp
        Table.h
        People.cpp
        People.h
        Basket.cpp
        Basket.h
)
