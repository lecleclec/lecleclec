#include <stdio.h>
int main(){
    float s=100.0,h=s/2;
    for(int n =2 ; n <= 10;n++){
        s = s + 2 * h;
        h = h / 2;
    }
    printf("经过%f米\n",s);
    printf("10次反弹高度为%f",h);
    return 0;
}