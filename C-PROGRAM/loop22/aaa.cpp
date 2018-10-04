#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, ans=0;
    int ar[105];
    cin>>n>>a>>b;
    for(int i=0 ; i<n ;i++)
    {
        scanf("%d", &ar[i]);
    }

    for(int i=0, j=n-1 ; i<n/2 ;i++, j--)
    {
        if(ar[i]!=ar[j] && ar[i]!=2 && ar[j]!=2){
            cout<<-1<<endl;
            return 0;
        }
    }

    for(int i=0, j=n-1 ; i<n/2 ;i++, j--)
    {
        if(ar[i]==ar[j]){
                if(ar[i]==2){
                    ans+=2*min(a, b);
                }
        }
        else{
            if(ar[i]==1 || ar[j]==1){
                ar[j]=1;
                ans+=b;
            }
            else if(ar[j]==0 || ar[i]==0){
                ar[i]=0;
                ans+=a;
            }
        }
    }
    if(n%2==1 && ar[n/2]==2)ans+=min(a, b);
    cout<<ans<<endl;
    return 0;
}


