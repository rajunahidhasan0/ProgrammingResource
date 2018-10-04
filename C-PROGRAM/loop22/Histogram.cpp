#include<bits/stdc++.h>
using namespace std;
int T,TT,n;
int minn[21][30100],a[30100];
int query(int l,int r)
{
    int k=0;
    while((1<<(k+1))<=r-l+1) ++k;
    return a[minn[k][l]]>a[minn[k][r-(1<<k)+1]]?minn[k][r-(1<<k)+1]:minn[k][l];
}
 int get(int l,int r)
 {
     if(l>r)    return 0;
     if(l==r)
         return a[l];
     int pos=query(l,r);
     return max(max(get(l,pos-1),get(pos+1,r)),a[pos]*(r-l+1));
}
int main()
 {
     int i,j, tc=0;
     scanf("%d", &T);
     while(T--)
         memset(minn,0,sizeof(minn));
         memset(a,0,sizeof(a));
         scanf("%d",&n);
         for(i=1;i<=n;i++)
             scanf("%d", &a[i]);
         for(i=1;i<=n;i++)
             minn[0][i]=i;
         for(i=1 ; (1<<i)<=n ; i++)
             for(j=1 ; j<=n-(1<<i)+1 ; j++)
                 minn[i][j] = ( a[minn[i-1][j]] > a[minn[i-1][j+(1<<(i-1))]] ) ? minn[i-1][j+(1<<(i-1))] : minn[i-1][j];
         printf("Case %d: %d\n", ++tc, get(1,n));
     }
     return 0;
}
