#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
        int n, t=0, x;
        cin>>n;
        for(int i=0 ; i<n; i++){
            scanf("%d", &x);
            if(x==1)t=1;
        }
        if(t)cout<<"HARD"<<endl;
        else cout<<"EASY"<<endl;
    }
    return 0;
}

