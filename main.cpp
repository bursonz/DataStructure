#include <iostream>
#include "LinearList/linearlist.h"

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

/**
 * 测试静态顺序表
 */
void testSqList() {
    SqList L;
    InitList(L);
    //生成数据
    for (int i = 0, *random=RandomInit(100,InitSize); i < InitSize; ++i) {
        L.data[i]=random[i];
        L.length++;
    }
    //打印数据
    PrintList(L);
    //插入数据
    ListInsert(L,3,3);
    return;
}

/**
 * 测试动态顺序表
 */
void testSeqList() {
    SeqList L;
    InitList(L);
    //...随便插入几个元素
    IncreaseSize(L, 5);
    return;
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
