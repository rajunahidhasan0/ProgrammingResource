


/*InsertionSort*/

#include <bits/stdc++.h>
using namespace std;

int ans;
int a[105], b[105];
void insertion_sort ( int A[] , int n)
{
     for( int i = 0 ;i < n ; i++ ) {
        int temp = A[ i ];
        int j = i;

        while(  j > 0  && temp < A[ j -1]) {
                A[ j ] = A[ j-1];
                j= j - 1;
        }
        A[ j ] = temp;
    }
}



int main()
{
	int n, m;

    scanf("%d", &n);
    for(int i=0; i<n; i++){scanf("%d", &a[i]); b[i]=a[i];}
    insertion_sort(a, n);

     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[j]==b[i])printf("%d ", j+1);
        }
     }

	return 0;
}

