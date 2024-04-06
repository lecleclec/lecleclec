#include <stdio.h>
int main(){
    int x,y,z,tmp;
    printf("输入三个整数：");
    scanf("%d%d%d",&x,&y,&z);
    if (x > y) { 
		tmp = x;
		x = y;
		y = tmp;
	}
	if (x > z) {
		tmp = z;
		z = x;
		x = tmp;
	}
	// 上面交换后，最小的就在x上，此时只需要y和z比大小
	if (y > z) {
		tmp = y;
		y = z;
		z = tmp;
    }
    printf("%d %d %d",x,y,z);
    return 0;
}