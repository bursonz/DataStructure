//
// Created by Burson on 2020/7/6.
//

#include "线性表.h"
#include "stdlib.h"

int *RandomInit(int range, int count)//给定range数据取值范围，count数组大小
{
    int *num = new int(count);
    int local;
    for (int i = 0; i < count; i++) {
        num[i] = (rand() * i) % range;
    }
    for (int i = count; i > 0; i--) {
        local = rand() % i;
        if (i - 1 == local)
            continue;
        num[i - 1] += num[local];
        num[local] = num[i - 1] - num[local];
        num[i - 1] = num[i - 1] - num[local];
    }
    return num;
}

/******** 顺序表 ********/

void TestStaticSequenceList() {
    SqList L;
    InitList(L);
    //生成数据
    for (int i = 0, *random = RandomInit(100, InitSize); i < InitSize; ++i) {
        L.data[i] = random[i];
        L.length++;
    }
    //打印数据
    PrintList(L);
    //插入数据
    ListInsert(L, 3, 3);
    return;
}

void TestDynamicSequenceList() {
    SeqList L;
    InitList(L);
    //...随便插入几个元素
    IncreaseSize(L, 5);
    return;
}


/******** 链表 ********/

void TestSingleLinkedList() {
    LinkList L;
    //初始化空表
    InitList(L);
}

void TestDoubleLinkedList() {

}

void TestStaticLinkedList() {

}

void TestCicularLinkedList() {

}
