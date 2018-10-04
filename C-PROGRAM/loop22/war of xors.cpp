#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int test, tc=0;
    cin>>test;
    while(test--){
        int n, ans=0, p;
        for(int i=0 ; i<n ;i++)
        {

            scanf("%d", &p);
            if(p%2==0)ans++;
        }

        cout<<ans<<endl;
    }
    return 0;
}



