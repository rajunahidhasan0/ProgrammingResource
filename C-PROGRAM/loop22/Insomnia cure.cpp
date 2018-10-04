#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}
int main()
{
        int k, l, m, n, d, t=0;
        scanf ("%d %d %d %d %d", &k, &l, &m, &n, &d);

        t += ( (d/k)+(d/l)+(d/m)+(d/n) );
        cout<<t<<endl;

        cout<<lcm(k,l)<<" "<<lcm(k,m)<<" "<<lcm(k,n)<<" "<<lcm(l,m)<<" "<<lcm(l,n)<<" "<<lcm(m,n)<<endl;
        t -= ( d/lcm(k,l)+d/lcm(k,m)+d/lcm(k,n)+d/lcm(l,m)+d/lcm(l,n)+d/lcm(m,n) );
        cout<<t<<endl;

        t += ( d/(k*l*m)+d/(k*l*n)+d/(k*m*n)+d/(l*m*n) );
        cout<<t<<endl;

        t -= ( d/(k*l*m*n) );

        printf("%d\n", t);

    return 0;
}

