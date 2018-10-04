#include<bits/stdc++.h>
using namespace std;

int n;
const int MAXN = 1005;
vector<long long> c[7];

int main()
{
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		int x;
		string s;
		cin >> x >> s;
		if(s == "A")
			c[0].push_back(x);
		else if(s == "B")
			c[1].push_back(x);
		else if(s == "C")
			c[2].push_back(x);
		else if(s == "AB" || s == "BA")
			c[3].push_back(x);
		else if(s == "BC" || s == "CB")
			c[4].push_back(x);
		else if(s == "AC" || s == "CA")
			c[5].push_back(x);
		else
			c[6].push_back(x);
	}

	long long ans = 1e9;
	for(int i = 0; i < 7; i++)
	{
		c[i].push_back(ans);
		sort(c[i].begin(), c[i].end());
	}

	ans = min(ans, c[0][0] + c[1][0] + c[2][0]);

	ans = min(ans, c[0][0] + c[4][0]);
	ans = min(ans, c[1][0] + c[5][0]);
	ans = min(ans, c[2][0] + c[3][0]);

	ans = min(ans, c[3][0] + c[4][0]);
	ans = min(ans, c[3][0] + c[5][0]);
	ans = min(ans, c[4][0] + c[5][0]);
	ans = min(ans, c[6][0]);

	if(ans >= 1e9)
		cout << -1 << "\n";
	else
		cout << ans << "\n";


	return 0;
}
