//题目描述：计算给定一组整数中奇数的和，直到遇到0时结束。
//
//输入格式：共一行，输入一组整数，以空格分隔
//
//输出格式：输出一个整数
//
//示例：
//输入：1 2 3 4 5 0 6 7 
//输出：9
#include<stdio.h>

int main(){
	int result=0,num;
	while(1){
		scanf("%d",&num);
		if(num==0)
			break;
		if(num%2==1)
			result+=num;
	}
	printf("%d",result);
	return 0;
}
