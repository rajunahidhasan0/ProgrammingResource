#include<bits/stdc++.h>
using namespace std;

typedef long long INT;

INT gcd(INT x, INT y) {
     return y? gcd(y,x%y):x;
}

int main()
{
    short int hash[1000010]={0};
    INT n,i,j,k,a,b,c,ma,mb,mc;
    INT count,ans;

    /*freopen("a.in","r",stdin);*/

    while (scanf("%lld", &n) == 1){
        count = 0;

        for (i = 1; i*i <= n; ++i){
            for (j = i + 1; j*j <= n; j += 2){
                if (gcd(i, j) == 1) {
                    /*Euler Formula*/
                    a = j * j - i * i;
                    b = 2 * i * j;
                    c = i * i + j * j;
                    if (c > n)
                        break;
                    /*All Number is included into P.t.*/
                    ma =a,mb=b,mc=c;
                    while (mc <= n){
                      hash[ma] = hash[mb] = hash[mc] = 1;
                      ma+=a;
                      mb+=b;
                      mc+=c;
                    }
                    ++count;
                }
            }
        }

        ans = n; /*Not in triples*/
        for (i = 1; i <= n; ++i){
                   ans = ans - hash[i] ;
                   hash[i] = 0;
        }
        printf("%lld %lld\n", count, ans);
    }
    return 0;
}
