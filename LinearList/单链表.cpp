//
// Created by Burson on 2020/7/3.
//

#include "iostream"
#include "单链表.h"

bool InitList(LinkList &L) {
    L = new LNode; //分配一个头结点
    if (L == NULL) //内存不足,分配失败
        return false;
    L->next = NULL; //头结点之后为空
    return true;
}

bool InitList_WithoutHead(LinkList &L) {
    L = NULL;
    return true;
}

bool Empty(LinkList L) {
    if (L->next == NULL)
        return true;
    else
        return false;
}

bool Empty_WithoutHead(LinkList L) {
    if (L == NULL)
        return true;
    else
        return false;
}

bool Tail(LinkList L, LNode *p) {
    if (p->next == NULL)
        return true;
    else
        return false;
}

bool ListInsert(LinkList &L, int i, ElemType e) {
    if (i < 1)
        return false;
    LNode *p = GetElem(L, i);
    return InsertNextNode(p, e);
}

bool ListInsert_WithoutHead(LinkList &L, int i, ElemType e) {
    if (i < 1)
        return false;
    else if (i == 1) {
        LNode *node = (LNode *) malloc(sizeof(LNode));
        node->data = e;
        node->next = NULL;
        L = node;
        return true;
    } else {
        LNode *p;
        p = L;
        int j = 1;
        while (p != NULL && j < i - 1) {
            p = p->next;
            j++;
        }
        return InsertNextNode(p, e);
    }

}

bool InsertNextNode(LNode *p, ElemType e) {
    //输入结点有误
    if (p == NULL)
        return false;
    //生成新结点
    //LNode* node=(LNode*)malloc(sizeof(LNode));
    LNode *node = new LNode;
    //内存分配失败
    if (node == NULL)
        return false;
    node->data = e;
    node->next = p->next;
    p->next = node->next;
    return true;
}

bool InsertPriorNode(LNode *p, ElemType e) {
    ElemType t = p->data;
    p->data = e;
    return InsertNextNode(p, t);
}

bool InsertPriorNode(LNode *p, LNode *q) {
    if (p == NULL || q == NULL)
        return false;
    q->next = p->next;
    p->next = q;
    ElemType t = p->data;
    p->data = q->data;
    q->data = t;
    return true;
}

LinkList List_HeadInsert(LinkList &L) {
    L = new LNode;
    LNode *p = L->next = NULL;
    int x;
    std::cin >> x;
    while (x != 9999) {
        p = new LNode;
        p->data = x;
        p->next = L->next;
        L->next = p;
        std::cin >> x;
    }
    return nullptr;
}

LinkList List_HeadInsert(LinkList &L, ElemType *e, int length) {
    LNode *p;
    L = new LNode;
    p = L->next = NULL;
    for (int i = length - 1; i > 0; --i) {
        p = (LNode *) malloc(sizeof(LNode));
        p->next = L->next;
        p->data = e[i];
        L->next = p;
    }
    return L;
}

LinkList List_TailInsert(LinkList &L) {//正向建立单链表
    int x; //设ElemType为整型
    L = new LNode; //建立头结点
    LNode *p, *rear = L; //p为临时指针,r为表尾指针
    std::cin >> x; //输入结点的值,或输入退出命令
    while (x != 9999) { //输入9999表示结束
        p = new LNode;
        p->data = x;
        rear->next = p;
        rear = p; //rear指向新的表尾结点
        std::cin >> x;
    }
    rear->next = NULL; //表尾结点指针置空
    return L;
}

LinkList List_TailInsert(LinkList &L, ElemType *e, int length) {
    LNode *p = (LNode *) malloc(sizeof(LNode));
    L = p;
    for (int i = 0; i < length; ++i) {
        p->next = (LNode *) malloc(sizeof(LNode));
        p = p->next;
        p->data = e[i];
        p->next = NULL;
    }
    return L;
}

bool ListDelete(LinkList &L, int i, ElemType &e) {
    if (i < 1)
        return false;
    LNode *p = GetElem(L, i);
    if (p == NULL)
        return false;

    if (p->next == NULL)    //判断i-1后有无结点
        return false;
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

bool DeleteNode(LNode *p, ElemType &e) {
    if (p == NULL)
        return false;
    e = p->data;
    LNode *q = p->next;
    p->data = q->data;
    p->next = q->next;
    free(q);
    return true;
}

LNode *LocatedElem(LinkList L, ElemType e) {
    LNode *p = L->next;
    while (p != NULL && p->data != e)
        p = p->next;
    return p;
}

LNode *LocatedElement(LinkList L, ElemType e) {
    return LocatedElem(L, e);
}

LNode *GetElem(LinkList L, ElemType i) {
    if (i < 0)
        return NULL;
    LNode *p;
    p = L;
    int j = 0;
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

LNode *GetElement(LinkList L, ElemType i) {
    return GetElem(L, i);
}

int Length(LinkList L) {
    int length = 0;
    LNode *p = L;
    while (p->next != NULL) {
        p = p->next;
        length++;
    }
    return length;
}
