//
// Created by Burson on 2020/7/3.
//
#include <iostream>
#include "静态顺序表.h"

//公共抽象


//静态顺序表

void InitList(SqList &L) {
    for (int i = 0; i < MAXSIZE; ++i)
        L.data[i] = 0;
    L.length = 0;
}

void DestroyList(SqList &L) {

}

void ListInsert(SqList &L, int i, int e) {
    for (int j = L.length; j >= i; --j) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
}

void ListDelete(SqList &L, int i, int &e) {

}

int LocatedElement(SqList L, int e) {
    return 0;
}

ElemType GetElement(SqList L, int i) {
    return 0;
}

int Length(SqList L) {
    return 0;
}

void PrintList(SqList L) {

}

bool Empty(SqList L) {
    return false;
}

bool Full(SqList L) {
    return L.length >= MAXSIZE;
}

