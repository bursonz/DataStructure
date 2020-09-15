//
// Created by Burson on 2020/9/4.
//

typedef int ElemType;

/**
 * 基数排序通常基于链式存储实现
 */
typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkNode,*LinkList;

/**
 * 基数所对应的链队
 */
typedef struct {
    LinkNode *front;
    LinkNode *rear;
}LinkQueue;


void Distribution(LinkList L,LinkQueue Q[],int r){
    LinkNode *p,*q;
    p=L->next;
    while (p!= nullptr){
    }
}

void Collection(LinkList &L,LinkQueue Q[],int r){

}

void RadixSort(LinkList &L,int r,int d){
    LinkQueue Q[r];
}