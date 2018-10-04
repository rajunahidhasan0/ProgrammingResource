#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans=0, f;
    cin>>n;
    while(n--){
        scanf("%d", &f);
        if(f>ans)ans = f;
    }
    cout<<ans<<endl;
    return 0;
}



