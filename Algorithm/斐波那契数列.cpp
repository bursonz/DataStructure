//
// Created by Burson on 2020/11/1.
//
// 斐波那契数列（Fibonacci sequence）
// 王道 数据结构 P12 思维拓展
// n>1时 F(n)=F(n-1)+F(n-2)
// n=1,n=0时 F(n)=1
//

/**
 * 斐波那契数列_递归实现
 * @param n
 * @return
 */
int Fibonacci_Recursion(int n){
    if(n==0||n==1)
        return 1;
    else
        return Fibonacci_Recursion(n-1)+Fibonacci_Recursion(n-2);
}

/**
 * 斐波那契数列_非递归
 * @param n
 * @return
 */
int Fibonacci(int n){
    int a=1,b=1,result=1;
    for (int i = 2; i <= n ; ++i) {
        a=b;         //F(i-2)
        b=result;    //F(i-1)
        result=a+b;  //F(i)
    }
    return result;
}