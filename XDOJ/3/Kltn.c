#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int map[23333];
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d",&map[i]);
	}
	qsort(map, n, sizeof(int), cmpfunc);
	
	int min = map[0] - map[1];
	for(int i = 1; i < n-1; i++){
		if (map[i] - map[i+1] < min)
			min = map[i] - map[i+1];
		if (map[i] - map[i+1] == 0){
			printf("0");
			return 0;
		}
	}
	
	printf("%d",min);
	return 0;
}
