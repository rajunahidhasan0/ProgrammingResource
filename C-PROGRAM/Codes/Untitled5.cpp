#include <bits/stdc++.h>
using namespace std;

int w,hi;
int arr[100];

int bsearch(int lo)
{
    int md,i,j,tgt=arr[lo]+w,con=0,ans,gt=lo;
    //cout<<tgt<<endl;
    while(hi-lo>5){
        md=(hi+lo+1)/2;
        if(arr[md]>tgt)hi=md;
        else if(arr[md]<tgt)lo=md;
        else {
            //printf("kk");
            con++;
            ans=md;
            break;
        }
    }
    if(con>0){
        return ans+1-gt;
    }
    else{
        for(int i=lo;i<=hi;i++){
            if(arr[i-1]<=tgt && arr[i+1]>tgt){
                ans=i;
                //cout<<ans<<endl;
                //printf("jj");
                break;
            }
        }
        if(arr[ans]==tgt)return ans+1-gt;
        else return ans-gt;
    }
}

int main(void)
{
    int i,j,k,l,n,m,ans;
    //int arr[100];
    scanf("%d",&n);
    hi=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    scanf("%d",&w);
    while(m>0){
        hi=n-1;
        scanf("%d",&m);
        printf("%d\n",bsearch(m));
    }
    return 0;
}
