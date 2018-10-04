///The target sum possible or not checking...
#include<bits/stdc++.h>
using namespace std;
#define MS(ar) memset(ar, 0, sizeof(ar) )

int inp[101], target, n, ans, total;
int func(int , int, int);
int main()
{
    int test, tc=0;
    cin>>test;
    while(test--){
        MS(inp);
        total=0;
        cin>>target>>n;
        for(int i=0 ; i<n ; i++){
            cin>>inp[i];
            total+=inp[i];
        }
        ans = func(0, total, 0);
        cout<<ans<<endl;
    }
    return 0;
}

int func(int sum,int total, int i)
{
    if(sum>target || i>=n)return sum;
    return min( abs(func(sum+inp[i], total-inp[i], i+1)-target) ,  abs(func(sum, total-inp[i], i+1)-target) );
}
