#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100000+10
#define PI 3.14159265358979323846
struct Point{
    ll x,y;
}points[mx],ans[mx];
Point Pivot, p0;
ll orientation(Point p,Point q,Point r){
    return ((q.y-p.y)*(r.x-q.x))-((r.y-q.y)*(q.x-p.x));
}
ll distSq(Point p1,Point p2){
    return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}
bool compare(Point a,Point b){
    if(orientation(Pivot,a,b)==0)  //checking co-linearity
        return distSq(Pivot,a)<distSq(Pivot,b);  //if co-linear put nearest one

    ll slop1x=a.x-Pivot.x; ll slop1y=a.y-Pivot.y;
    ll slop2x=b.x-Pivot.x; ll slop2y=b.y-Pivot.y;
    return (atan2((double)slop1y,(double)slop1x)-atan2((double)slop2y,(double)slop2x))<0;
}
Point nextToTop(stack<Point> &S)
{
    Point p = S.top();
    S.pop();
    Point res = S.top();
    S.push(p);
    return res;
}

double ConvexHull(ll N){
    ll ymin=points[0].y,mn=0;
    for(int i=1;i<N;i++){  //Finding the bottom-most point
        if(points[i].y<ymin || (ymin==points[i].y && points[i].x<points[mn].x)){
            ymin=points[i].y; mn=i;
        }
    }
    swap(points[0],points[mn]);  //place the bottom-most point in the 1st position
    p0=points[0];
    Pivot=p0;
    sort(points+1,points+N,compare);
    ll m=1;
    for(int i=1;i<N;i++){
        while(i<N-1 && orientation(p0,points[i], points[i+1])==0) i++; //removing same angle points
        points[m++]=points[i];
    }
    //if(m<3) return; //Convex Hull is not possible

    stack<Point> S;
    S.push(points[0]);
    S.push(points[1]);
    S.push(points[2]);
    for(int i=3;i<m;i++){
        while (orientation(nextToTop(S),S.top(),points[i])>=0) //clockwise
         S.pop();
         S.push(points[i]);
    }
    int cnt=0;
    while(!S.empty()){
        Point p=S.top();
        ans[cnt++]=p;
        S.pop();
    }
    vector<Point>V;
    for(int i=cnt-1;i>=0;i--)V.push_back(ans[i]);
    int sz=V.size();
    double dist=0.0;
    V[sz]=V[0];
    for(int i=0;i<sz;i++){
        dist+=sqrt(distSq(V[i],V[i+1]));
    }
    return dist;
}

int main()
{
    ll N,a,b,tc=0,test;
    double d;
    scanf("%lld",&test);
    while(test--){
        scanf("%lld%lf",&N,&d);
        for(int i=0;i<N;i++){
            scanf("%lld%lld",&points[i].x, &points[i].y);
        }
        if(N<3){
            double h=2.0*sqrt(distSq(points[0],points[1]));
            printf("Case %lld: %0.8f\n",++tc,((double)2.0*PI*d)+h);
        }
        else
        printf("Case %lld: %0.8f\n",++tc,ConvexHull(N)+((double)2.0*PI*d));
    }
    return 0;
}



