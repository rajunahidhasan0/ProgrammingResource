#include <bits/stdc++.h>
using namespace std;

char str1[1005][15];
char str11[1005][20];
char str2[1005][15];
char str22[1005][20];

int main(void)
{
    int i,j,k,l,m,n,ll;
    scanf("%d %d",&n,&m);
    getchar();
    for(int i=0;i<n;i++){
        scanf("%s %s",&str1[i],&str11[i]);
        ll=strlen(str11[i]);
        str11[i][ll]=';';
        str11[i][ll+1]='\0';
    }
    //printf("%s",str1[2]);
    for(int i=0;i<m;i++){
        scanf("%s %s",&str2[i],&str22[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                //printf("kk");
            if(!strcmp(str22[i],str11[j])){
                printf("%s %s #%s\n",str2[i],str22[i],str1[j]);
            }
        }
    }
    return 0;
}
