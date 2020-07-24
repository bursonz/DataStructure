//
// Created by Burson on 2020/7/19.
//

#ifndef DATASTRUCTURE_二叉树_H
#define DATASTRUCTURE_二叉树_H

#endif //DATASTRUCTURE_二叉树_H

#include "../预定义.h"

/**
 *顺序存储
 */
struct TreeNode {
    ElemType value;  //结点中的数据元素
    bool isEmpty;  //结点是否为空
};
TreeNode T[MAXSIZE];

/**
 * 链式存储
 * 拥有父指针的的为三叉链表
 */
typedef struct BiTNode {
    ElemType data;  //数据域
    struct BiTNode *lchild, *rchild;  //左、右孩子指针
//    struct BiTNode *parent;  //父指针
} BiTNode, *BiTree;

/**
 * 双亲表示法
 * (顺序存储)
 */
typedef struct {  //树的定义节点
    ElemType data;  //数据元素
    int parent;  //双亲位置域
}PTNode;
typedef struct {
    PTNode nodes[MAXSIZE];  //双亲表示
    int n;  //结点数
}PTree;

/**
 * 孩子表示法
 * (单链表数组)
 */
struct CTNode{
    int child;  //孩子结点在数组中的位置
    struct CTNode *next;  //下一个孩子
};
typedef struct {
    ElemType data;
    struct CTNode *firstchild;  //第一个孩子
}CTBox;
typedef struct {
    CTBox nodes[MAXSIZE];
    int n,r;  //结点数和根的位置
}CTree;

/**
 * 孩子兄弟表示法
 * 又称二叉树表示法
 * (二叉链表)
 */
typedef struct CSNode{
    ElemType data;
    struct CSNode *firstchild,*nextsibling;  //第一个孩子和右兄弟指针
}CSNode,*CSTree;


/**
 * 访问结点
 * @param node
 */
void visit(BiTNode *node);

/**
 * 深度
 * @param T
 * @return
 */
int treeDepth(BiTree T);

/**
 * 先序遍历
 * @param T
 */
void PreOrder(BiTree T);

/**
 * 中序遍历
 * @param T
 */
void InOrder(BiTree T);

/**
 * 后序遍历
 * @param T
 */
void PostOrder(BiTree T);

/**
 * 层次遍历
 * @param T
 */
void LevelOrder(BiTree T);
