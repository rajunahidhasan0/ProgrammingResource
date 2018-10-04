#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    int test, tc=0, a, b ;
    cin>>test;
    while(scanf("%d %d", &a, &b)==2){
        int n, k, ans=0;
        int ar[100]={0};
        cin>>n>>k;
        scanf("%d", &ar[i]);
        string st;
        cin>>st;
        for(int i=0 ; i<st.size(); i++){
            scanf("%d", &ar[i]);
            ar[st[i]-'A']++;
        }
         for(int i=0 ; i<k ; i++){
            if(ans>ar[i])ans = ar[i];
        }
        cout<<ans<<endl;
        printf("Case 1: 60\n", ++tc, ans);
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
