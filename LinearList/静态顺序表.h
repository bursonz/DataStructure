//
// Created by Burson on 2020/7/2.
//


#ifndef DATASTRUCTURE_SQLIST_H
#define DATASTRUCTURE_SQLIST_H

#endif //DATASTRUCTURE_SQLIST_H

#include "../Definition.h"

/**
 * 顺序表：Sequence List
 *      用数组方式实现的链表
 * 优点：
 *      1.支持随机存取
 *      2.存储密度高
 * 缺点：
 *      1.大片连续空间分配不方便
 *      2.改变容量不方便
 * 适用场景：
 *      1.
 */


/**
 * 静态分配的顺序表
 * 长度不可改变
 */
typedef struct {
    ElemType data[MAXSIZE];     //指向动态分配数组的指针
    int length;                 //顺序表的当前长度
} SqList, SSList, StaticSequenceList;       //顺序表的类型定义（静态分配）

/**
 * 静态顺序表初始化
 * @param L
 */
void InitList(SqList &L);

/**
 * 销毁
 * @param L
 */
void DestroyList(SqList &L);

/**
 * 按位插入
 * @param L
 * @param i
 * @param e
 */
void ListInsert(SqList &L, int i, ElemType e);

/**
 * 按位删除
 * @param L
 * @param i
 * @param e 返回删除的元素
 */
void ListDelete(SqList &L, int i, ElemType &e);

/**
 * 按值查找
 * @param L
 * @param e
 * @return 返回查找到的元素的位置（从1开始）
 */
int LocatedElement(SqList L, ElemType e);

/**
 * 按位查找
 * @param L
 * @param i
 * @return 返回查找到的元素
 */
ElemType GetElement(SqList L, int i);

/**
 * 求表长
 * @param L
 * @return 表长
 */
int Length(SqList L);

/**
 * 输出
 * @param L
 */
void PrintList(SqList L);

/**
 * 判空
 * @param L
 * @return 表L是否为空
 */
bool Empty(SqList L);

/**
 * 判满
 * @param L
 * @return 表L是否为满
 */
bool Full(SqList L);
