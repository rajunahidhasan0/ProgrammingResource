
/*Quick Sort*/

#include <bits/stdc++.h>
using namespace std;
int ar[10010], ar2[10010];
int Partition(int arr[], int l, int h)
{
    int pivot=arr[h];
    int i=l-1;//j=h;
    for(int j=l; j<=h-1; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}
void quicksort(int arr[], int l, int h)
{
    if(l<h){
        int mid=Partition(arr, l, h);
        //cout<<mid<<endl;
        quicksort(arr,l, mid-1);
        quicksort(arr,mid+1, h);
    }
}

// Driver program to test above function
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n, m;
        //cout<<"Number of element: ";
        cin>>n>>m;
        memset(ar, 0, sizeof(ar));
        //cout<<"Array Elements: ";
        for(int i=0; i<n ; i++)cin>>ar[i];
        for(int i=0; i<m ; i++)cin>>ar2[i];

        quicksort(ar, 0, n-1);
        quicksort(ar2, 0, m-1);

        //printf("Sorted array is :\n");
        int i=n-1, j=m-1, p=0;
        for( ; j>=0 && i>=0; ){
            if(ar[i]<=ar2[j]){
                j--;
            }
            else{
                i--; j--;
            }
        }
        //cout<<i<<" "<<j<<endl;
       // for(int i=0;i<n ; i++)cout<<ar[i]<<" ";
        //cout<<endl;
        //for(int i=0;i<m ; i++)cout<<ar2[i]<<" ";
        if(p==1 || i>=0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
