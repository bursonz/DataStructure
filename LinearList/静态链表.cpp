//
// Created by Burson on 2020/7/7.
//

#include "静态链表.h"

bool InitList(SLinkList &L) {
    /*
     * 按照MAXSIZE大小,将数组依次置空
     * 空结点next游标为-2
     * 尾结点next游标为-1
     * 头结点next游标为-1
     * 数组下标从1开始,对应位序,容量为MAXSIZE-1
     */
    return false;
}

SNode LocatedElem(SLinkList L, int e) {
    /*
     * 1.从头结点出发挨个往后遍历结点data
     */
    return SNode();
}

SNode GetElem(SLinkList L, int i) {
    /*
     * 1.从头结点出发挨个往后遍历结点next
     */
    return SNode();
}

bool InsertNode(SLinkList L, SNode *p, int e) {
    /*
     * 1.找到一个空的结点,存入数据元素
     * 2.从头结点出发找到位序为i-1的结点
     * 3.修改新结点的next指向原来的i号结点
     * 4.修改i-1号结点的next指向新的结点
     */
    return false;
}

bool DeleteNode(SNode *p, int &e) {
    /*
     * 1.从头结点出发找到前驱结点
     * 2.修改前驱结点的next游标
     * 3.被删除结点的next游标设置为-2(表示空闲)
     */
    return false;
}
