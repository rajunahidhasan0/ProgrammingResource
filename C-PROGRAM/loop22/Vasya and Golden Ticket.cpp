#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
        int n, k, ans=;
        string st;
        cin>>n;
        cin>>st;
        k = ((n+1)*9)/2;

        for(int i=1 ; i<=k; i++)
        {
            for(int i=0 ; i<k ; i++)
            {
                if(ans>ar[i])ans = ar[i];
            }
        }

        cout<<ans<<endl;
        printf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}


