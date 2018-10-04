#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int Tree[100000];
void constructTree(int input[], int segTree[], int low, int high, int pos)
{
    if(low==high){
        segTree[pos] = input[low];
        return;
    }
    int  mid = (low+high)/2;
    constructTree(input, segTree, low, mid, 2*pos+1);
    constructTree(input, segTree, mid+1, high, 2*pos+2);

    segTree[pos] = min(segTree[2*pos+1], segTree[2*pos+2]);
}
int f(int u){
    int y=1;
    while(1){
        y*=2;
        if(y>=u)return y;
    }
}
int main()
{
    int test, tc=0;
    Fin();
    cin>>test;
    while(test--)
    {
        int m, n, ar[10000];
        cin>>n;
        m = f(n);
        MS(Tree, 0);
        for(int i=0 ; i<n ; i++){
            scanf("%d", &ar[i]);
        }
        constructTree(ar, Tree, 0, n-1, 0);
        for(int i=0 ; i<m+1 ; i++){
            cout<<Tree[i]<<" ";
        }
    }
    return 0;
}

