//
// Created by Burson on 2020/7/7.
//

#ifndef DATASTRUCTURE_DOUBLELINKEDLIST_H
#define DATASTRUCTURE_DOUBLELINKEDLIST_H

#endif //DATASTRUCTURE_DOUBLELINKEDLIST_H

#include "../预定义.h"

typedef struct DNode {
    ElemType data;
    struct DNode *prior;
    struct DNode *next;
} DNode, *DLinkList, *DoubleLinkedList;

/**
 * 初始化
 * @param L 双链表指针
 * @return
 */
bool InitList(DLinkList &L);

/**
 * 销毁
 * @param L 双链表指针
 */
void DestoryList(DLinkList &L);

/**
 * 判空
 * @param L 双链表
 * @return
 */
bool Empty(DLinkList L);

/**
 * 判尾
 * @param L 双链表
 * @param p 待判断结点
 * @return
 */
bool Tail(DLinkList L, DNode *p);

/**
 * 插入结点
 * 在结点之后插入新结点
 * @param p 指定结点
 * @param s 待插入的结点
 * @return
 */
bool InsertNextDNode(DNode *p, DNode *s);

/**
 * 删除结点
 * 在结点之后删除结点
 * @param p 被删除结点的前驱
 * @return
 */
bool DeleteNextDNode(DNode *p);
