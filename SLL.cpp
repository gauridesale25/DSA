#include <iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int a)
		{
			data=a;
			next=NULL;
		}
};
int main()
{
	Node* ptr=new Node(2);
	ptr=ptr->next;
	
	cout<<ptr->data;
}
