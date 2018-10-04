#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))

bool isLeapYear(int year)
 {
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
 }

int main()
{
    int test, tc=0, a, b ;
    cin>>test;
    while(test--){
        int n, k, ans=0, d, m, y1, y2;

        scanf("%d %d %d %d", &d, &m, &y1, &y2);

        if(d!=29 || m!=2 || y2==y1){
            ans = (y2-y1);
            printf("Case %d: %d\n", ++tc, ans);
            continue;
        }

        for(int i=y1+1 ; i<=y2; ){
            if(isLeapYear(i)){
                ans++;
                i+=4;
            }
            else i++;
        }


        printf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}

