#include<bits/stdc++.h>
using namespace std;

struct node{
	int key;
	struct node *left, *right;
};

struct node* newnode(int key)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->key=key;
	temp->left=temp->right=NULL;
}


void inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		inorder(root->right);
		cout<<root->key<<"->";	
	}
}


struct node* insert(struct node* node, int key)
{
	if(node==NULL)
	{
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		temp->key=key;
		temp->left=temp->right=NULL;
		return temp;
	}	
	if(key < node->key)
	{
		node->left=insert(node->left,key);
	}
	else{
		node->right=insert(node->right,key);
	}
	return node;
}
int main(){
	struct node* root=NULL;
	root=insert(root,8);
	root = insert(root, 3);
	root = insert(root, 1);
	root = insert(root, 6);
 	root = insert(root, 7);
	root = insert(root, 10);
	root = insert(root, 14);
	root = insert(root, 4);
	cout<<"Inorder traversal: "<<endl;
	inorder(root);
}
