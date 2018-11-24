///(i)Costruct (ii)getDiff (iii)Update
#include <bits/stdc++.h>
using namespace std;
int ar[100005];
/*
int maxt[400005];
int mint[400005];
*/
int getMid(int s, int e) {  return s + (e -s)/2;  }

int getmx(int *st1, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st1[si];

    if (se < qs || ss > qe)
        return 0;

    int mid = getMid(ss, se);
    return max( getmx(st1, ss, mid, qs, qe, 2*si+1) ,
           getmx(st1, mid+1, se, qs, qe, 2*si+2) );
}
int getmn(int *st2, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st2[si];

    if (se < qs || ss > qe)
        return 100000009;

    int mid = getMid(ss, se);
    return min( getmn(st2, ss, mid, qs, qe, 2*si+1) ,
           getmn(st2, mid+1, se, qs, qe, 2*si+2) );
}

int getDiff(int *st1, int *st2, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return (getmx(st1, 0, n-1, qs, qe, 0) - getmn(st2, 0, n-1, qs, qe, 0) );
}

int constructSTUtilmx(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  max(constructSTUtilmx(arr, ss, mid, st, si*2+1) ,
              constructSTUtilmx(arr, mid+1, se, st, si*2+2) );
    return st[si];
}
int constructSTUtilmn(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  min(constructSTUtilmn(arr, ss, mid, st, si*2+1) ,
              constructSTUtilmn(arr, mid+1, se, st, si*2+2) );
    return st[si];
}
int *constructST(int arr[], int n, int QQ)
{
    int x = (int)(ceil(log2(n)));

    int max_size = 2*(int)pow(2, x) - 1;

    int *st = new int[max_size];

    if(QQ==1){
        constructSTUtilmx(arr, 0, n-1, st, 0);
    }
    else constructSTUtilmn(arr, 0, n-1, st, 0);
/*
for(int i=0; i<max_size ; i++)cout<<st[i]<<" ";
cout<<endl;
*/
    return st;
}

int main()
{
    ///freopen("test.txt","r", stdin);
    int test, tc=0;
    scanf("%d", &test);
    while(test--){
        memset(ar, 0, sizeof(ar));
        int n, d, ans=0;
        scanf("%d %d", &n, &d);
        for(int i=0; i<n ; i++){
            scanf("%d", &ar[i]);
        }
        int *maxt = constructST(ar, n, 1);
        int *mint = constructST(ar, n, 2);

        for(int i=0; i<n-d+1 ; i++){
            int u;
            u = getDiff(maxt, mint, n, i, i+d-1);
            if(ans<u) ans = u;
        }
        printf("Case %d: %d\n", ++tc, ans);
    }

    return 0;
}


