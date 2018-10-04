#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,n;
i = 5;
printf("%d %d %d\n",i=i+1,i=i*3,i=i/2);
//output = 11 11 11

//7 12 7

int a = i+=5;
printf("%d %d %d\n", a++, a+=3, a++);
i = 5;
printf("%d %d %d\n",i+5,i=i+2,i);
//output = 12 7 7
i = 5;
printf("%d %d %d\n",i=i+2,i,i+5);
//output: 7 7 10

    return 0;
}
