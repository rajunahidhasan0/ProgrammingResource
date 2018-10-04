#include <stdio.h>
int cost(char *mango)
{
    int i,total=0;
    for(i=0;mango[i]!='\0';i++){
        switch(mango[i]){
            case 'A':
                total=total+8;
                break;
            case 'B':
                total=total+5;
                break;
            case 'C':
                total=total+3;
                break;
            case 'D':
                total=total+2;
                break;
        }
    }
    return total;
}
int main()
{
    FILE *fp;
    int i=1,n,cst;
    char mango[30];
    fp=fopen("Mangoes.txt","r");
    scanf("%d ",&n);
    while(i<=n){
        fscanf(fp,"%s",mango);
        cst=cost(&mango[0]);
        if(cst>0)printf("Income of Day %d: %d taka\n",i,cst);
        else printf("No income in day %d\n",i);
        i++;

    }
    return 0;
}
