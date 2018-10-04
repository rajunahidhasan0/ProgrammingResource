#include <bits/stdc++.h>
using namespace std;
char s[100050];
int st[400050];
void update (int p, int L, int R, int l, int r)
{
    if (L > r || R < l) return;
    if (L >= l && R <= r) {
        st[p]++;
        return;
    }
    int mid = (L+R) /2;
    update (2*p, L, mid, l, r);
    update (2*p+1, mid+1, R, l, r);
}
void get (int p, int L, int R, int pos)
{
    if (st[p] != 0) {
        if (L != R) {
            st[2*p] += st[p];
            st[2*p+1] += st[p];
            st[p] = 0;
        }
    }
    if (L > pos || R < pos) return;
    if (L == R) {
        if (st[p] %2 == 1) {
            if (s[L] == '1') s[L] = '0';
            else s[L] = '1';
        }
        st[p] = 0;
        return;
    }
    int mid = (L+R) /2;
    get (2*p, L, mid, pos);
    get (2*p+1, mid+1, R, pos);
}
int main()
{
    int test, tc=0;
    freopen ("test.txt", "r", stdin);
    scanf (" %d", &test);
    while (test--){
        int q, a, b, pos, n;
        char ch;
        scanf (" %s", s);
        n = strlen(s);
        for (int i = 0; i < n*4; i++ ) st[i] = 0;
        scanf (" %d", &q);
        printf ("Case %d:\n", ++tc);
        while (q--) {
            scanf (" %c", &ch);
            if (ch == 'I'){
                scanf (" %d %d", &a, &b);
                update (1, 0, n-1, a-1, b-1);
            }
            else{
                scanf (" %d", &pos);
                get (1, 0, n-1, pos-1);
                printf ("%c\n", s[pos-1]);
            }
        }
    }
    return 0;
}
