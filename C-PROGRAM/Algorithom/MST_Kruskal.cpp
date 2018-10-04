#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct EDGE{
    int s;
    int d;
    int w;
};
bool compare(EDGE E1, EDGE E2){
    return E1.w < E2.w;
}

int findPar(int v, int *par)
{
    if(par[v]==v) return v;
    return findPar(par[v], par);

}

void kruskals(EDGE edg[106], int n, int E);
int main()
{
    EDGE edge[106];
    int n, E;
    cin>>n >> E;

    for(int i=0 ; i<E ; i++)
    {
        int S, D, W;
        cin>> S>>D>>W;
        edge[i].s = S;
        edge[i].d = D;
        edge[i].w = W;
    }
    kruskals(edge, n, E);
    return 0;
}

void kruskals(EDGE edg[106], int n, int E)
{
    sort(edg, edg+E, compare);
    EDGE edgo[106];
    int count=0, i=0;
    int parent[106];
    for(int i=0; i<n ; i++)parent[i]=i;
    while(count != n-1)
    {
        EDGE curedge = edg[i];
        int sourcePar = findPar(curedge.s, parent);
        int destPar = findPar(curedge.d, parent);
        if(sourcePar != destPar){
            edgo[count] = curedge;
            count++;
            parent[sourcePar] = destPar;
        }
        i++;
    }
    for(int i=0; i<n-1 ; i++){
        cout<< edgo[i].s << " "<<edgo[i].d<<" "<<edgo[i].w<<endl;
    }
}
