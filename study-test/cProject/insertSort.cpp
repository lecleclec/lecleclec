#include<stdio.h>
int main(){
    int a[11]={1,4,6,9,13,16,19,28,40,100};
    int temp1,temp2,number,end,i,j;
    printf("array a:\n");
    for(i=0;i<10;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    printf("insert data:");
    scanf("%d",&number);
    end = a[9];
    if(number>end){
        a[10]=number;
    }else{
        for(i=0;i<10;i++){
            if(a[i]>number){
                temp1=a[i];//插入
                a[i]=number;
                for(j=i+1;j<11;j++){//后移
                    temp2=a[j];//temp2存放被占用的数字
                    a[j]=temp1;
                    temp1=temp2;
                }
                break;
            }
        }
    }
    printf("now array a:\n");
    for(i=0;i<11;i++){
        printf("%5d",a[i]);

    }
    printf("\n");
    return 0;
}