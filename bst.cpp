#include <iostream>
using namespace std;

struct node {
	struct node* left;
	struct node* right;
	int data;
};

struct node* createNode(int key) {
	struct node* newNode =(struct node*) malloc(sizeof (struct node));
	newNode->data = key;
	newNode->left = newNode->right = NULL;
	return newNode;
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout <<  root->data <<endl;
        inorder(root->right);
    }
}

struct node* insert(struct node* bst, int key) {
	if( bst == NULL ) return createNode(key);
	if(key < bst->data) bst->left = insert(bst->left, key);	
	else if( key > bst->data ) bst->right = insert(bst->right, key);
	return bst;
}

int main() {
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	int arr[]={1,2,3,4,5,6,7,8,9};
	struct node* bst = NULL;
	int len = sizeof(arr) / sizeof(arr[0]);
	bst = insert(bst, 50);
	for(int i=0; i<len; i++) insert(bst, arr[i]);
	inorder(bst);
	return 0;
}