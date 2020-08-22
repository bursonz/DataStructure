//
// Created by Burson on 2020/8/15.
//

#ifndef DATASTRUCTURE_图_H
#define DATASTRUCTURE_图_H

#endif //DATASTRUCTURE_图_H

//#include "../预定义.h"

#define MaxVertexNum 100  //顶点数目的最大值

typedef char VertexType;  //顶点的数据类型
typedef int EdgeType;  //带权图中边上权值的数据类型
typedef int InfoType;  //网的边权值的数据类型

/**
 * 邻接矩阵
 * AM (Adjacency Matrix)
 */
typedef struct {
    VertexType Vex[MaxVertexNum];  //顶点表
    EdgeType Edge[MaxVertexNum][MaxVertexNum];  //邻接矩阵,边表
    int vexnum,arcnum;  //图当前的顶点数和弧数
}MGraph;  //邻接矩阵存储

/**
 * 邻接表
 * AL (Adjacency List)
 */
typedef struct ArcNode{  //边表结点
    int adjvex;  //该弧所指向的顶点的位置
    struct ArcNode *next;  //指向下一条弧的指针
    //InfoType info;  //网的边权值
}ArcNode;

typedef struct VertexNode{  //顶点表结点
    VertexType data;  //顶点信息
    ArcNode *first;  //指向第一条依附该顶点的弧的指针
}VertexNode,AdjList[MaxVertexNum],AdjacencyList[MaxVertexNum];

typedef struct {
    AdjList vertices;  //邻接表
    int vexnum,arcnum;  //图的顶点数和弧数
}ALGraph;  //ALGraph是以邻接表存储的图类型

/**
 * 十字链表
 * CLL (Cross Linked List)
 */
typedef struct CLL_ArcNode{
    int tailvex;  //弧尾顶点所在数组位置
    int headvex;  //弧头顶点所在数组位置
    struct CLL_ArcNode *hlink;  //弧头相同的下一个位置
    struct CLL_ArcNode *tlink;  //弧尾相同的下一个位置
    EdgeType info;  //弧信息
}CLL_ArcNode;

typedef struct CLL_VertexNode{
    VertexType data;  //顶点信息
    struct CLL_ArcNode *firstin;  //入,以该顶点为弧头的第一个弧结点
    struct CLL_ArcNode *firstout;  //出,以该顶点为弧尾的第一个弧结点
}CLL_Node,CLList[MaxVertexNum],CrossLinkedList[MaxVertexNum];

/**
 * 邻接多重表
 * AML (Adjacency Multiple List)
 */
typedef struct AML_EdgeNode{  //边表结点
    bool mark;
    int ivex;  //顶点i的数组位置
    int jvex;  //顶点j的数组位置
    struct AML_EdgeNode *ilink;  //下一条依附于i的边
    struct AML_EdgeNode *jlink;  //下一条依附于j的边
    EdgeType info;  //边信息
}AML_EdgeNode;

typedef struct AML_VertexNode{  //顶点表结点
    VertexType data;  //顶点信息
    AML_EdgeNode *firstedge;  //第一条依附于该结点的边(该节点的第一条边)
}AML_VertexNode,AMList[MaxVertexNum],AdjacencyMultipleList[MaxVertexNum];

/**
 * 判断图G是否存在弧<x,y>或边(x,y)
 * @param G
 * @param x
 * @param y
 * @return
 */
int Adjacent(MGraph G,int x,int y);

/**
 * 列出图G中与结点x邻接的边
 * @param G
 * @param x
 * @return 与x邻接的边的数组
 */
EdgeType* Neighbors(MGraph G,int x);

/**
 * 在图G中插入顶点x
 * @param G
 * @param x
 * @return
 */
int InsertVertex(MGraph G,VertexType x);

/**
 * 在图G中删除顶点x
 * @param G
 * @param x
 * @return
 */
VertexType DeleteVertex(MGraph G,VertexType x);

/**
 * 若边(x,y)或弧<x,y>不存在,则向图G中添加该边
 * @param G
 * @param x
 * @param y
 * @return
 */
int AddEdge(MGraph G,int x,int y);

/**
 * 若边(x,y)或弧<x,y>存在,则从图G中删除该边
 * @param G
 * @param x
 * @param y
 * @return
 */
EdgeType RemoveEdge(MGraph G,int x,int y);

/**
 * 求图G中顶点x的第一个邻接点,
 * 若有则返回顶点号,
 * 若x没有邻接点或图中不存在x,则返回-1
 * @param G
 * @param x
 * @return
 */
int FirstNeighbor(MGraph G,VertexType x);

/**
 * 假设图G中顶点y是顶点x的一个邻接点,
 * 返回除y之外顶点x的下一个邻接点的顶点号,
 * 若y是x的最后一个邻接点,则返回-1
 * @param G
 * @param x
 * @param y
 * @return
 */
int NextNeighbor(MGraph G,int x,int y);

/**
 * 获取图G中边(x,y)或弧<x,y>对应的权值
 * @param G
 * @param x
 * @param y
 * @return
 */
InfoType Get_edge_value(MGraph G,int x,int y);

/**
 * 设置图G中边(x,y)或弧<x,y>对应的权值为v
 * @param G
 * @param x
 * @param y
 * @param v
 * @return
 */
int Set_edge_value(MGraph G,int x,int y,InfoType v);

/**
 * 遍历访问标记数组
 * 标记已被访问的结点
 */
bool visited[MaxVertexNum];

///**
// * BFS遍历辅助队列
// */
//SequenceQueue Q[MaxVertexNum];

/**
 * 广度优先遍历
 * BFST (Breadth-First-Search Traverse)
 * 对图G进行广度优先遍历, 包含所有子图
 * @param G
 */
void BFSTraverse(MGraph G);

/**
 * 广度优先搜索
 * BFS (Breadth-First-Search)
 * 从指定结点开始广度优先搜索
 * @param G
 * @param vertex
 */
void BFS(MGraph G,int vertex);

/**
 * 深度优先遍历
 * DFST (Depth-First-Search Traverse)
 * 对图G进行广度优先遍历, 包含所有子图
 * @param G
 */
void DFSTraverse(MGraph G);

/**
 * 深度优先搜索
 * DFS (Depth-First-Search)
 * 从指定结点开始深度优先搜索
 * @param G
 * @param vertex
 */
void DFS(MGraph G,int vertex);

/**
 * Floyd算法
 * 求各顶点之间最短路径
 * @param G
 * @return
 */
int* Floyd(MGraph G);