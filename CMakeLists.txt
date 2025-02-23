cmake_minimum_required(VERSION 3.28.3)
project(SalesOrder)

set(CMAKE_CXX_STANDARD 17)
add_executable(main main.cpp class/SalesOrder.cpp class/Article.cpp class/InventoryDetail.cpp)
