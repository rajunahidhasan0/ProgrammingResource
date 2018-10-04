#include<stdio.h>
#include<string.h>
int check(char ch){
	int q;
	if(ch=='B' || ch=='C' || ch=='D' || ch=='F' || ch=='G' || ch=='K' || ch=='P' || ch=='Q' || ch=='R' || ch=='4' || ch=='6' || ch=='7' || ch=='9'){
	 	q=0;
	 }
	 else{
	 	q=1;
	 }
	
	return q;
}
int main(){
	int i,j,l,t=1,T=1,c,ok=0;
	char str[25],str2[25];
	while(scanf("%[\0]s",str)!=EOF){
		l=strlen(str);
		for(i=0,j=l-1;i<l;j--,i++){
			if(T==1){
				t=check(str[i]);
				if(t==0){
					
					ok=1;	
				}
			}
			str2[j]=str[i];
		}
		c=strcmp(str,str2);
		if(c==1 && t==1){
			printf("%s -- is a mirrored palindrome.\n",str);
		}
		else if(c==1 && t==0){
			printf("%s -- is a regular palindrome.\n",str);
		}
		else if(c==0 && t==1 && ok==1){
			printf("%s -- is a mirrored string.\n",str);
		}
		else{
			printf("%s -- is not a palindrome.\n",str);
		}
	}
	return 0;
}
