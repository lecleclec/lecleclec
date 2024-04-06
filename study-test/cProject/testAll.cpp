#include <stdio.h>
void numSum();
void numSum2();
void parcissus();
void perfectNum();
void printStar();
int main(){
    printStar();
    return 0;
}
void numSum(){
    double s = 0,t = 1;
    int n;
    for(n=1;n<=20;n++){
        t=t*n;
        s=s+t;
    }
    printf("1!+2!+……+20!=%22.15e\n",s);
}
void numSum2(){
    int n1=100,n2=50,n3=10;
    double k,s1=0,s2=0,s3=0;
    for(k=1;k<=n1;k++){
        s1=s1+k;
    }
    for(k=1;k<=n2;k++){
        s2=s2+k*k;
    }
    for(k=1;k<=n3;k++){
        s3=s3+1/k;
    }
    printf("sum=%15.6f",s1+s2+s3);
}
void parcissus(){
    int i,j,k,n;
    printf("parcissus numbers is:");
    for(n=100;n<1000;n++){
        i=n/100;//百位
        j=n/10-i*10;//十位,需要减去百位
        k=n%10;//个位
        if(i*i*i+j*j*j+k*k*k==n){
            printf("水仙花数parcissus:%d\n",n);
        }
    }
}
void perfectNum(){
    int m,s,i;
    for(m=2;m<1000;m++){
        s=0;
        for(i=1;i<m;i++){
            if((m%i)==0){
                s=s+i;
            }
            if(s==m){
                printf("%d,its factors are ",m);
                for(i=i;i<m;i++){
                    if(m%i==0){
                        printf("%d ",i);
                    }
                }
                printf("\n");
            }
        }
    }
}
void printStar(){
    int i,j,k;
    for(i=0;i<=3;i++){
        for(j=0;j<=2-i;j++){
            printf(" ");
        }
        for (k = 0; k <=2*i; k++)
        {
           printf("*");
        }
        printf("\n");
    }
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf(" ");
        }
        for ( k = 0; k <=4-2*i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}