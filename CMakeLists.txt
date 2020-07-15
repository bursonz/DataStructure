cmake_minimum_required(VERSION 3.16)
project(DataStructure)

set(CMAKE_CXX_STANDARD 11)

add_executable(DataStructure main.cpp LinearList/线性表.h 预定义.h Stack/栈.h Queue/queue.h Tree/tree.h LinearList/静态顺序表.h LinearList/静态顺序表.cpp LinearList/单链表.cpp LinearList/单链表.h LinearList/线性表.cpp LinearList/双链表.cpp LinearList/双链表.h LinearList/静态链表.cpp LinearList/静态链表.h LinearList/循环链表.cpp LinearList/循环链表.h LinearList/动态顺序表.cpp LinearList/动态顺序表.h Stack/顺序栈.cpp Stack/顺序栈.h Stack/链栈.cpp Stack/链栈.h Stack/栈.cpp Stack/共享栈.cpp Stack/共享栈.h Queue/顺序队.cpp Queue/顺序队.h Queue/链队.cpp Queue/链队.h Stack/栈的应用.cpp Stack/栈的应用.h Array/数组.cpp Array/数组.h String/抽象串.cpp String/抽象串.h String/串.cpp String/串.h Algorithm/串_模式匹配.cpp)