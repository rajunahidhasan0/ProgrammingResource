#include<stdio.h>
#include<string.h>
int main()
{
    char p[105];
    int i,j,n,z;
    scanf("%s",p);
    n=strlen(p);
    for(i=0;i<n;i++){
        z=0;
        for(j=i;j<n;j++){
            if(p[i]==p[j])
                z++;
        }
        if(z>=7) break;
    }
    if(z>=7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
