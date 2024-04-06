#include <stdio.h>
int main()
{
	int day, month, year, sum;
	printf("请输入查询日期：\n");
	printf("请输入年份：");
	scanf("%d", &year);
	printf("请输入月份：");
	scanf("%d", &month);
	printf("请输入日期：");
	scanf("%d", &day);

	// 计算查询的月份之前月份的总天数，例如：查询3月，那么计算1-2月的总天数
	switch (month)
	{
		case 1:
			sum = 0;
			break;
		case 2:
			sum = 31;
			break;
		case 3: // 此时先按照是平年，即2月份是28天进行计算
			sum = 59;
			break;
		case 4:
			sum = 90;
			break;
		case 5:
			sum = 120;
			break;
		case 6:
			sum = 151;
			break;
		case 7:
			sum = 181;
			break;
		case 8:
			sum = 212;
			break;
		case 9:
			sum = 243;
			break;
		case 10:
			sum = 273;
			break;
		case 11:
			sum = 304;
			break;
		case 12:
			sum = 334;
			break;
		default:
			printf("输入错误，请重新输入！");
			break;
	}

	// 月份总天数再加上日期天数
	sum = sum + day;

	// 判断是否为闰年
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		if (month > 2) { //如果是闰年且月份大于2，总天数加1
			sum++;
		}
	}

	printf("%d年%d月%d日的总天数为：%d", year, month, day, sum);

	return 0;
}