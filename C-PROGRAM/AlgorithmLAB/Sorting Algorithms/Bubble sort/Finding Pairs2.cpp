
/*BubbleSort*/

#include <bits/stdc++.h>
using namespace std;

int ans;
int arr[1000005];
void bubbleSort(int arr[], int arr_size)
{
	for (int i = 0; i<arr_size ; ++i)
        for (int j=i; j<arr_size ; ++j)
        {
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }

    for (int i = 0; i<arr_size ; )
    {
        int m=0, tmp=arr[i];
        while(tmp==arr[i]){
            i++;
            m++;
        }
        ans+=(m*(m+1)/2);
    }

}
// Driver program to test above function
int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--){
        scanf("%d", &n);
        for(int i=0; i<n ; i++)scanf("%d", &arr[i]);

        ans=0;

        bubbleSort(arr, n);

        cout<<ans<<endl;
	}
	return 0;
}

