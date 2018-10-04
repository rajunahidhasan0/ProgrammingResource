#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
const int MX = 1e7 + 10 ;
const int NX = 1e6 ;
int pos  , prime[NX] ;
bool check[MX];
void seive()
{
    int i , j;
    pos = 0 ;
    for ( i = 4 ; i < MX ; i+= 2 ) check[i] = 1 ;
    for ( i = 3 ; i*i < MX ; i += 2 )
    {
        if( check[i] == 0 )
        {
            prime[pos++] = i ;
            for ( j = i * i ; j < MX ; j += i ) check[j] = 1 ;
        }
    }
    while( i < MX )
    {
        if( check[i] == 0 ) prime[pos++] = i ;
        i += 2 ;
    }
}
long long func( long long n)
{
    while( n % 2 == 0 ) n/=2 ;
    int i ;
    long long ans = 1 ;
    for ( i = 0 ; i < pos &&  prime[i] * prime[i] <= n ; i++ )
    {
        long long cnt = 0 ;
        while( n % prime[i] == 0 )
        {
            cnt++;
            n/=prime[i];
        }
        ans *= ( cnt + 1 );
    }

    if ( n > 2 ) ans *= 2 ;
    return ans -  1 ;
}
int main()
{
   seive();
   int cs=0 ,  t;
   cin>>t;
   while(t--){
       long long n  ;
       cin>>n;
       if ( n < 3 ) printf("Case %d: 0\n",++cs);
       else
        printf("Case %d: %lld\n",++cs, func(n));
   }
    return 0;
}
