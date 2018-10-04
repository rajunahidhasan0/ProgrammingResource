#include <bits/stdc++.h>
using namespace std;
long long st[400050];
long long tree[400050];

void update (int p, int L, int R, int l, int r, int v)
{
    if(l > R || r < L) return;
    if(L >= l && R <= r) st[p] += v;
    else
	{
		tree[p] += v*(min(r, R) - max(l, L) + 1);
		update(2*p, L, (L+R)/2, l, r, v);
		update(2*p+1, (L+R)/2+1, R, l, r, v);
	}
}
long long get(int p, int L, int R, int l, int r)
{
	if(l > R || r < L) return 0;
	else
	{
		tree[p] += st[p]*(R - L + 1); //printf("%d %d %d %d %d %lld\t", p, L, R, i, j, st[p]);
		if(L != R)
		{
			st[2*p] += st[p];
			st[2*p+1] += st[p];
		}
		st[p] = 0;

		if(L >= l && R <= r) return tree[p];
		else return get(2*p, L, (L+R)/2, l, r) + get(2*p+1, (L+R)/2+1, R, l, r);
	}
}


int main()
{
    int test, tc=0;
    long long ans;
    freopen ("test.txt", "r", stdin);
    scanf ("%d", &test);
    while (test--){
        int q, x, y, v, n, t, m;
        scanf ("%d %d", &n, &q);
        memset(st, 0, sizeof(st));
		memset(tree, 0, sizeof(tree));
        printf("Case %d:\n", ++tc);
        while (q--) {
            scanf ("%d", &t);
            if (t){
                scanf("%d %d", &x, &y);
                ans =  get(1, 0, n-1, x, y) ;
                printf("%lld\n", ans);
            }
            else{
                scanf("%d %d %d", &x, &y, &v);
                update(1, 0, n-1, x, y, v);
                /*for(int i=0;i<m ; i++)cout<<st[i]<<" ";
                cout<<endl;*/
            }
        }
    }
    return 0;
}

