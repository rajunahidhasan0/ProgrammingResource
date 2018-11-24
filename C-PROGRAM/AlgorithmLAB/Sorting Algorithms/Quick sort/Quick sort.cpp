/*Quick Sort*/

#include <bits/stdc++.h>
using namespace std;
int ar[1000100];
int Partition(int l, int h)
{
    int pivot=ar[h];
    int i=l-1;//j=h;
    for(int j=l; j<=h-1; j++){
        if(ar[j]<=pivot){
            i++;
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[i+1], ar[h]);
    return i+1;
}
void quicksort(int l, int h)
{
    if(l<h){
        int mid=Partition(l, h);
        //cout<<mid<<endl;
        quicksort(l, mid-1);
        quicksort(mid+1, h);
    }
}

// Driver program to test above function
int main()
{
    int n;
    //cout<<"Number of element: ";
    cin>>n;
    memset(ar, 0, sizeof(ar));
    //cout<<"Array Elements: ";
    for(int i=0; i<n ; i++)cin>>ar[i];

	quicksort(0, n-1);

	//printf("Sorted array is :\n");

	for(int i=0; i<n ; i++)cout<<ar[i]<<" ";

	return 0;
}
