//标题:
//完数
//
//类别:
//	
//时间限制:	
//2 S
//
//内存限制:	
//10000 Kb
//
//问题描述:	
//请写一个程序，给出指定整数范围[a，b]内的所有完数，0 < a < b < 10000。
//一个数如果恰好等于除它本身外的所有因子之和，这个数就称为"完数"。
//例如6是完数，因为6=1＋2＋3
//
//输入说明	
//输入为两个整数a和b，a和b之间用空格分隔
//
//输出说明	
//输出[a，b]内的所有完数，每个数字占一行
//
//输入样例	
//1 10
//
//输出样例	
//6

//由题目可知b小于10000，打不打表无所谓，写个函数判断，代码比较美观 
#include<stdio.h>
#include<math.h>
int map[114514];

int IsPerfect(int num){
	int res = 1;//result默认输入的数比1大，所有数都有因子1 
	for(int i = 2; i < sqrt(num*1.0); i++){
		if(num%i==0){
			res += i;
			res += (num/i);
		}
	}
	if(res == num)
		return 1;
	else
		return 0;
} 

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i = a; i <= b; i++){
		if(i==1)
			continue;
		if(IsPerfect(i))
			printf("%d\n",i);//因为垃圾xdoj貌似不管你最后一行多没多出来空格换行啥的，所以不做处理 
	}
	return 0; 
}
