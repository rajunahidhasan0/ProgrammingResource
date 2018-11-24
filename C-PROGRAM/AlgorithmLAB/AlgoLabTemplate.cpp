/*Counting Sort || TC=O( ), MC=O( )*/
General code for counting sort:-

int RANGE;
void countSort(int arr[], int arr_size)         ///take the arr referrence
{
	int output[arr_size+1];
	int c[RANGE + 1], i;
	memset(c, 0, sizeof(c));

	for(i = 0; i<arr_size ; ++i)
		c[arr[i]]++;

	for (i = 1; i <= RANGE; ++i)
		c[i] += c[i-1];                 //cumulitive sum of count

	// Build the output  array
	for (i = 0; i<arr_size ; ++i)
	{
		output[ c[arr[i]]-1 ] = arr[i];
		--c[arr[i]];
	}

	for (i = 0; i<arr_size ; ++i)
		arr[i] = output[i];
}

Problem available for Counting sort:


Problem solved by Counting sort:
    #HackerEarth: Finding Pairs,


/*Bubble Sort || TC=( Avg: O(n^2), Worst: O(n^2) ), MC=O(n)*/

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


Problem available for Bubble sort:


Problem solved by Bubble sort:
    #HackerEarth: Finding Pairs(PA), Easy Going.(Very Easy), Save Patients


/*Selection Sort || TC=( Avg: O(n^2), MC=O( )*/

void selectionSort(int arr[], int arr_size)
{
	for (int i = 0; i<arr_size-1 ; ++i){
        int min_idx=i;
        for (int j =i+1; j<arr_size ; ++j)
        {
            if(arr[i]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[min_idx], arr[i]);
	}
}

Problem available for Selection sort:


Problem solved by Selection sort:
    #HackerEarth: Finding Pairs(PA),

/*Insertion Sort || TC=(Avg:O(n^2), MC=O( )*/

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

Problem available for Insertion sort:


Problem solved by Insertion sort:
    #HackerEarth: Insertion Sort,

/*Quick Sort || TC=(Avg: O(n log(n)) , Worst:O(n^2) ), MC=O(n)*/

int ar[1000];
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
        quicksort(l, mid-1);
        quicksort(mid+1, h);
    }
}
Problem available for Quick sort:


Problem solved by Quick sort:
    #HackerEarth: Quick Sort,Prom Night


/*Merge Sort || TC=(Avg: O(n log(n)), worst: O(n log(n)) ), MC=O( )*/


void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	/* Copy the remaining elements of R[], if there are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)     ///Initial call::mergeSort(arr, 0, arr_size - 1);
{
	if (l < r)
	{
		int m = l+(r-l)/2; ///same as (l+r)/2;
		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);

		merge(arr, l, m, r);
	}
}
Problem available for Merge sort:


Problem solved by Merge sort:
    #HackerEarth: Criminals: Little Deepu and Little Kuldeep(PA)






/*BFS || TC: O(V+E), MC: O(V)*/

int node, edge;
vector <int> adj[1000];
int level[1000];
bool visited[1000];
int parent[1000];

void bfs(int source)
{
    MS(visited,0);
    MS(level,0);

    queue <int> Q;
    level[source] = 0;
    Q.push(source);
    visited[source] = 1;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i]]==0)
            {
                level[adj[u][i]] = level[u]+1;
                Q.push(adj[u][i]);
                parent[adj[u][i]] = u;
                visited[adj[u][i]] = 1;
            }
        }
    }
    return;
}
void graph_input()
{
    int x,y;
    scanf("%d%d",&node,&edge);
    for(int i=1 ; i<=edge; i++)
    {
        scanf("%d%d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

Problem available for BFS:


Problem solved by BFS:
    #Light OJ:
            1009, 1012, 1039, 1046, 1049, 1066, 1094, 1111,
            1141, 1357, 1174, 1175, 1185, 1238, 1257, 1263, 1271, 1337



/*DFS || TC O(V+E)*/
///Recursive
void DFS(int v)
{
	vis[v] = true;
	cout << v <<" ";
	for (int i=0; i < adj[v].size(); i++){
        int u=adj[v][i];

		if(!vis[u]){
            DFS(u);
		}
	}
}
///Iterative
 void DFS(int src)
{
	stack<int>st;
	st.push(src);
    vis[src]=1;
    while(!st.empty()){
        int v=st.top();
        st.pop();
        cout<<v<<" ";
        for(int i=0; i<adj[v].size(); i++){
            int w=adj[v][i];
            if(!vis[w]){
                st.push(w);
                vis[w]=1;
            }
        }
    }
}
Problem available for DFS:
     #Light OJ:
             1009, 1012, 1039, 1046, 1049, 1066, 1094, 1111,
             1141, 1357, 1174, 1175, 1185, 1238, 1257, 1263, 1271, 1337

Problem solved by DFS:
    #HackerEarth:
                Unreachable Nodes, Bishu and his Girlfriend
    #Light OJ:


/*IDDFS || MC=O(b)*/

bool DLS(int src, int target, int limit)
{
    if (src == target)
        return true;
    if (limit <= 0)
        return false;

    // Recur for all the vertices adjacent to source vertex
    for (int i=0 ; i < adj[src].size(); i++)
       if (DLS(adj[src][i], target, limit-1) == true)
          return true;

     return false;
}

bool IDDFS(int src, int target, int max_depth)
{
    for (int i = 0; i <= max_depth; i++)
       if (DLS(src, target, i) == true)
          return true;

    return false;
}

Problem available for IDDFS:



Problem solved by IDDFS:




/*Dijkstra || Single source Shortest Path(+ve cost)*/

cost[MX]=INF;
vector<int>ed[MX], ec[MX];  ///ed->adjacent node ec->dist between the adjacent node
void dijkstra(int s){
    int f,w,i;

    priority_queue<pii,vector<pii>,greater<pii> > pq;   ///greater<pii> for get minpriority

    pii fr;
    pq.push(pii(0,s));
    cost[s] = 0;

    while(!pq.empty()){
        fr = pq.top();
        pq.pop();
        f = fr.second;
        w = fr.first;
        if(cost[f]!=w) continue;
        for(i=0;i<ed[f].size();i++){
            v = ed[f][i];
            w1 = ec[f][i];
            if(cost[v]>w+w1){
                cost[v] = w+w1;
                pq.push(pii(cost[v],v));
            }
        }
    }
}

Problem available for Dijkstra:



Problem solved by Dijkstra:
    #Light OJ:
        1002(Country Roads)


/*Segment Tree*/

///(i)Costruct (ii)Getsum (iii)Update

#include <bits/stdc++.h>
using namespace std;

int getMid(int s, int e) {  return s + (e -s)/2;  }

int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];

    //outside the given range
    if (se < qs || ss > qe)
        return 0;

    // overlaps with the given range
    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}

void updateValueUtil(int *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)return;
    st[si] = st[si] + diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
void updateValue(int arr[], int *st, int n, int i, int new_val)
{
    // Check for erroneous input index
    if (i < 0 || i > n-1)
    {
        printf("Invalid Input\n");
        return;
    }

    int diff = new_val - arr[i];
    arr[i] = new_val;
    updateValueUtil(st, 0, n-1, i, diff, 0);
}

int getSum(int *st, int n, int qs, int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input\n");
        return -1;
    }

    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}

int *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n)));

    int max_size = 2*(int)pow(2, x) - 1;

    int *st = new int[max_size];

    constructSTUtil(arr, 0, n-1, st, 0);

    return st;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    int *st = constructST(arr, n);

    printf("Sum of values in given range = %d\n", getSum(st, n, 1, 3));

    updateValue(arr, st, n, 1, 10);

    printf("Updated sum of values in given range = %d\n", getSum(st, n, 1, 3));
    return 0;
}

Problem available for Segment Tree:


Problem solved by Segment Tree:
    #Light OJ:
            1080(Binary Simulation), 1082(Array Queries), 1093(Ghajini), 1164(Horrible Queries),1112(Curious Robin Hood)


/*Merge Sort Tree*/

Problem available for Merge Sort Tree:


Problem solved by Merge Sort Tree:


#Merge Sort Tree, Treap, A* Search, Convex Hull(Graham Scan);
