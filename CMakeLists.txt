cmake_minimum_required(VERSION 3.16)
project(DataStructure)

set(CMAKE_CXX_STANDARD 11)

add_executable(DataStructure main.cpp LinearList/linearlist.h definition.h Stack/stack.h Queue/queue.h Tree/tree.h LinearList/sqlist.h LinearList/sqlist.cpp LinearList/LinkList.cpp LinearList/LinkList.h)