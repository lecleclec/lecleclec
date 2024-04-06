#include <stdio.h>
int main(){
    char a,b,c;
    for(a='x';a<='z';a++){
        for(b='x';b<='z';b++){
            if(b!=a){
                for(c='x';c<='z';c++){
                    if(c!=a&&c!=b){
                        if(a != 'x' && c != 'x' && c != 'z'){
                        printf("a-%c\nb-%c\nc-%c\n",a,b,c);
                        }
                    }
                }
            }
        }
    }
    return 0;
}