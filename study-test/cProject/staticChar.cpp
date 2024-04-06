#include <stdio.h>
int main(){
    char c;
    int letters=0,space=0,other=0;
    printf("请输入一串字符：");
    while((c=getchar())!='\n'){
        if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
            letters++;
        }else if(c==' '){
            space++;
        }else{
            other++;
        }
    }
    printf("您输入的字符串中,字母有%d个,空格有%d个,其他字符有%d个",letters,space,other);
    return 0;
}