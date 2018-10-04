#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))

int ar[150002];
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

int main()
{
    int n, m, x, y;

    cin>>n;
    for(int i=0 ;i<n ; i++){
        scanf("%d %d", &x, &y);
        ar[i] = gcd(x, y);
        cout<<ar[i]<<endl;
    }
    cout<<endl;
    cout<<findGCD(ar, n)<<endl;
    return 0;
}
