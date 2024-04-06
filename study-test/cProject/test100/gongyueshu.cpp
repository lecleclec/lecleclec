#include <stdio.h>
int main(){
    int a,b;
    printf("请输入a:");
    scanf("%d",&a);
    printf("请输入b:");
    scanf("%d",&b);
    int z = a*b;
    int temp = 0;
    while(a%b != 0){
        temp = a%b;
        a = b;
        b = temp;
    }
    printf("最大公约数：%d\n",b);
    int min = z/b;
    printf("最小公倍数：%d",min);
    return 0;
}