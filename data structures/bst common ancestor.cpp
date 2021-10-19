#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node* right,*left;	
}*root;
struct node*newnode(int item)
{
	struct node* temp=(Struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->right=temp->left=NULL;
	return temp;

}

struct node* insert(struct node*node,int data)
{
	if(node==NULL)
	{
		return newnode(data);
	}
	if(data < node->data)
	{
	node->left=insert(node->left,data);	
	}
	else if(data > node->data)
	{
		node->right=insert(node->right,data)
	}
	return node;
}

struct node *lca(struct node* root,int n1,int n2)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data > root->data >n2)
	{
		return lca(root->right,n1,n2);
		return root;
	}
}
int main(){
	int data;
	do
		cin>>&data;
	if(data>0)
	{
		root=insert(root,data);
	}
	
}
	
