/*
    coded and authored by Jie Huang on May 26, 2016
    day 15 daily challenge
*/

#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
public:
	Node* insert(Node *head,int data)
	{
		//Complete this method
        if(head == NULL){
            head = new Node(data);
            return head;
        }

        Node *nextNode = head;
        while(nextNode->next != NULL){
            nextNode = nextNode->next;
        }
        nextNode->next = new Node(data);
        return head;
	}

	void display(Node *head)
	{
		Node *start=head;
		while(start)
		{
			cout<<start->data<<" ";
			start=start->next;
		}
	}
};

int main()
{
	Node* head=NULL;
	Solution mylist;
	int T,data;
	cin>>T;
	while(T-->0){
	  cin>>data;
	  head=mylist.insert(head,data);
	}
	mylist.display(head);

}
