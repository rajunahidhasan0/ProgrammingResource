#include<bits/stdc++.h>
using namespace std;
#define MX 100005
#define INF 1000000000
#define pii pair<int,int>

vector<int>ed[MX];
vector<int>ec[MX];

int cost[MX], n;
int cost2[MX];

int dijkstra(int s){
    int f,w,i;

    priority_queue<pii,vector<pii>,greater<pii> > pq;

    pii fr;
    pq.push(pii(0,s));
    cost[s] = 0;
    cost2[s] = 0;

    while(!pq.empty()){
        fr = pq.top();
        pq.pop();
        f = fr.second;
        w = fr.first;
        if(cost[f]!=w) continue;
        for(i=0;i<ed[f].size();i++){
            int v = ed[f][i];
            int w1 = ec[f][i];
            if(cost[v]>=w+w1){
                if(cost[v]<cost2[v]){
                    cost2[v]=cost[v];
                }
                cost[v] = w+w1;
                pq.push(pii(cost[v],v));
            }
            else if( > cost[v] && w1 + w < cost2[v]){ //ties are not allowed
                d[1][to] = dist + w_extra;
                q.push(node(1, to, d[1][to]));
            }
        }
    }
    for(int i=1; i<=n ; i++){
        cout<<cost[i]<<" "<<cost[n]<<endl;
    }
    return cost[n];
}

void free(){
    int i;
    for(i=0;i<MX;i++){
        ed[i].clear();
        ec[i].clear();
        cost[i] = INF;
        cost2[i] = INF;
    }
}

int main(){
    int test, tc=0;
    cin>>test;
    while(test--){
        free();
        int m,i,a,b,w, ans=0;
        cin>>n>>m;
        for(i=1;i<=m;i++){
            cin>>a>>b>>w;
            ed[a].push_back(b);
            ed[b].push_back(a);
            ec[a].push_back(w);
            ec[b].push_back(w);
        }
        ans=dijkstra(1);
        printf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}
