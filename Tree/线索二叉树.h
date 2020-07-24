//
// Created by Burson on 2020/7/21.
//

#ifndef DATASTRUCTURE_线索二叉树_H
#define DATASTRUCTURE_线索二叉树_H

#endif //DATASTRUCTURE_线索二叉树_H

#include "../预定义.h"

typedef struct ThreadNode {
    ElemType data;  //数据元素
    struct ThreadNode *lchild, *rchild;  //左、右孩子指针
    int ltag, rtag;  //左、右线索标志 0为孩子 1为线索
} ThreadNode, *ThreadTree;

/**
 * 遍历结点并输出数据
 * @param p
 */
void visit(ThreadNode *T);

/**
 * 遍历结点并创建线索
 * @param T
 * @param pre
 */
void visit(ThreadTree &T,ThreadNode* &pre);

/**
 * 先序遍历线索化
 * @param p
 * @param pre
 */
void PreThread(ThreadTree &p,ThreadNode* &pre);

/**
 * 先序遍历建立线索二叉树
 * @param T
 */
void CreatePreThread(ThreadTree &T);

/**
 * 中序遍历线索化
 * @param p
 * @param pre
 */
void InThread(ThreadTree &p, ThreadNode* &pre);

/**
 * 中序遍历建立线索二叉树
 * @param T
 */
void CreateInThread(ThreadTree &T);

/**
 * 后序遍历线索化
 * @param p
 * @param pre
 */
void PostThread(ThreadTree &p,ThreadNode* &pre);

/**
 * 后序遍历建立线索二叉树
 * @param T
 */
void CreatePostThread(ThreadTree &T);

/**
 * 找到子树中第一个被中序遍历的结点
 * @param p
 * @return
 */
ThreadNode* Firstnode(ThreadNode* p);

/**
 * 找到子树中最后一个被中序遍历的结点
 * @param p
 * @return
 */
ThreadNode* Lastnode(ThreadNode* p);

/**
 * 在中序线索二叉树中找到结点p的前驱结点
 * @param p
 * @return
 */
ThreadNode* Prenode(ThreadNode* p);

/**
 * 在中序线索二叉树中找到结点p的后继结点
 * @param p
 * @return
 */
ThreadNode* Nextnode(ThreadNode* p);

/**
 * 中序遍历
 * (利用线索实现的非递归算法)
 * 空间复杂度o1
 * @param  T 中序线索二叉树
 */
void InOrder(ThreadTree T);

/**
 * 逆向中序遍历
 * (利用线索实现的非递归算法)
 * 空间复杂度o1
 * @param  T 中序线索二叉树
 */
void RevInOrder(ThreadTree T);

