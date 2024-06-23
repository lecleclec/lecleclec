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