#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
/*
#define check(pos) (prime[pos/64] & (1 << ((pos >> 1) & 31)))
#define on(pos) prime[pos/64] |= (1 << ((pos >> 1) & 31));
*/
#define N 30000




///Bug ace




int prime[300000];
bool check(int x)
{
    return (prime[x/64] & (1 << ((x >> 1) & 31)));
}
void on(int x)
{
    prime[x/64] |= (1 << ((x >> 1) & 31));
}
void sieve(int n)
{

    memset(prime, 0, sizeof(prime));
    int sz = sqrt(n)+1;
    for(int i=3 ; i<=sz ; i+=2)
    {
        if(!check(i)){
            for(int j=i*i ; j<n ; j+=i){
                    on(j);
            }
        }
    }

}

int main()
{
        int n, k;
        cin>>n;
        sieve(n);
        cout<<2<<" ";
        for (int i = 3; i <= n; i += 2)
        if (!check(i))
            printf("%d ", i);
        cout<<endl;

    return 0;
}


