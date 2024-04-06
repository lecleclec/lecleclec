#include <stdio.h>
int main(){
    int score;
    char grade;
    printf("请输入成绩");
    scanf("%d",&score);
    grade = score>=90 ? 'A' : (score < 60 ? 'C' : 'B');
    printf("%c",grade);
    return 0;
}