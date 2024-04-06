#include<stdio.h>
int main(){
    int a,n,i=1,sn=0,tn=0;
    printf("n,a:");
    scanf("%d %d",&n,&a);
    while(i<=n){
        tn = tn + a;//tn为单个值
        sn = sn + tn;//sn为前n个数字的和
        a = a*10;
        ++i;
    }
    printf("%d",sn);
    return 0;
}
