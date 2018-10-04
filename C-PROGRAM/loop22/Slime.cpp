#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    LL n, ans=0, pos=0, neg=0;
    int ar[500010];
    cin>>n;
    for(int i=0 ; i<n; i++){
        scanf("%d", &ar[i]);
        if(ar[i]>=0){pos=1;}
        if(ar[i]<=0){neg=1;}
    }
    sort(ar, ar+n);
    if(pos==1 && neg==0){
        for(int i=0 ; i<n ; i++){
            ans+=ar[i];
        }
        ans-=2*ar[1];
    }
    else if(pos==0 && neg==1){
        ans=ar[0];
        for(int i= ; i>0 ; i--){
            ans+=ans-ar[i];
        }
    }
    else{

    }
    cout<<ans<<endl;
    return 0;
}


