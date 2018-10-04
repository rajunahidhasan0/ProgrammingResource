#include <stdio.h>
#include <stdlib.h>
int dect(char *s1,char *s2 ,int *m1,int *m2)
{
    int i,j,mx=0,c=0;
    for(i=0;s1[i];i++){
        if(s1[i]==s2[i])c++;
        else c=0;
        if(c>mx)mx=c;
    }
    if(mx>=3){
        switch(mx){
            case 3:
                *m1-=3;
                *m2-=3;
                break;
            case 4:
                *m1-=4;
                *m2-=4;
                break;
            default:
                *m1-=5;
                *m2-=5;

        }
    }
}
struct stdn{
    char nm[20];
    int mrk,rl;
}st[10];
int cmp(const void *a,const void *b)
{
    /*struct s1 x,y;
    x=*(struct s1*)a;
    y=*(struct s1*)b;
    return y.sr-x.sr;*/
    return ((struct stdn*)b)->mrk-((struct stdn*)a)->mrk;
}

int main()
{
    FILE *fp,*fst;
    fp=fopen("exam.txt","r");
    fst=fopen("result.txt","w");
    int a,b,i=0,j,mr[100],ts,n;
    char s[15][20];
    fscanf(fp,"%d",&n);
    do{
        fscanf(fp," %[^\n]s ",st[i].nm);
        fscanf(fp," %d ",&st[i].rl);
        fscanf(fp," %[^\n]s ",s[i]);
        puts(s[i]);
        scanf("%d",&mr[i]);
        i++;
    }while(i<n);
    ts=n;
    i=1;
    while(ts--){
        dect(s[i-1],s[i],&mr[i-1],&mr[i]);
        i++;
    }
    for(i=0;i<n;i++){
        st[i].mrk=mr[i];
    }
    qsort(st,n,sizeof (struct stdn),cmp);
    fprintf(fst,"     Wadian High School\n");
    fprintf(fst,"\tResult Sheet\n");
    fprintf(fst,"Roll   Name    Marks  Old Roll\n\n");
    for(i=0;i<n;i++){
        fprintf(fst,"%2d     %s\t%2d   %4d\n",i+1,st[i].nm,st[i].mrk,st[i].rl);
    }
    puts("Result Published Successfully");
    fclose(fp);
    fclose(fst);

}
