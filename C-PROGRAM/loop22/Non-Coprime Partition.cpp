#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int gcd(int n1, int n2);
int main()
{
    int n, m, k, l;
    int ar[45005]={0};
    cin>>n;
    if(n<3){
        cout<<"No"<<endl;
        return 0;
    }
    l = n/2;
    k = n-l;
    cout<<"Yes"<<endl;
    cout<<k;
    for(int i=1; i<=n ;i+=2){
        printf(" %d", i);
    }
    cout<<endl;
    cout<<l;
    for(int i=2; i<=n ;i+=2){
        printf(" %d", i);
    }
    cout<<endl;
    return 0;
}

