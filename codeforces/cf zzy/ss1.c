#include <stdio.h>
int mt[4][4];
void mtx()
{
    int i,j,t;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            t=mt[i][j];
            mt[i][j]=mt[j][i];
            mt[j][i]=t;

        }
    }
}
int main()
{
    int i,j,*p;
    char str[]="starting of array is";
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&mt[i][j]);
        }
    }
    p=&mt[0][0];
    mtx(mt);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",mt[i][j]);
        }
        printf("\n");
    }
    printf("%s %p\n",str,p);
}
