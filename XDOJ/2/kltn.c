//题目2：数列分段
//问题描述
//　　给定一个整数数列，数列中连续相同的最长整数序列算成一段，问数列中共有多少段？
//输入格式
//　　输入的第一行包含一个整数n，表示数列中整数的个数。
//　　第二行包含n个整数a1, a2, …, an，表示给定的数列，相邻的整数之间用一个空格分隔。
//输出格式
//　　输出一个整数，表示给定的数列有多个段。
//样例输入
//8
//8 8 8 0 12 12 8 0
//样例输出
//5
//样例说明
//　　8 8 8是第一段，0是第二段，12 12是第三段，倒数第二个整数8是第四段，最后一个0是第五段。
//评测用例规模与约定
//1 ≤ n ≤ 1000，0 ≤ ai ≤ 1000。
//
#include<stdio.h>

int nums[1145];

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&nums[i]);
	}
	
	int counter = 0;
	int temp;
	
	for(int i = 0; i < n; i++){
		temp = nums[i];//please view on github( if encoding is incorrect)
		//预先定义一个temp储存正在搜索的相同整数序列的第一个数 
		while(i<n && nums[i+1] == temp){//为什么i+1？因为while结束后for还会再给i+1，此时的nums[i]已经是下一个相同
		//整数数列的第一个数了，所以i+1，正好可以从temp所在下一个数开始搜索 
			i++;
		}
		counter++;
	}
	printf("%d",counter);
	return 0;
} 
