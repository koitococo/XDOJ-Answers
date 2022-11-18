//标题	
//日期计算
//
//类别
//流程控制
//
//时间限制	
//1S
//
//内存限制	
//256Kb
//
//问题描述	
//给定一个年份y和一个整数d，问这一年的第d天是几月几日？   
//注意闰年的2月有29天，且满足下面条件之一的是闰年：   
//1） 年份是4的整数倍，而且不是100的整数倍；
//2） 年份是400的整数倍
//
//输入说明	
//输入包含两个整数y和d，y表示年份，年份在1900到2018之间（包含1900和2018）。 d表示这一年的第几天，d在1至365之间。
//
//输出说明	
//在一行输出两个整数，分别表示答案的月份和日期。
//
//输入样例	
//2015 80
//
//输出样例	
//3  21
//
//	
#include<stdio.h>

int month = 1;
int year,days;

int compare(int monthday){
	if(days<=monthday)
		return;
	else{
		days -= monthday;
		month++;
		return;
	}
}

int main(){
	scanf("%d %d",&year,&days);
	//写一个函数会让代码阳间一点 
	if((year%4==0 && year%100 != 0) || year % 400 == 0){//闰年 
		compare(31);
		compare(29);
		compare(31);
		compare(30);
		compare(31);
		compare(30);
		compare(31);
		compare(31);
		compare(30);
		compare(31);
		compare(30);
		compare(31);
		printf("%d %d",month,days);
	}
	else{
		compare(31);
		compare(28);
		compare(31);
		compare(30);
		compare(31);
		compare(30);
		compare(31);
		compare(31);
		compare(30);
		compare(31);
		compare(30);
		compare(31);
		printf("%d %d",month,days);
	}
	return 0;
}
