#include<stdio.h>
int main(){
	int a, b, c, sum;
	double average;
	scanf("%d%d%d",&a, &b, &c);
	sum = a + b +c;
	average = sum/3.0;
	printf("%.3lf",average);
	return 0;
}
