#include<stdio.h>
int main(){
	int i,j,k,n,a=90;
	char string[1000]="My name is khan.";
	FILE *fp;
	fp=fopen("new.txt","w");
	
	fprintf(fp,"%d\nSuccessful",1);
	fscanf(fp,"%d %s",&a,string);
	fprintf(fp,"%d %s",a,string);
	printf("%d %s",a,string);
	printf("Successful");
	
	fclose(fp);
	return 0;
}
