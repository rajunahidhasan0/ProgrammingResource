#include<stdio.h>
int main(){
	int a[1000],Q[1000],small[1000],i,j=1,k,t,n,l,q;
	int m,M,low,i1,i2,high;
	scanf("%d",&t);
	while(j<=t){
		scanf("%d %d",&n,&q);
		for(i=0,i1=0;i<2*n;i++){
			if(i<n){
				scanf("%d",&a[i]);
			}
			else if(i>=n){
				scanf("%d",&Q[i1]);
				i1++;
			}
		}
		for(i=0;i<q;i++){	
				for(l=0;l<=n-Q[i];l++){
					low=9;
					for(i1=0,i2=l;i1<Q[i];i1++,i2++){
						if(low>a[i2]){
							low=a[i2];
						}
					}
					small[l]=low;
				}
				high=0;
				for(l=0;l<=n-Q[i];l++){
					if(small[l]>9)break;
					if(high<small[l]){
						high=small[l];
					}
				}	
				printf("Ans:%d\n",high);
		}
		j++;
	}
	return 0;
}
