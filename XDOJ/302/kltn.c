//problem 4-6 质数求和
//
//时间限制：1S
//
//问题描述	
//输入一个大于20的正整数p，求出正整数范围内第p个质数(或素数，大于1且只能被1和自己整除的正整数,)到第p+10个质数之和。其中，第1个质数为2，第2个质数为3，第3个质数为5，第4个质数为7，依次类推。
//
//输入说明	
//一行输入1个整数p，20< p <150。
//
//输出说明	
//第p个质数到第p+10个质数之和。
//
//
//输入样例：
//21
//输出样例：
//1081
//
#include<stdio.h>
#include<math.h>

int primes[200];

int IsPrime(int n){
	for(int i = 2; i <= sqrt(n*1.0); i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	int countprime=0;//预先生成160个素数然后再读取 //please view on github( if encoding is incorrect)
	for(int i = 2; countprime < 160; i++){
		if(IsPrime(i)){
			primes[countprime] = i;
			countprime++;
		}
	}
	scanf("%d",&n);
	
	int result = 0;
	for(int i = n-1; i < n+10; i++){
		result += primes[i];
	}
	printf("%d", result);
	return 0;
}
