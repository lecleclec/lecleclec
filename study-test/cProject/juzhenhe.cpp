#include <stdio.h>
int main(){
    int a[3][3],sum=0;
    int i,j;
    printf("enter data\n");
    for(int i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%3d",&a[i][i]);
        }
    
    }
    for(i=0;i<3;i++){
        sum=sum+a[i][i];
    }
    printf("suum=%6d\n",sum);
    return 0;
}