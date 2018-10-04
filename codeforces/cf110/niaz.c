#include <stdio.h>
#include <string.h>
int main()
{
freopen("t1.txt","w",stdout);
freopen("test.txt","r",stdin);

char a[100];
int j,length,i;
gets(a);
length=strlen(a);
for(i=0,j=0;j<=length;i++,j++){
while(a[j]=='A' || a[j]=='a' || a[j]=='E' || a[j]=='e' || a[j]=='I' || a[j]=='i' || a[j]=='O' || a[j]=='o' || a[j]=='U' || a[j]=='u') j++;
a[i]=a[j];
}
printf("%s\n",a);
return 0;
}
