//
// Created by Burson on 2020/8/15.
//

#include "图.h"

int *Floyd(MGraph G) {
    int A[MaxVertexNum][MaxVertexNum];
    int path[MaxVertexNum][MaxVertexNum];
    for (int i = 0; i < MaxVertexNum; ++i) {
        for (int j = 0; j < MaxVertexNum; ++j) {
            A[i][j]=G.Edge[i][j];  //复制边表以进行最短路径运算
            path[i][j]=-1;  //将路径中转表置空;
        }
    }
    for (int k = 0; k < G.vexnum; ++k) {  //考虑以k为中转点
        for (int i = 0; i < G.vexnum; ++i) {  //遍历整个矩阵,i为行号,j为列号
            for (int j = 0; j < G.vexnum; ++j) {
                if (A[i][j]>A[i][k]+A[k][j]){  //以k为中转点的路径更短
                    A[i][j]=A[i][k]+A[k][j];  //更新最短路径长度
                    path[i][j]=k;  //中转点
                }
            }
        }
        
    }

    return nullptr;
}
