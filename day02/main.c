#include <stdio.h>

int main(void)
{
    // Day 02：scanf 输入练习

    int age;
    double height;
    char letter;
    int first_number;
    int second_number;
    int sum;

    // 练习 1：提示用户输入年龄；用 scanf 读取到 age；再输出 age。
    printf("请输入年龄：");
    scanf("%d", &age);
    printf("你的年龄是：%d\n", age);

    // 练习 2：提示用户输入身高；读取到 height；输出时保留一位小数。
    printf("请输入身高：");
    scanf("%lf", &height);
    printf("你的身高是：%.1f cm\n", height);

    // 练习 3：提示用户输入一个字母；读取到 letter；再输出 letter。
    printf("请输入一个字母：");
    scanf(" %c", &letter);
    printf("你输入的字母是：%c\n", letter);

    // 练习 4：读取两个整数，计算并输出它们的和。
    printf("请输入第一个整数：");
    scanf("%d", &first_number);
    printf("请输入第二个整数：");
    scanf("%d", &second_number);
    sum = first_number + second_number;
    printf("两个整数的和是：%d\n", sum);

    return 0;
}
