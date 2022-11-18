//题目描述：编写程序，计算交错序列1-2/3+3/5-4/7+5/9-6/11+…的前N项之和。
//
//输入格式：输入一个正整数
//
//输出格式：输出计算结果，结果保留三位小数
//
//示例：
//输入：5
//输出：0.917
int main(){
	int n;
	double index, plus=-1.0;
	double result=0.0;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		plus*=-1.0;
		index=plus*i/(i*2.0-1.0);
		//printf("%lf",index);
		result += index;
	}
	printf("%.3lf",result);
	return 0;
}
