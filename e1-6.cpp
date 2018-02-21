#include<stdio.h>

int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if((a+b<=c||b+c<=a||c+a<=b)||(a-b>=c||b-c>=a||c-a>=b)){
		printf("not a triangle");
	}else if (a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
