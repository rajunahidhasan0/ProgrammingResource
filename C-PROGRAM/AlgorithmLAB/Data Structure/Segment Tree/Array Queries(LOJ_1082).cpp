
///(i)Costruct (ii)getMin (iii)Update
#include <bits/stdc++.h>
#define MS(arr) memset(arr, 0, sizeof(arr) )
int ar[100005];
using namespace std;
int getMid(int s, int e) {  return s + (e -s)/2;  }
int inf;
int getMinUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return inf;

    int mid = getMid(ss, se);
    ///if(ss)
    return min( getMinUtil(st, ss, mid, qs, qe, 2*si+1) , getMinUtil(st, mid+1, se, qs, qe, 2*si+2) );
}
void updateValueUtil(int *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
        return;
    st[si] = st[si] + diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
void updateValue(int arr[], int *st, int n, int i, int new_val)
{
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }

    int diff = new_val - arr[i];

    arr[i] = new_val;

    updateValueUtil(st, 0, n-1, i, diff, 0);
}
int getMin(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return getMinUtil(st, 0, n-1, qs, qe, 0);
}

int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  min(constructSTUtil(arr, ss, mid, st, si*2+1) ,
              constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}
int *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n)));

    int max_size = 2*(int)pow(2, x) - 1;

    int *st = new int[max_size];

    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}

int main()
{
    ///freopen("test.txt","r",stdin);
    inf = 1000000;
    int test, tc=0;
    cin>>test;
    while(test--)
    {
    MS(ar);
    int n, q;
    scanf("%d %d", &n, &q);
    for(int i=0 ; i<n ; i++)scanf("%d", &ar[i]);
    int *st = constructST(ar, n);

    printf("Case %d:\n", ++tc);
    int u, v;
    for(int j=0 ; j<q ; j++){
        scanf("%d %d", &u, &v);
        printf("%d\n", getMin(st, n, u-1, v-1) );
    }

    }
    return 0;
}



