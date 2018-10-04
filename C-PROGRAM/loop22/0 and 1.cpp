#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))

int getMid(int s, int e) {  return s + (e -s)/2;  }

int getAnsUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return 9;

    int mid = getMid(ss, se);
    ///if(ss)

    int u = getAnsUtil(st, ss, mid, qs, qe, 2*si+1);
    int v = getAnsUtil(st, mid+1, se, qs, qe, 2*si+2);
    if(u==1 && v==1){
        return 1;
    }
    else if(u==0 && v==0){
        return 0;
    }
    else if((u==0 && v==9)||(u==9 && v==0))return 0;
    else if((u==1 && v==9)||(u==9 && v==1))return 1;
    else return -1;
}

int getAns(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        cout<<qs<<" "<<qe<<" "<<n-1;
        printf("Invalid Input");
        return -1;
    }

    return getAnsUtil(st, 0, n-1, qs, qe, 0);
}

int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    int u = constructSTUtil(arr, ss, mid, st, si*2+1);
    int v = constructSTUtil(arr, mid+1, se, st, si*2+2);
    if(u==1 && v==1){
        st[si] =  1;
    }
    else if(u==0 && v==0){
        st[si] = 0;
    }
    else st[si]=-1;
    return st[si];
}
int *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n)));

    int max_size = 2*(int)pow(2, x) - 1;

    int *st = new int[max_size];

    constructSTUtil(arr, 0, n-1, st, 0);
/*
for(int i=0; i<max_size ; i++)cout<<st[i]<<" ";
cout<<endl;
*/
    return st;
}
int ar[1000005];
int main()
{
    int tc=0;
    string st;
    while(cin>>st){
        int l;
        l = st.size();

        memset(ar, 0, sizeof(ar));
        for(int i=0 ; i<l; i++){
            if(st[i]=='0')ar[i]=0;
            else ar[i] = 1;
        }
        int *st = constructST(ar, l);
        int n, a, b;
        scanf("%d", &n);
        printf("Case %d:\n", ++tc);

        for(int i=0 ; i<n ;i++){
            scanf("%d %d", &a, &b);

            if(getAns(st, l, min(a,b), max(a,b))==-1){
                printf("No\n");
            }
            else{
                printf("Yes\n");
            }
        }
    }
    return 0;
}
