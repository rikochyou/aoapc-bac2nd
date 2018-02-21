#include<stdio.h>
#include<math.h>

int main(){
	const double pi = acos(-1.0);
	double n;
	scanf("%lf",&n);
	n = n * pi/180; //角度转弧度，sin和cos的参数值是弧度。 
	printf("%lf\n%lf\n",sin(n), cos(n));
	return 0;
}
