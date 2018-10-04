#include <stdio.h>
#include <string.h>
int main()
{
freopen("t2.txt","w",stdout);
freopen("test.txt","r",stdin);

char a[1000];
int j,length,k;

gets(a);
length=strlen(a);

for(j=0;j<length;j++){
    if(a[j]=='A' || a[j]=='a' || a[j]=='E' || a[j]=='e' || a[j]=='I' || a[j]=='i' || a[j]=='O' || a[j]=='o' || a[j]=='U' || a[j]=='u') {
        for(k=j;k<length;k++){
            a[k]=a[k+1];
             j--;
          }
    }
}
printf("%s\n",a);
return 0;
}
