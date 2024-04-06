#include <stdio.h>
int main(){
    float money = 0,result=0,temp=0;
    printf("请输入当月利润：");
    scanf("%f",&money);
    if(money<=10){
        result = money *0.1;
    }else if(money>10&&money<=20){
        temp = money -20;
        result = 10*0.1+temp *0.075;
    }else if (money > 20 && money <= 40) {
		temp = money - 20;
		result = 10 * 0.1 + temp * 0.05;
	}
	else if (money > 40 && money <= 60) {
		temp = money - 40;
		result = 10 * 0.1 + temp * 0.03;
	}
	else if (money > 60 && money <= 100) {
		temp = money - 60;
		result = 10 * 0.1 + temp * 0.015;
	}
	else
	{
		temp = money - 100;
		result = 10 * 0.1 + temp * 0.01;
	}
	printf("应发放奖金总数为：%f 万",result);

	return 0;
}