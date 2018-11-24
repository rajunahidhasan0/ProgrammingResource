#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932385
struct Point{
    ll x, y;
    void setf(ll _x, ll _y){x=_x; y=_y;}
}ans[100010], points[100010];
Point p0;
ll dist(Point p1,Point p2){
    return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}
double findAngle(Point A, Point B, Point C)
{
    double a = sqrt((double)dist(A,B));
    double b = sqrt((double)dist(B,C));
    double c = sqrt((double)dist(C,A));
    return acos((a*a+c*c-b*b)/(2*a*c));
}
ll orientation(Point p,Point q,Point r){
    return ((q.y-p.y)*(r.x-q.x))-((r.y-q.y)*(q.x-p.x));
}
bool compare(Point a,Point b){
    if(orientation(p0,a,b)==0)  //checking co-linearity
        return dist(p0,a)<dist(p0,b);  //if co-linear put nearest one

    ll slop1x=a.x-p0.x; ll slop1y=a.y-p0.y;
    ll slop2x=b.x-p0.x; ll slop2y=b.y-p0.y;
    return (atan2((double)slop1y,(double)slop1x)-atan2((double)slop2y,(double)slop2x))<0; //sorting in descending order of slop
}
Point nextToTop(stack<Point> &S)
{
    Point p = S.top();
    S.pop();
    Point res = S.top();
    S.push(p);
    return res;
}


void convexHull(Point points[], ll n, ll TestCase);

int main()
{
    ll test, tc=0;
    cin>>test;
    while(test--){
        ll n, xx, yy;
        Point points[100010];
        scanf("%lld", &n);
        for(ll i=0; i<n ; i++)
        {
            scanf("%lld %lld", &xx, &yy);
            points[i].setf(xx, yy);
        }

        convexHull(points, n, ++tc);
    }
    return 0;
}



void convexHull(Point points[], ll n, ll TestCase)
{
    ll ymin=points[0].y, mn=0;
    for(int i=1;i<n;i++){  //Finding the bottom-most point
        if(points[i].y<ymin || (ymin==points[i].y && points[i].x<points[mn].x)){
            ymin=points[i].y; mn=i;
        }
    }
    swap(points[0], points[mn]);

    p0 = points[0];

    sort(points+1, points+n, compare);

    ll m = 1;
    for (ll i=1; i<n; i++)
    {
        while(i < n-1 && orientation(p0, points[i],points[i+1]) == 0)i++;

        points[m] = points[i];
        m++; // Update size of modified array
    }
    if (m < 3){
        printf("Case %lld: %lf\n", TestCase, 0.0);
        return;
    }

    stack<Point>S;
    S.push(points[0]);
    S.push(points[1]);
    S.push(points[2]);

    for (int i = 3; i < m ; i++)
    {
        while (orientation(nextToTop(S), S.top(), points[i])>=0){
            S.pop();
        }
        S.push(points[i]);
    }

    int cnt=0;
    while (!S.empty())
    {
        Point p=S.top();
        ans[cnt++]=p;
        S.pop();
        //cout<<
    }
    vector<Point>V;
    for(int i=cnt-1;i>=0;i--)V.push_back(ans[i]);
    ll sz=V.size();

    double Ans=180.0;
    for(int i=0;i<sz;i++)
    {   //angle of each poll w.r.t it's adjacent points
        int j=(i+1)%sz;
        int k=(i-1+sz)%sz;
        Ans = min(Ans, (findAngle(V[i],V[j],V[k])*180)/PI );  //degree=radian*(180/PI)
    }
    printf("Case %lld: %.9lf\n", TestCase, Ans);
    return;
}


