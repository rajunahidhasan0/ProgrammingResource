
/*Counting Sort*/

#include <bits/stdc++.h>
using namespace std;

int ans;
int arr[1000005];
void countSort(int arr[], int arr_size)
{
	int output[arr_size+1];
	map<int, int>mp;

	for(int i = 0; i<arr_size ; ++i)
		mp[arr[i]]++;

	for(int i = 0; i<arr_size ; ++i)
	{
	    int m=mp[arr[i]];
        ans+=(m*(m+1)/2);
        mp[arr[i]]=0;
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

        countSort(arr, n);

        cout<<ans<<endl;
	}
	return 0;
}
