/*
    Initialize event queue EQ = all segment endpoints;
    Sort EQ by increasing x and y;
    Initialize sweep line SL to be empty;
    Initialize output intersection list IL to be empty;

    While (EQ is nonempty) {
        Let E = the next event from EQ;
        If (E is a left endpoint) {
            Let segE = E's segment;
            Add segE to SL;
            Let segA = the segment Above segE in SL;
            Let segB = the segment Below segE in SL;
            If (I = Intersect( segE with segA) exists)
                Insert I into EQ;
            If (I = Intersect( segE with segB) exists)
                Insert I into EQ;
        }
        Else If (E is a right endpoint) {
            Let segE = E's segment;
            Let segA = the segment Above segE in SL;
            Let segB = the segment Below segE in SL;
            Delete segE from SL;
            If (I = Intersect( segA with segB) exists)
                If (I is not in EQ already)
                    Insert I into EQ;
        }
        Else {  // E is an intersection event
            Add E’s intersect point to the output list IL;
            Let segE1 above segE2 be E's intersecting segments in SL;
            Swap their positions so that segE2 is now above segE1;
            Let segA = the segment above segE2 in SL;
            Let segB = the segment below segE1 in SL;
            If (I = Intersect(segE2 with segA) exists)
                If (I is not in EQ already)
                    Insert I into EQ;
            If (I = Intersect(segE1 with segB) exists)
                If (I is not in EQ already)
                    Insert I into EQ;
        }
        remove E from EQ;
    }
    return IL;
}
*/
#include<bits/stdc++.h>
using namespace std;
#define left 1
#define right 2



#include<bits/stdc++.h>
using namespace std;
// An AVL tree node
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	int height;
};
int height(struct Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}
struct Node* newNode(int key)
{
	struct Node* node = (struct Node*)
						malloc(sizeof(struct Node));
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1; // new node is initially added at leaf
	return(node);
}
struct Node *rightRotate(struct Node *y)
{
	struct Node *x = y->left;
	struct Node *T2 = x->right;

	// Perform rotation
	x->right = y;
	y->left = T2;

	// Update heights
	y->height = max(height(y->left), height(y->right))+1;
	x->height = max(height(x->left), height(x->right))+1;

	// Return new root
	return x;
}

struct Node *leftRotate(struct Node *x)
{
	struct Node *y = x->right;
	struct Node *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left), height(x->right))+1;
	y->height = max(height(y->left), height(y->right))+1;

	return y;
}
int getBalance(struct Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}
struct Node* insert(struct Node* node, int key)
{
	/* 1. Perform the normal BST insertion */
	if (node == NULL)
		return(newNode(key));

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else
		return node;

	node->height = 1 + max(height(node->left),
						height(node->right));

	int balance = getBalance(node);

	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}
	return node;
}
void preOrder(struct Node *root)
{
	if(root != NULL)
	{
		printf("%d ", root->key);
		preOrder(root->left);
		preOrder(root->right);
	}
}



///MAin program

struct Point{
    int x, y, flag, link;
};
struct Line{
    int x1, y1, x2, y2;
};

bool compare(Point A, Point B)
{
    return A.x<B.x;
}
void sweepLineIntersection(Point Points[], int n)
{
    sort(Points, Points+(2*n), compare);
    for(int i=0; i>2*n ; i++)
    {
        if(Points[i].flag==left){

            struct Node *root = NULL;
            root = insert(root, 25);
        }
        else{

        }
    }

}
int main()
{
    int n, a1, b1, a2, b2;
    Point points[1000];
    Line line[1000];
    scanf("%d", &n);
    for(int i=0; i<n ;i++)
    {
        scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
        points[i].x=a1;
        points[i].y=b1;
        points[i].flag=left;
        points[i].link=i;

        points[n+i].x=a2;
        points[n+i].y=b2;
        points[n+i].flag=right;
        points[n+i].link=i;

        line[i].x1=a1;
        line[i].y1=b1;
        line[i].x2=a2;
        line[i].y2=b2;
    }

    sweepLineIntersection(points, n);

    return 0;
}
