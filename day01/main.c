#include <stdio.h>

int main(void)
{
    // Day 01: 变量、数据类型与 printf
    // 请自己完成今天的练习。
//输出自己的年龄。
//定义一个 double 变量保存自己的身高，并输出。
//定义一个 char 变量保存一个字母，并输出。
//定义三个变量：年龄、身高、体重，并一次性输出。
//修改 main.c，让程序输出三行不同的信息。

    int age = 21;       
    double height = 170.0;  
    int weight = 56;
    char a = 'a';
    
 
    printf("年龄:%d身高:%.1f体重:%d",age,height,weight);
    printf("字母:%c\n",a);
    printf("day1完成.\n");

    return 0;
}
