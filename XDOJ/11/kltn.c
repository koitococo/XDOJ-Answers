#include<stdio.h>

int main(){
//	编写程序，计算用户输入的两个整数的和、差、乘积（*）和商（/）。
//	输入两个整数，整数之间用空格分隔。
//	输出四个整数结果，分别表示和、差、积和商，每输出一个结果换行。
	int a,b;
	scanf("%d %d" , &a , &b);
	printf("%d\n%d\n%d\n%d" , a+b , a-b , a*b , a/b);
	return 0;
} 
