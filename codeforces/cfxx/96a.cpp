//100001000011010110000
#include<stdio.h>
#include<string.h>

int main()
{
    char tm[100] ;
    int i,x=0, y=0,length;
    scanf("%s",tm);
    length=strlen(tm);
    for(i=0; i< length; i++){
        if(tm[i]=='1'){
            y=0; x++;
        }
        else if(tm[i]== '0'){
            x=0; y++;
        }
        if(x>=7 || y>=7)
            break;
    }

    if(x>=7 || y>=7)
       printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
