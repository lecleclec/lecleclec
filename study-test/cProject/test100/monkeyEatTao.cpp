#include <stdio.h>
int main(){
    int day = 9,d1=0,d2=1;
    while(day>0){
        d1 = (d2+1)*2;
        d2 = d1;
        day--;
    }
    printf("%d",d1);
    return 0;
}