#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int cl[200009],vs[200009],cln[200009];
int main()
{
    vector <int> vt[200009];
    int i,j,a,b,ts,f=1,cn=0,n,x,e,in,mc;
    queue <int> q;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d %d",&a,&b);
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    q.push(1);
    vs[1]=1;
    cl[1]=1;
    while(!q.empty()){
        x=q.front();
        q.pop();

        for(i=0;i<=(2*vt[x].size());i++){
            cln[i]=0;
        }
        cln[cl[x]]=1;
        for(i=0;i<vt[x].size();i++){
            if(cl[vt[x][i]]){
                cln[cl[vt[x][i]]]=1;
            }
        }
        in=1;
        for(i=0;i<vt[x].size();i++){
            e=vt[x][i];
            if(!cl[e]){
                while(cln[in])in++;
                cl[e]=in;
                mc=max(mc,in);
                //printf("x %d %d\n",x,e);
                q.push(e);
                in++;
            }
        }

    }

    printf("%d\n",mc);
    for(i=1;i<n;i++){
        printf("%d ",cl[i]);
    }
    printf("%d\n",cl[n]);
    return 0;
}
