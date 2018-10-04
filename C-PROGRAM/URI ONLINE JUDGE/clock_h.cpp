#include<stdio.h>
#include<time.h>
int i;
int main(void)
{
	register int j;
	int k;
	clock_t start,finish;
	start = clock();
	for(k=0;k<100;k++)
		for(i=0;i<32000;i++);
	finish = clock();
	printf("Non-register loop:%ld ticks\n",finish-start);
	start = clock();
	for(k=0;k<100;k++)
		for(i=0;i<32000;i++);
	finish = clock();
	printf("Register loop:%ld ticks\n",finish-start);
	
	
	return 0;
}	

