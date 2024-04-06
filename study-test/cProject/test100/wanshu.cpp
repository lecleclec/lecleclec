#include <stdio.h>
int main(){
    int s;
    printf("1000内的完数是:");
    for(int i=1;i<1000;i++){
        s = 0;
        for(int j=1;j<i;j++){
            if((i%j)==0){
                s = s+j;
            }
        }
        if(s==i){
            printf("%d\t",i);
        }
    }
    return 0;
}