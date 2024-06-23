#include <iostream>
int main(){

    return 0;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//插入排序
void insertion_sort(int arr[],int len){
    for(int i=1;i<len;i++){
        int key=arr[i];//key为当前找到的值
        int j=i-1;//j为当前值的上一个下标
        while((j>=0)&&(key<arr[j])){//一直向前找，直到找到合适的位置
            arr[j+1]=arr[j];//元素后移
            j--;
        }
        arr[j+1]=key;
    }
}
//冒泡排序
void buble_sort(int arr[],int len){
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
//选择排序
void select_sort(int arr[],int len){
    for(int i=0;i<len-1;i++){
        int min=i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[min]) min=j;
        }
        swap(&arr[i],&arr[min]);
    }
}
//希尔排序
void shell_sort(int arr[],int len){
    int gap,i,j;
    int temp;
    for(gap=len>>1;gap>0;gap>>=1){//gap等于len/2,每次循环gap都除以2
        for(i=gap;i<len;i++){//执行插入排序，
            temp=arr[i];
            for(j=i-gap;j>=0&&arr[j]>temp;j-=gap){
                arr[j+gap]=arr[j];
            }
            arr[j+gap]=temp;
        }
    }
}