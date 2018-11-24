#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
    void setf(int _x, int _y){x=_x; y=_y;}
};
Point p0;

int findMinY(Point points[], int n){
    int ymin = points[0].y;
    int mini = 0;
    for (int i = 1; i < n; i++)
    {
        if ((points[i].y < ymin) || (ymin == points[i].y && points[i].x < points[mini].x))
        {
            ymin = points[i].y;
            mini = i;
        }
    }
    return mini;
}

int distSq(Point p1, Point p2)
{
    return (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y);
}

Point nextToTop(stack<Point> &S)
{
    Point p = S.top();
	S.pop();
	Point res = S.top();
	S.push(p);
	return res;
}
// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point p, Point q, Point r)
{
    ///(y1-y)*(x2-x1) - (x1-x)*(y2-y1)
	int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

	if (val == 0) return 0; // colinear
	return (val > 0)? 1: 2; // clock or counterclock wise
}
// A function used by library function qsort() to sort an array of
// points with respect to the first point
bool compare(Point A, Point B)
{

   int o = orientation(p0, A, B);
   if (o == 0)
     return (distSq(p0, B) >= distSq(p0, A))? 1: 0;

   return (o == 2)? 1: 0;
}


void convexHull(Point points[], int n);

int main()
{
    int n, xx, yy;
    Point points[100005];
    scanf("%d", &n);    //number of points
    for(int i=0; i<n ; i++)
    {
        scanf("%d %d", &xx, &yy);
        points[i].setf(xx, yy);
    }

    convexHull(points, n);

    return 0;
}



void convexHull(Point points[], int n)
{
    int ymin=findMinY(points, n);
    swap(points[0], points[ymin]);

    p0 = points[0];

    sort(points+1, points+n, compare);

    int m = 1; // Initialize size of modified array
    for (int i=1; i<n; i++)
    {
        // Keep removing i while angle of i and i+1 is same
        // with respect to p0
        while(i < n-1 && orientation(p0, points[i],points[i+1]) == 0)i++;

        points[m] = points[i];
        m++; // Update size of modified array
    }
    if (m < 3) return;

    stack<Point>S;
    S.push(points[0]);
    S.push(points[1]);
    S.push(points[2]);
    // Process remaining n-3 points
    for (int i = 3; i < m ; i++)
    {
        // Keep removing top while the angle formed by
        // points next-to-top, top, and points[i] makes
        // a non-left turn
        while (orientation(nextToTop(S), S.top(), points[i]) != 2){
            S.pop();
        }
        S.push(points[i]);
    }

    printf("The Hull Points:\n");
    while (!S.empty())
    {
        Point p = S.top();
        cout << "(" << p.x << ", " << p.y <<")" << endl;
        S.pop();
    }
    return;
}



/*
0 10 10
0 10 0
0 10 10
0 10 0
0 2 10
0 1 0
0 2 10
0 1 10
0 2 10
0 1 0
0 10 2
0 0 1
0 2 10
0 1 10
10 2 10
0 1 10
0 10 10
0 0 10
The Hull Points:
(10, 10)
(10, 0)
(0, 0)
*/
