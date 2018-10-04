#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a, b, ans;
    cin>>n;

    ans = sqrt(2*n);
    if(n==1){
        cout<<1<<endl;
    }
    else if(n==2)cout<<2<<endl;
    else{
        while(1){
            if( (ans*(ans+1)) >= 2*n )break;
            else ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}
