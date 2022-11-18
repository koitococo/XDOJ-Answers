//题目：字符串元素统计
//时间限制：1S
//内存限制：10000Kb
//问题描述：
//
//编写一个函数，由实参传来一个字符串，统计字符串中字母，数字的个数，在主函数中输入字符及输出上述结果。
//输入说明：
//随机输入一个字符串。
//输出说明：
//依次输出该字符串中字母，数字的个数。
//输入样例
//abc123
//输出样例：
//3,3

#include<stdio.h>

int main(){
	char str[114514];
	scanf("%s",&str);
	//please view on github( if encoding is incorrect)
	//查ascii码表，数字在[48,57]，大写字母[65,90]，小写字母[97,122]
	int num=0,letter=0;
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i]>=48&&str[i]<=57)
			num++;
		if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
			letter++;
	} 
	printf("%d,%d",letter,num);
	return 0;
}
