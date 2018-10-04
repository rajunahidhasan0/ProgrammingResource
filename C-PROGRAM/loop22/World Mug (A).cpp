#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
struct st{
    long long a;
    long long b;
}x[500000];
bool com(st u , st v)
{
    return (u.a > v.a);
}
long long ans;

void func(long long n)
{
    if(n==1)return ;
    sort(x, x+n, com);
    long long temp;
    for(long long i=0, j=n-1, k=0 ; i<n ; i++, j--)
    {
            x[j].b = abs(x[i].a-x[j].a);
            x[j].a = max(x[i].a, x[j].a);

            ans+=x[k].b;
            k++;
    }
    func(n/2);
}

int main()
{
    long long n, k, temp;
    ans=0;
    cin>>n;
    for(long long i=0 ; i<n; i++)
    {
        scanf("%lld", &x[i].a);
    }
    func(n);
    cout<<ans<<endl;
    return 0;
}


