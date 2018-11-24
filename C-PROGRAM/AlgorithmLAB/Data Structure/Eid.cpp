#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100010
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int a[1005];
int main()
{                           ///It should be solved by using JAVA bigint calculation
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        MS(a, 0);
        int n;
        scanf("%d", &n);
        for(int i=0; i<n ; i++)
        {
            scanf("%d", &a[i]);
        }


        printf("Case %d: ", ++tc, );
    }
}
