#include<stdio.h>
struct al{
	int a,b,c;
	char ch;
	char str[100];
	double lf=20.6;
	float f=52.154;
}al;
int main(){
	scanf("%d %d",&al.a,&al.b);
	printf("%lf %f",al.lf,al.f);
	return 0;
}
