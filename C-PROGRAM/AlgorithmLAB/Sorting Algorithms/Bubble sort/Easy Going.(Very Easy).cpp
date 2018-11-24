

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

}
// Driver program to test above function
int main()
{
	int t, n, m;
	scanf("%d", &t);
	while(t--){
        scanf("%d %d", &n, &m);
        for(int i=0; i<n ; i++)scanf("%d", &arr[i]);

        ans=0;

        bubbleSort(arr, n);
        int sum1=0, sum2=0;
        for (int i = 0; i<n-m ; i++)
        {
            sum1+=arr[i];
        }
        for (int i = m ; i<n ; i++)
        {
            sum2+=arr[i];
        }
        cout<<sum2-sum1<<endl;
	}
	return 0;
}

