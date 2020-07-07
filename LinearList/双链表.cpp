//
// Created by Burson on 2020/7/7.
//
#include "双链表.h"

#include <iostream>

bool InitList(DLinkList &L) {
    L = (DLinkList) malloc(sizeof(DLinkList)); //分配一个头结点
    if (L == NULL) //内存不足分配失败
        return false;
    else {
        L->prior = L->next = NULL;
        return true;
    }
}

void DestoryList(DLinkList &L) {
    while (L->next != NULL)       //循环释放结点
        DeleteNextDNode(L);
    free(L);                    //释放头结点
    L = NULL;                     //头指针置空
    return;
}

bool Empty(DLinkList L) {
    if (L->next == NULL)
        return true;
    else
        return false;
}

bool Tail(DLinkList L, DNode *p) {
    return false;
}

bool InsertNextDNode(DNode *p, DNode *s) {
    if (p == NULL || s == NULL)
        return false;
    s->prior = p;             //s的前驱指向p
    s->next = p->next;        //s的后继指向p的后继
    if (p->next != NULL)       //p如果有后继
        p->next->prior = s;       //p后继的前驱指向s
    p->next = s;              //p的后继指向s
    return true;
}

bool DeleteNextDNode(DNode *p) {
    if (p == NULL)
        return false;
    DNode *q = p->next;
    if (q == NULL)             //当结点p的后继为空
        return false;           //删除失败
    p->next = q->next;        //使p的后继指向q的后继
    if (q->next != NULL)       //结点q存在后继
        q->next->prior = p;       //使q的后继的前驱指向p
    free(q);                //释放结点空间
    return true;
}