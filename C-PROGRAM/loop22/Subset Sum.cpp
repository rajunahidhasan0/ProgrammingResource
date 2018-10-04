///The target sum possible or not checking...
#include<bits/stdc++.h>
using namespace std;
#define MS(ar) memset(ar, 0, sizeof(ar) )
bool dpTable[110][5000];
int SubsetSum(int input[], int target);
int main()
{
    int input[100], target, n, ans;
    cin>>n>>target;
    for(int i=0 ; i<n ; i++){
        cin>>input[i];
    }
    ans = SubsetSum(input,target);
    cout<<ans<<endl;
    return 0;
}

int SubsetSum(int input[], int target)
{
    MS(dpTable);
    for(int i=0 ; i<=sizeof(input) ; i++)dpTable[i][0]=1;
    for(int i=1 ; i<=sizeof(input) ; i++)
    {
        for(int j=1 ; j<=target ; j++)
        {
            dpTable[i][j] = dpTable[i-1][j];

            if(dpTable[i][j]==0 && j>=input[i-1]){
                dpTable[i][j] = dpTable[i][j] || dpTable[i-1][j-input[i] ];
            }
        }
    }
    return dpTable[sizeof(input)][target];
}
