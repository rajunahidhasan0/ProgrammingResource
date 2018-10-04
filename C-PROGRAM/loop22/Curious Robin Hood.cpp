///(i)Costruct (ii)Getsum (iii)Update
#include <bits/stdc++.h>
#define MS(ar) memset(ar, 0, sizeof(ar) )
#define Fin() freopen("test.txt", "r", stdin)
using namespace std;
int ar[100005];
int getMid(int s, int e) {  return s + (e -s)/2;  }

int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];

    if (se < qs || ss > qe)
        return 0;

    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
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
    printf("%d\n", arr[i]);
    int diff = new_val - arr[i];

    arr[i] = new_val;

    updateValueUtil(st, 0, n-1, i, diff, 0);
}
void updateValueUtil222(int *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
        return;
    st[si] = st[si] + diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil222(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil222(st, mid+1, se, i, diff, 2*si + 2);
    }
}
void updateValue222(int arr[], int *st, int n, int i, int new_val)
{
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }

    int diff = new_val;

    arr[i] += new_val;

    updateValueUtil222(st, 0, n-1, i, diff, 0);
}
int getSum(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return getSumUtil(st, 0, n-1, qs, qe, 0);
}

int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
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
   /// Fin();
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        int n, q, t, u, v;
        MS(ar);
        scanf("%d %d", &n, &q);
        for(int i=0 ; i<n ;i++)
            scanf("%d", &ar[i]);
        int *st = constructST(ar, n);
        printf("Case %d:\n", ++tc);
        for(int j=0 ; j<q ;j++)
        {
            scanf("%d", &t);
            if(t==1){
                scanf("%d", &u);
                updateValue(ar, st, n, u, 0);
            }
            else if(t==2){
                scanf("%d %d", &u , &v);
                updateValue222(ar, st, n, u, v);
            }
            else{
                scanf("%d %d", &u , &v);
                printf("%d\n", getSum(st, n, u, v) );
            }
        }
    }
    return 0;
}

