#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define N 102
using namespace std;
char ap[N+11];
int pr[99];
void siv()
{
    int i,j,sq,p;
    sq=sqrt(N)+2;
    ap[1]=1;
    for(i=2;i<sq;i++){
        if(!ap[i]){
            for(j=i*i;j<N;j+=i)ap[j]=1;
        }
    }
    int in=0;

    for(i=2;i<50;i++){
        if(!ap[i]){
            pr[in]=i;
            in++;
            //P(in);
        }

    }
}

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,d=0,sp[]={4,9,25,49};
    char s[100];
    //freopen("test.in","r",stdin);
   // scanf("%",&);
    siv();
    for(i=0;i<4;i++){
        printf("%d\n",sp[i]);
        fflush(stdout);
        scanf(" %s",s);
        if(!strcmp(s,"yes")){
            printf("composite\n");
            fflush(stdout);
            return 0;
        }
    }
    for(i=0;i<15;i++){

        printf("%d\n",pr[i]);
        fflush(stdout);
        scanf(" %s",s);
        if(!strcmp(s,"yes")){
            d++;
        }
    }
    if(d>1)printf("composite\n");
    else printf("prime\n");
    fflush(stdout);
    return 0;
}
