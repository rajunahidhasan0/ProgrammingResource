#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
#define INF 500000000

struct Road {
    int u, v, cap;
    Road() { u=0; v=0; cap=0; }
    Road(int a, int b, int w) {
        u = a; v = b; cap = w;
    }
};
int n, c[102], par[102];
vector<Road> vt;

int Getpar(int v) {
    if (par[v]>=0) v = Getpar(par[v]);
    return v;
}

void func(int r1, int r2) {
    int x = par[r1] + par[r2];
    if (par[r1]>par[r2]) {
        par[r1] = r2;
        par[r2] = x;
    }
    else {
        par[r1] = x;
        par[r2] = r1;
    }
}

bool cmp(Road a, Road b) {
    return (a.cap > b.cap);
}
int Kruskal()
{
    int ans = INF, r1, r2, Count=0;

    sort(vt.begin(), vt.end(), cmp);
    for(int i=0 ; i<vt.size() ; i++)
    {
        r1 = Getpar(vt[i].u);
        r2 = Getpar(vt[i].v);
        if (r1!=r2) {
            func(r1, r2);
            ans = vt[i].cap;
            if (++Count==n-1) break;
        }
    }
    if(ans==INF){
        ans = 0;
        for(int i=0 ; i<n ;i++)ans = max(ans, c[i]);
    }
    return ans;
}

int main()
{
    int test, tc=0, m, u, v, cap;
    cin>>test;
    while(test--){
        scanf("%d %d", &n, &m);
        MS(par, -1);
        MS(c, 0);
        vt.clear();
        for(int i=0; i<m ; i++){
            scanf("%d %d %d", &u, &v, &cap);
            if (u==v)c[u] = max(c[u], cap);
            else vt.push_back(Road(u, v, cap));
        }
        printf("Case #%d: %d\n", ++tc, Kruskal());
    }
}
