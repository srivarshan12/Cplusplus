#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node  *left, *right;
};

struct node* insert(struct node* root,int key)
{
	if(root==NULL)
	{
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		temp->data=key;
		temp->left=temp->right=NULL;
		return temp;
	}
	if(key < root->data)
	{
		root->left=insert(root->left,key);
	}
	else{
		root->right=insert(root->right,key);
	}
}

struct node* inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<"->";
		inorder(root->right);
	}
}

struct node* deletee(struct node* root, int key)
{
	if(root==NULL)
	{
		return root;
	}
	if(key < root->data)
	{
		root->left=deletee(root->left, key);
	}
	else if(key > root->data)
	{
		root->right=deletee(root->right,key);
	}
	else{
		if(root->left=NULL)
		{
			struct node* temp=root->left;
			free(temp);
			return temp;
		}
		else if(root->right=NULL)
		{
			struct node* temp=root->left;
			free(root);
			return temp;
		}
		
		struct node* temp=minvalue(root->right);
		root->key=temp->key;
		root->right=deletee(root->right,temp->data);
		
	}
	return root;
}

int main(){
	struct node* root=NULL;
	root=insert(root,8);
	root=insert(root,3);
	root=insert(root,1);
	root=insert(root,6);
	root=deletee(root,3);
	inorder(root);
}
