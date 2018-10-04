#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))

int main()
{
    LL ar[100][100] = {};
    LL i, j;
    ar[0][0] = 1;
    for(i = 1; i < 100; i++) {
        ar[i][0] = 1;
        for(j = 1; j <= i; j++) {
            ar[i][j] = ar[i-1][j]+ar[i-1][j-1];
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    int test, tc=0, a, b ;
    cin>>test;
    while(test--){
        LL n, t, p, m, q;
        scanf("%lld %lld %lld", &n, &t, &p);
        if(t < n*p)
            cout<<0<<endl;
        else
            printf("%lld\n", ar[ t- n*p + n-1 ][n-1]);
    }
    return 0;
}
