#include <stdio.h>
int main(){
    int n;
    printf("请输入一个正整数");
    scanf("%d",&n);
    printf("%d = ",n);
    for(int i=2;i<=n;i++){
        while(i!=n){
            if(n%i==0){
                printf("%d *",i);
                n = n/i;
            }else{
                break;
            }
        }
    }
    printf("%d",n);
    return 0;
}