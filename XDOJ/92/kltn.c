#include<stdio.h>

int main(){
	int salary;
	scanf("%d",&salary); 
	int hundred=0,fifty=0,twenty=0,ten=0,five=0,one=0;
	hundred = salary/100;
	salary %= 100;
	fifty = salary/50;
	salary%=50;
	twenty = salary/20;
	salary %= 20;
	ten = salary/10;
	salary %= 10;
	five = salary/5;
	salary %= 5;
	one = salary;
	printf("%d %d %d %d %d %d",hundred,fifty,twenty,ten,five,one);
	
	return 0;
}
