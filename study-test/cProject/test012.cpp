#include <stdio.h>

// 计算最大公约数的函数
int gcd(int a, int b) {
    int temp;
    while(b!=0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // 从用户输入读取两个整数
    printf("请输入两个整数: ");
    scanf("%d %d", &num1, &num2);

    // 调用函数计算最大公约数
    int result = gcd(num1, num2);

    // 输出结果
    printf("最大公约数是: %d\n", result);

    return 0;
}
