#include<stdio.h>
#include<math.h>

int main(){
	const double pi = acos(-1.0);
	double n;
	scanf("%lf",&n);
	n = n * pi/180; //�Ƕ�ת���ȣ�sin��cos�Ĳ���ֵ�ǻ��ȡ� 
	printf("%lf\n%lf\n",sin(n), cos(n));
	return 0;
}
