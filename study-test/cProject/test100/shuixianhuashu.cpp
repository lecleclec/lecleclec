#include <stdio.h>
int main(){
    int i=0;
    for(i=100;i<=999;i++){
        int a = i%10;
        int b = i%100/10;//十位
        int c = i/100;
        if(a*a*a+b*b*b+c*c*c==i){
            printf("%d\t",i);
        }
    }
    return 0;
}