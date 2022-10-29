//标题
//阶乘之和
//
//描述
//输入自然数N（N<10），采用双层for循环结构，计算N！和ΣN!，并输出结果。
//
//时间限制
//1	
//
//内存限制
//10000	
//
//类别
//1
//
//输入说明
//输入自然数N（<10），如7	
//
//输出说明
//输出N、N!、ΣN!	
//
//输入样例
//7
//
//输出样例
//7 5040 5913
//
//提示
//采用双层for循环结构，不大于10的自然数的阶乘之和
//
#include<stdio.h>

int main(){
	int n;
	int total=0,index=1;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		index*=i;
		total += index;
	}
	printf("%d %d %d",n,index,total);
	return 0;
}
