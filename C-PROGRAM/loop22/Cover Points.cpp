#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n, key, x, y, a=0;
        cin>>n;

        for(int i=0 ; i<n; i++){
            scanf("%d %d", &x, &y);
            key = x+y;
            if(a<key)a=key;
        }
        cout<<a<<endl;
    return 0;
}



