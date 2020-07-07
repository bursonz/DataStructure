cmake_minimum_required(VERSION 3.16)
project(DataStructure)

set(CMAKE_CXX_STANDARD 11)

add_executable(DataStructure main.cpp 线性表.h Definition.h Stack/stack.h Queue/queue.h Tree/tree.h LinearList/静态顺序表.h LinearList/静态顺序表.cpp LinearList/单链表.cpp LinearList/单链表.h 线性表.cpp LinearList/双链表.cpp LinearList/双链表.h LinearList/静态链表.cpp LinearList/静态链表.h LinearList/循环链表.cpp LinearList/循环链表.h LinearList/动态顺序表.cpp LinearList/动态顺序表.h)