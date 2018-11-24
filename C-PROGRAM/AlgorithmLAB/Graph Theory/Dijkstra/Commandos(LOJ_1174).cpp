
#include<bits/stdc++.h>
using namespace std;
#define MX 105
#define INF 1000000000
#define pii pair<int,int>

vector<int>ed[MX];
vector<int>ec[MX];

int cost[MX], cost2[MX];

void dijkstra(int s){
    int f,w,i;

    priority_queue<pii,vector<pii>,greater<pii> > pq;

    pii fr;
    pq.push(pii(0,s));
    cost[s] = 0;

    while(!pq.empty()){
        fr = pq.top();
        pq.pop();
        f = fr.second;
        w = fr.first;
        //cout<<f<<endl;
        if(cost[f]!=w) continue;
        for(i=0;i<ed[f].size();i++){
            int v = ed[f][i];
            int w1 = ec[f][i];
            if(cost[v]>w+w1){
                cost[v] = w+w1;
                pq.push(pii(cost[v],v));
            }
        }
    }
}
void Ddijkstra(int s){
    int f,w,i;

    priority_queue<pii,vector<pii>,greater<pii> > pq;

    pii fr;
    pq.push(pii(0,s));
    cost2[s] = 0;

    while(!pq.empty()){
        fr = pq.top();
        pq.pop();
        f = fr.second;
        w = fr.first;
        //cout<<f<<endl;
        if(cost2[f]!=w) continue;
        for(i=0;i<ed[f].size();i++){
            int v = ed[f][i];
            int w1 = ec[f][i];
            if(cost2[v]>w+w1){
                cost2[v] = w+w1;
                pq.push(pii(cost2[v],v));
            }
        }
    }
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
        int n,m,i,a,b,w;
        cin>>n>>m;
        for(i=1;i<=m;i++){
            cin>>a>>b;
            ed[a].push_back(b);
            ed[b].push_back(a);
            ec[a].push_back(1);
            ec[b].push_back(1);
        }
        int st, en;
        cin>>st>>en;

///Concept: In a node ,the sum of min_cost from start and min_cost from end is the min_cost to reach start-to-end.
///and then find the maximum of them(Min_Cost)
        dijkstra(st);

        Ddijkstra(en);

        int ans=0;

        for(i=0;i<n;i++){
           ans=max(ans, cost[i]+cost2[i]);
        }
        printf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}

