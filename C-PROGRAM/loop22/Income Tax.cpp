#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, x;
    while(scanf("%lld %lld", &m, &x) == 2) {
        if(m==0 && x==0)break;
        if(x == 100 || x==0 || m<=1) {
            printf("Not found\n");
            continue;
        }
        long long ans;
        double f;
        f = x*.01;
        f = 1-f;
        long long g=100-x;

        if( (100*(m-1))%(g)==0 ){
            ans = ( (long long)(100*(m-1)) / (g) ) - 1;
            //ans =  ((long long)(100*(m-1)) / (100*f))-1;
        }
        else{
            ans = ( (long long)(100*(m-1)) / (g) );
           // ans = (long long)(100*(m-1)) / (100*f);
        }
        if(ans<m) printf("Not found\n");
        else printf("%lld\n", ans);
    }
    return 0;
}
