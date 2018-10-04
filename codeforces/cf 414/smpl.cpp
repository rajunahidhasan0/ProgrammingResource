#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n;
    freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%",&);

        printf("Case %d: \n",++cn,);
    }
    return 0;
}

//test PC
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n;
    char s[50];
    freopen("test.txt","r",stdin);
    scanf("%d ",&ts);
    gets(s);
    puts(s);
    P(ts);
    while(ts--){
        printf("Case %d: A\n",++cn);
    }
    return 0;
}


//Breaking string
char s[222],ar[14][22];
int n,ln;
void strbk()
{
    int i,j;
    ln=strlen(s);
    s[ln]=' ';
    n=0;
    for(i=0;i<ln;i++){
        for(j=i;j<=ln;j++){
            if(s[j]==' '){
                ar[n][j-i]=0;
                i=j;
                n++;
                break;

            }
            ar[n][j-i]=s[j];
        }
    }
}


int ft[16];
void fact()
{
    int i=1;
    ft[0]=1;
    for(;i<13;i++)ft[i]=ft[i-1]*i;
}


char ap[N];
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
}

int iprm(int n)
{
    if(n==2)return 1;
    if(!(n%2)||n<2)return 0;
    int i,sq=sqrt(n)+2;
    for(i=3;i<sq;i+=2)if(!(n%i))return 0;
    return 1;
}


//bs
#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
struct st{
    int a,b;
    bool operator < (const st&x)const {
        return a<x.a;
    }
}s1[555],s2;
int x;
int bns(st n)
{
    int a=0,b=x,m;
    for(;a<=b;){
        m=(a+b)/2;
        if(s1[m].a<n.a)a=m+1;
        else if(s1[m].a>n.a)b=m-1;
        else return m;
    }
    return -1;
}
int main()
{
    int i,j,a,b,ts,cn=0,n;
    freopen("test.txt","r",stdin);
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&s1[i].a);
        s1[i].b=i;
    }
    sort(s1,s1+x);
    while(scanf("%d",&s2.a)==1) {
        n=bns(s2);
        if(n!=-1)printf("Case %d: %d %d\n",++cn,s1[n].b,n);
        else puts("Not found!");
    }
    return 0;
}

