#include <stdio.h>
int main(){
    char c;
    int zifu=0,digit=0,space=0,other=0;
    printf("请输入一行字符:");
    while((c = getchar()) != '\n'){
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            zifu++;
        }else if(c==' '){
            space++;
        }else if (c >= '0' && c <= '9'){
            digit++;
        }else{
            other++;
        }
    }
    printf("字符有%d,数字有%d,空格有%d,其他有:%d",zifu,digit,space,other);

    return 0;
}