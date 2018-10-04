#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
char a[100], b[100];
int dp[100][100];
int arr[100][100];
void print(int i, int j);

int main() {
    int i, j;
    while(scanf("%s %s", a, b) == 2) {
        if(a[0]=='#')break;
        memset(dp, 63, sizeof(dp));
        int la = strlen(a), lb = strlen(b);
        dp[0][0] = 0;
        for(i = 0; i <= la; i++) {
            for(j = 0; j <= lb; j++) {
                if(a[i] == b[j] && dp[i+1][j+1] > dp[i][j]) // copy
                    dp[i+1][j+1] = dp[i][j], arr[i+1][j+1] = 1;
                if(dp[i+1][j] > dp[i][j]+1) // del
                    dp[i+1][j] = dp[i][j]+1, arr[i+1][j] = 2;
                if(dp[i][j+1] > dp[i][j]+1) // ins
                    dp[i][j+1] = dp[i][j]+1, arr[i][j+1] = 3;
                if(dp[i+1][j+1] > dp[i][j]+1) // change
                    dp[i+1][j+1] = dp[i][j]+1, arr[i+1][j+1] = 4;
            }
        }
        print(la, lb);
        puts("E");
    }
    return 0;
}
void print(int i, int j) {
    if(i == 0 && j == 0)    return;
    if(arr[i][j] == 1)
        print(i-1, j-1);
    else if(arr[i][j] == 2) {
        print(i-1, j);
        printf("D%c%02d", a[i-1], j+1);
    }
    else if(arr[i][j] == 3) {
        print(i, j-1);
        printf("I%c%02d", b[j-1], j);
    } else {
        print(i-1, j-1);
        printf("C%c%02d", b[j-1], j);
    }
}
