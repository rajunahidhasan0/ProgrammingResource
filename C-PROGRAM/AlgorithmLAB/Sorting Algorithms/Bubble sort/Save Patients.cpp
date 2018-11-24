


/*BubbleSort*/

#include <bits/stdc++.h>
using namespace std;

int ans;
int arr1[15], arr2[15];
void bubbleSort(int arr[], int arr_size)
{
	for (int i = 0; i<arr_size ; ++i)
        for (int j=i; j<arr_size ; ++j)
        {
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }

}
// Driver program to test above function
int main()
{
	int n, m;

        scanf("%d", &n);
        int sum1=0, sum2=0;
        for (int i = 0; i<n ; i++)
        {
            scanf("%d", &arr1[i]);
            //sum1+=arr[i];
        }
        bubbleSort(arr1, n);
        for (int i = 0 ; i<n ; i++)
        {
            scanf("%d", &arr2[i]);
            //sum2+=arr2[i];
        }
        bubbleSort(arr2, n);
        int t=0;
        for (int i = 0 ; i<n ; i++)
        {
            if(arr1[i]<arr2[i]){
                t=1;
                break;
            }
        }
        if(t)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

	return 0;
}

