#include <bits/stdc++.h>

using namespace std;

//const int x =

int main()
{
    freopen("test.in", "r", stdin);
    long long n, k, l, h;
    cin >> l >> h >> k;
    long long q = 1, c = 0;
    vector <long long> v;
    while( q <= h  )
    {
        if( q >= l )
        {
            if( v.size() > 0 && v[c-1] < q )
            {
                v.push_back(q);
                c++;
            }
            else if( v.size() > 0 && v[c-1] > q )
                break;
            else if( v.size() == 0 )
            {
                v.push_back(q);
                c++;
            }
        }
        q *= k;
        cout<<q;
    }
    if( v.size() == 0 )
    {
        cout << "-1"<< endl;
        return 0;
    }
    cout << v[0];
    for( int i = 1; i < v.size(); i++ )
    {
        cout << " " << v[i];
    }
    cout << endl;
    return 0;
}
