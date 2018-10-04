#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int ar[1000];
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n, x, u, m;
        int a, b;
        MS(ar, 0);
        cin>>n;
        for(int i=1 ;i<=n ;i++){
            scanf("%d", &ar[i]);
            if(i==2){
                a = abs(ar[i]-ar[i-1]);
            }
            if(i==n){
                b = abs(ar[i]-ar[i-1]);
            }
        }
        a = abs(ar[2]-ar[n])+1-(n-1);
        b = abs(ar[1]-ar[n-1])+1-(n-1);
        cout<<max(a, b)<<endl;
    }
    return 0;
}


