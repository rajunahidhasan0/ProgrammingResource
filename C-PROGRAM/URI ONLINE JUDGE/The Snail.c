#include<stdio.h>
int main()
{
	int h,u,d,f,i,n;
	double ht,dou,u1;
	while(scanf("%d",&h)==1 && h!=0){
		scanf("%d %d %d",&u,&d,&f);
		ht=0;
		dou=u*(f/100.0);
		u1=u;
		for(i=1;;i++){
			ht=ht+u1;
			if(ht>h){
				printf("success on day %d\n",i);
				break;
			}
			ht=ht-d;
			u1=u1-dou;	
			if(ht<0){
				printf("failure on day %d\n",i);
				break;
			}	
		}	
	}
	return 0;
}

