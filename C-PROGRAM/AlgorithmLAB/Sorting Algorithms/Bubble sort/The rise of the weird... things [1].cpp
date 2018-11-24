


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
	int n, m, j=-1, k=-1;

        scanf("%d", &n);
    int sum1=0, sum2=0;
        for (int i = 0; i<n ; i++)
        {
            scanf("%d", &m);
            if(m%2==0){arr1[++j]=m;sum1+=m;}
            else {arr2[++k]=m;sum2+=m;}
        }
        bubbleSort(arr1, j);
        bubbleSort(arr2, k);
        int u=0, v=0;
        for (int i = 0 ; i<n ; i++)
        {
                if(i<=j){
                    printf("%d ", arr1[u++]);
                    if(i==j)printf("%d ", sum1);
                }
                else{
                    printf("%d ", arr2[v++]);
                }
        }
        printf("%d\n", sum2);
	return 0;
}


