#include <stdio.h>
int main(){
    int a;
    printf("请输入a:");
    scanf("%d",&a);
    printf("请输入n:");
    int n,sum=0,tempsum = 0,temp=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        tempsum = tempsum + a*temp;
        sum = sum + tempsum;
        temp = temp * 10;
    }
    printf("最终的结果是:%d",sum);
    return 0;
}