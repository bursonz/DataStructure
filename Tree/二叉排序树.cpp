//
// Created by Burson on 2020/7/24.
//

#include "二叉排序树.h"
#include <iostream>

//BSTNode *BST_Search(BSTree T, KeyType key) { //王道
//    while (T!=NULL&&key!=T->key){
//        if(key>T->key)
//            T=T->rchild;
//        else if(key<T->key)
//            T=T->lchild;
//    }
//    return T;
//}

/**
 * @author Burson
 * @param T
 * @param key
 * @return
 */
BSTNode *BST_Search(BSTree T, KeyType key) {
    BSTNode *p=T;
    while (p!= nullptr){
        if(key==T->key)
            return p;
        else if(key>T->key)
            p=p->rchild;
        else if(key<T->key)
            p=p->lchild;
    }
    return p;
}

int BST_Insert(BSTree &T, KeyType key) {
    if(T==nullptr){  //当二叉排序树为空
        T=new BSTNode{key, nullptr, nullptr};  //创建根结点并赋值
        return 1;  //插入成功
    }
//    else if (key==T->key)  //树中存在相同关键字
//        return 0;  //插入失败
//    else if (key<T->key)  //在当前子树的左子树继续插入
//        return BST_Insert(T->lchild,key);
//    else if (key>T->key)  //在当前子树的右子树继续插入
//        return BST_Insert(T->rchild,key);
    return key==T->key?0:BST_Insert(key<T->key?T->lchild:T->rchild,key);
}

void BST_Create(BSTree &T, KeyType *key, int n) {
    T==NULL;
    int i=0;
    while (i<n&&BST_Insert(T,key[i++]));
}

int BST_Delete(BSTree &T, KeyType key) {
    //TODO 完成二叉排序树的删除
    return 0;
}
