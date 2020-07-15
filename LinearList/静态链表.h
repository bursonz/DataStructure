//
// Created by Burson on 2020/7/7.
//

#ifndef DATASTRUCTURE_STATICLINKEDLIST_H
#define DATASTRUCTURE_STATICLINKEDLIST_H

#endif //DATASTRUCTURE_STATICLINKEDLIST_H

#include "../预定义.h"

/**
 * 静态链表：
 *      用数组方式实现的链表
 * 优点：
 *      增、删 操作不需要大量移动元素
 * 缺点：
 *      1.不能随机存取，只能从头结点开始依次往后查找
 *      2.且容量固定不可变
 * 适用场景：
 *      1.不支持指针的低级语言
 *      2.数据元素数量固定不变的场景（如操作系统的文件分配表FAT）
 */
typedef struct SNode {
    ElemType data;
    int next;
} SNode, SLinkList[MAXSIZE];
//SLinkList类型定义一个MAXSIZE长度的SNode数组

/**
 * 初始化
 * @param L 静态链表
 * @return
 */
bool InitList(SLinkList &L);

/**
 * 按值查找
 * @param L 静态链表
 * @param e
 * @return
 */
SNode LocatedElem(SLinkList L, ElemType e);

/**
 * 按位查找
 * @param L 静态链表
 * @param i 位序
 * @return 返回查找到的结点
 */
SNode GetElem(SLinkList L, int i);

/**
 * 在某结点前插入结点
 * 时间复杂度O(n)
 * @param L 头指针(带头结点)
 * @param p 某个结点
 * @param e 待插入的元素
 * @return
 */
bool InsertNode(SLinkList L, SNode *p, ElemType e);

/**
 * 按值删除
 * @param p 被删除的结点
 * @param e 被删除结点的数据
 * @return
 */
bool DeleteNode(SNode *p, ElemType &e);
