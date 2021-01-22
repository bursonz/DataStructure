//
// Created by Burson on 2020/10/21.
//

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

void merge(LinkList &a,LinkList &b,LinkList &c){
    LNode *p=c;
    while(a->next!= nullptr&&b->next!= nullptr){//ab穿插合并
        p->next=a->next;        //在c的尾部插入a的第一个节点
        a->next=a->next->next;  //a头结点的next指针指向第二个结点
        p->next->next=b->next;  //在c的新尾部插入b的第一个节点
        b->next=b->next->next;  //b头结点的next指针指向第二个结点
        p=p->next->next;        //p的next后移至链表尾
    }
    if(a->next!= nullptr)       //a有剩余
        p->next=a->next;
    if(b->next!= nullptr)       //b有剩余
        p->next=b->next;
    a->next=b->next= nullptr;   //ab头节点next置空
}

