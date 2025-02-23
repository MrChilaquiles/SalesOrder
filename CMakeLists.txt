cmake_minimum_required(VERSION 3.28.3)
project(Prueba)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp SalesOrder.cpp InventoryDetail.cpp Article.cpp)
