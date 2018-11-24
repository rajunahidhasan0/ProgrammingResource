#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int arr[100000+10];
vector <int> tree[3*30000+10];

void build(int node,int lo,int hi)
{
    if(hi==lo)
    {
        tree[node].pb(arr[lo]);
        return ;
    }

    int mid = (lo+hi)/2;
    build(2*node,lo,mid);
    build(2*node+1,mid+1,hi);

    tree[node].resize(tree[2*node].size()+tree[2*node+1].size());

    merge(tree[2*node].begin(),tree[2*node].end(),tree[2*node+1].begin(),tree[2*node+1].end(),tree[node].begin());
}

int query(int node,int lo,int hi,int x,int y,int k)
{
    if(lo>y||hi<x) return 0 ;
    if(lo>=x&&hi<=y)
    {
        return  tree[node].end() - upper_bound(tree[node].begin(),tree[node].end(),k) ;
    }

    int mid = (lo+hi)/2;

    return query(2*node,lo,mid,x,y,k) + query(2*node+1,mid+1,hi,x,y,k);
}

int main()
{
    int n ;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);

    build(1,1,n);

    int Q ;
    scanf("%d",&Q);

    int last_ans = 0 ;
    while( Q-- )
    {
        int i , j , k ;
        scanf("%d%d%d",&i,&j,&k);
//cout<<i<<" "<<j<<" "<<k<<endl;
        i = i^last_ans;
        j = j^last_ans;
        k = k^last_ans;
//cout<<i<<" "<<j<<" "<<k<<endl;
        last_ans = query(1,1,n,i,j,k);

        printf("%d\n",last_ans);
    }

    return 0;
}
