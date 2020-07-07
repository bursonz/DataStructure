//
// Created by Burson on 2020/7/7.
//

#include "iostream"
#include "循环链表.h"

bool InitList(CSLinkList &L) {
    L = (CSLinkList) malloc(sizeof(CSLinkList));
    if (L == NULL)
        return false;
}

bool InitList(CDLinkList &L) {
    L = (CDLinkList) malloc(sizeof(CDLinkList));
    if (L == NULL)
        return false;
    else {
        L->prior = L->next = L;
        return true;
    }
}

bool Empty(CSLinkList L) {
    if (L->next == L)
        return true;
    else
        return false;
}

bool Empty(CDLinkList L) {
    if (L->next == L)
        return true;
    else
        return false;
}

bool Tail(CSLinkList L, CLNode *p) {
    if (p->next == L)
        return true;
    else
        return false;
}

bool Tail(CDLinkList L, CDNode *p) {
    if (L->prior == p && p->next == L)
        return true;
    else
        return false;
}

bool InsertNextDNode(CLNode *p, CLNode *s) {
    return false;
}

bool InsertNextDNode(CDNode *p, CDNode *s) {
    if (p == NULL || s == NULL)
        return false;
    s->prior = p;             //s的前驱指向p
    s->next = p->next;        //s的后继指向p的后继
    p->next->prior = s;       //p后继的前驱指向s
    p->next = s;              //p的后继指向s
    return true;
}

bool DeleteNextDNode(CLNode *p) {
    return false;
}

bool DeleteNextDNode(CDNode *p) {
    /*
     * 如果p结点是尾结点,那么如何避过头结点呢?
     */
    if (p == NULL || p->next == p || p->prior == p)
        return false;
    DNode *q = p->next;
    p->next = q->next;        //使p的后继指向q的后继
    q->next->prior = p;       //使q的后继的前驱指向p
    free(q);                //释放结点空间
    return true;
}
