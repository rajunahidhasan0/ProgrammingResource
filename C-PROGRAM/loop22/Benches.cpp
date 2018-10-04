#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int n, m, ansm, ansM;
    int maxi=0, mini=101;
    int ar[110];
    cin>>n>>m;
    for(int i=0 ; i<n ; i++){
        scanf("%d", &ar[i]);
        if(maxi<ar[i])maxi = ar[i];
        if(mini>ar[i])mini = ar[i];
    }
    ansM = maxi+m;
    int co=0;
    for(int i=0 ; i<n ; i++){
        co += maxi-ar[i];
    }
    if(co>=m)ansm = maxi;
    else{
        m-=co;
        ansm = maxi + ceil((double)m/n);
    }
    cout<<ansm<<" "<<ansM<<endl;
    return 0;
}


