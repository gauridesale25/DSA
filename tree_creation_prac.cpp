#include <iostream>
#include <queue>
using namespace std;

class node
{
	public:
		int data;
		node* left;
		node* right;
		
		node(int d)
		{
			this->data=d;
			this->left=NULL;
			this->right=NULL;
		}
};
void validordertraversal(node* root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
		
		if(temp==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<temp->data<<" ";
			if(temp->left)
			{
				q.push(temp->left);
			}
			if(temp->right)
			{
				q.push(temp->right);
			}
		}	
	}
}
node* buildtree(node* root)
{
	cout<<"Enter data for the root:"<<endl;
	int data;
	cin>>data;
	root=new node(data);
	if(data==-1)
	{
		return NULL;
	}
	
	cout<<"enter data to be inserted at the left of "<<data<<endl;
	root->left=buildtree(root->left);
	cout<<"enter data to be inserted at the right of "<<data<<endl;
	root->right=buildtree(root->right);
	return root;
}
void inorder(node* root)
{
	if(root==NULL)
	{
		return ;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(node* root)
{
	if(root==NULL)
	{
		return ;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	
}
void postorder(node* root)
{
	if(root==NULL)
	{
		return ;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	cout<<"printing the valid order traversal:"<<endl;
	validordertraversal(root);
	cout<<"Inorder traversal: ";
	inorder(root);
	cout << endl << "preorder traversal is:  ";
    preorder(root); 
    cout << endl << "postorder traversal is:  ";
    postorder(root);
	
}
