# 树

[TOC]

## 基本概念

![image-20200717140940286](README.assets/image-20200717140940286.png)

### 性质

![image-20200717141626140](README.assets/image-20200717141626140.png)

### 考点

1. 结点数=总度数+1

2. 度为m的树、m叉树的区别

   ​	![image-20200717141858927](README.assets/image-20200717141858927.png)

3. 度为m的树第i层至多有m^i-1^个结点（i>=1）

   m叉树第i层至多有m^i-1^个结点（i>=1）

   ​	![image-20200717142104432](README.assets/image-20200717142104432.png)

4. 高度为h的m叉树至多有多少个结点

   ​	![image-20200717142152358](README.assets/image-20200717142152358.png)

5. 

   ​	![image-20200717142329995](README.assets/image-20200717142329995.png)

6. 

   ​	![image-20200717142526425](README.assets/image-20200717142526425.png)


### 结点之间的关系描述

### 结点、树的属性描述

### 有序树、无序树

### 森林



## 二叉树

### 定义与主要特征

### 存储结构

#### 顺序存储

#### 链式存储

### 遍历

### 线索二叉树



## 树、森林

### 树的存储结构

![image-20200723172439339](README.assets/image-20200723172439339.png)



#### 双亲表示法

![image-20200723170316830](README.assets/image-20200723170316830.png)



#### 孩子表示法

![image-20200723172014117](README.assets/image-20200723172014117.png)



#### 孩子兄弟表示法

![image-20200723172220453](README.assets/image-20200723172220453.png)



### 与二叉树的转换

![image-20200723172358259](README.assets/image-20200723172358259.png)

![image-20200723172412142](README.assets/image-20200723172412142.png)

### 树和森林的遍历

![image-20200723183256643](README.assets/image-20200723183256643.png)

#### 树的遍历

##### 先根遍历

![image-20200723175720179](README.assets/image-20200723175720179.png)

##### 后根遍历

![image-20200723175921214](README.assets/image-20200723175921214.png)

![image-20200723182841826](README.assets/image-20200723182841826.png)

##### 层次遍历

![image-20200723182802318](README.assets/image-20200723182802318.png)

![image-20200723182833117](README.assets/image-20200723182833117.png)



#### 森林的遍历

##### 先序遍历森林

![image-20200723183103016](README.assets/image-20200723183103016.png)

![image-20200723183129960](README.assets/image-20200723183129960.png)

##### 中序遍历森林

![image-20200723183156583](README.assets/image-20200723183156583.png)

![image-20200723183219694](README.assets/image-20200723183219694.png)





## 树与二叉树的应用

### 二叉排序树（BST)

![image-20200724115505266](README.assets/image-20200724115505266.png) 

#### 定义

![image-20200724114405261](README.assets/image-20200724114405261.png)

 

#### 查找

![image-20200724114457033](README.assets/image-20200724114457033.png)

![image-20200724114508315](README.assets/image-20200724114508315.png)

![image-20200724114533451](README.assets/image-20200724114533451.png)

#### 插入

![image-20200724114608180](README.assets/image-20200724114608180.png)



#### 构造

![image-20200724114631238](README.assets/image-20200724114631238.png)

![image-20200724114649969](README.assets/image-20200724114649969.png)



#### 删除

![image-20200724114840311](README.assets/image-20200724114840311.png)



#### 查找效率分析

![image-20200724115337092](README.assets/image-20200724115337092.png)

![image-20200724115353451](README.assets/image-20200724115353451.png)

![image-20200724115443999](README.assets/image-20200724115443999.png)



### 平衡二叉树

![image-20200724115528861](README.assets/image-20200724115528861.png)

![image-20200724151741559](README.assets/image-20200724151741559.png)



#### 定义

![image-20200724142847295](README.assets/image-20200724142847295.png)



#### 插入

![image-20200724142943051](README.assets/image-20200724142943051.png)

![image-20200724143003158](README.assets/image-20200724143003158.png)

![image-20200724150625862](README.assets/image-20200724150625862.png)

![image-20200724150640272](README.assets/image-20200724150640272.png)

![image-20200724150724432](README.assets/image-20200724150724432.png)

![image-20200724150800459](README.assets/image-20200724150800459.png)



#### 调整

![image-20200724143035748](README.assets/image-20200724143035748.png)

![image-20200724144159835](README.assets/image-20200724144159835.png)



##### 单旋转

![image-20200724143628633](README.assets/image-20200724143628633.png)

###### LL

![image-20200724143340842](README.assets/image-20200724143340842.png)

###### RR

![image-20200724143445770](README.assets/image-20200724143445770.png)

##### 双旋转

###### LR

![image-20200724143848521](README.assets/image-20200724143848521.png)

![image-20200724143920160](README.assets/image-20200724143920160.png)

![image-20200724143944762](README.assets/image-20200724143944762.png)



###### RL

![image-20200724144048357](README.assets/image-20200724144048357.png)

![image-20200724144059797](README.assets/image-20200724144059797.png)

![image-20200724144110723](README.assets/image-20200724144110723.png)



#### 查找

![image-20200724151711387](README.assets/image-20200724151711387.png)



### 哈夫曼树和哈夫曼编码

![image-20200724121250917](README.assets/image-20200724121250917.png)



#### 带权路径长度

![image-20200724121453344](README.assets/image-20200724121453344.png)



#### 定义

![image-20200724121555902](README.assets/image-20200724121555902.png)



#### 构造

![image-20200724121750999](README.assets/image-20200724121750999.png)

![image-20200724121807894](README.assets/image-20200724121807894.png)



#### 编码

![image-20200724122010821](README.assets/image-20200724122010821.png)

![image-20200724122118020](README.assets/image-20200724122118020.png)

![image-20200724122243800](README.assets/image-20200724122243800.png)

![image-20200724122308929](README.assets/image-20200724122308929.png)

![image-20200724122406804](README.assets/image-20200724122406804.png)

