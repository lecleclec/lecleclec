#include <stdio.h>
#include<string.h>

void swap(char* str1, char* str2) {
	char temp[20];
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
}
int main(void)
{
	char str1[20] = "";
	char str2[20] = "";
	char str3[20] = "";

	// 第1个参数;把字符串存给谁
	// 第2个参数;存储空间有多长
	// 第3个参数;标准输出
	printf("请输入第1个字符串：\n");
	fgets(str1, 20, stdin);
	printf("请输入第2个字符串：\n");
	fgets(str2, 20, stdin); 
	printf("请输入第3个字符串：\n");
	fgets(str3, 20, stdin);
	if (strcmp(str1, str2) > 0) swap(str1, str2);
	if (strcmp(str1, str3) > 0) swap(str1, str3);
	if (strcmp(str2, str3) > 0) swap(str2, str3);

	printf("%s,%s,%s\n", str1, str2, str3);


	return 0;
}
