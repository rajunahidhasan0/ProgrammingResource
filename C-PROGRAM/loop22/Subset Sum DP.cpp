#include<bits/stdc++.h>
using namespace std;
#define MS(ar) memset(ar, 0, sizeof(ar) )
int main()
{
    int test;
    cin>>test;
    while(test--){
        int x, target, n, mx=0;
        int dp[20005];
        scanf("%d %d", &target, &n);
        MS(dp);
        dp[0]=1;

        for(int i=0 ; i<n ; i++){
            scanf("%d", &x);
            for(int j=target+10000 ; j>=0 ; j--)
            {
                if(j-x<0)continue;
                else if(dp[j]==0 && dp[ j-x ]==0){
                    dp[j] = 0;
                }
                else if(dp[j]==0){
                    dp[j] = dp[j-x] + 1;
                }
                else dp[j] = min(dp[ j ], dp[ j-x ]+1);

        while(!dp[target])target++;
        printf("%d %d\n", target, dp[target]-1);
    }
    return 0;
}
