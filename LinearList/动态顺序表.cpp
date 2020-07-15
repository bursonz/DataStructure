//
// Created by Burson on 2020/7/7.
//

#include <iostream>
#include "动态顺序表.h"



// 动态顺序表

void InitList(SeqList &L) {
    //用 malloc 函数申请一片连续的存储空间
    L.data = (int *) malloc(InitSize * sizeof(ElemType));
    L.length = 0;
    L.MaxSize = InitSize;
}

void DestroyList(SeqList &L) {

}

void IncreaseSize(SeqList &L, int length) {
    ElemType *p = L.data;
    L.data = (int *) malloc((L.MaxSize + length) * sizeof(ElemType));
    for (int i = 0; i < L.length; ++i) {
        L.data[i] = p[i];
    }
    L.MaxSize += length;
    free(p);
}

void ListInsert(SeqList &L, int i, int e) {

}

void ListDelete(SeqList &L, int i, int &e) {

}

int LocatedElement(SeqList L, int e) {
    return 0;
}

ElemType GetElement(SeqList L, int i) {
    return 0;
}

int Length(SeqList L) {
    return 0;
}

void PrintList(SeqList L) {

}

bool Empty(SeqList L) {
    return false;
}

bool Full(SeqList L) {
    return L.length >= L.MaxSize;
}