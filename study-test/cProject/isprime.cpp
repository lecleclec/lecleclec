#include <stdio.h>
int main(){
    int i=0;
    int count = 0;
    for(i=101;i<=200;i++){
        int j=0;
        int flag=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d\t",i);
            count++;
        }
    }
    printf("素数的个数是%d",count);
    return 0;
}