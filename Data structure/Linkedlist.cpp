//CODE BY YASHARTH DUBEY
//  IIIT DHARWAD
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// created Node class to represent a Node of linked list
class Node{
	public:
		// DATA variable to store data in linked list
		char data;
		//Node pointer to store the address of next node
		Node *next;
};
void printl(Node *a){
	//traversing through nodes
	if(a){
		cout<<a->data<<" ";
		a = a->next;
		printl(a);
	}
	else{
		cout<<endl;
	}
}
// function to insert a new node in the desired position
void push(Node *a, int n){
	if(n>2){
		a = a->next;
		push(a,n-1);
	}
	else{
		Node *b;
		b = new Node;
		cin>>b->data;
		b->next = a->next;
		a->next = b;
	}
}
// function to delete a node from the desired position
void pop(Node *a, int n){
	if(n>2){
		a=a->next;
		pop(a,n-1);
	}
	else{
		Node *b;
		b = a->next;
		a->next = b->next;
		b = NULL;
	}
}
int main() {
	Node *head, *first, *second, *third;
	//creating new nodes
	head = new Node;
	first = new Node;
	second = new Node;
	third = new Node;
	
	//putting data in them
	head->data = 'A';
	//connecting them from next nodes
	head->next = first;

	first->data = 'B';
	first->next = second;

	second->data = 'C';
	second->next = third;

	third->data = 'E';
	third->next = NULL;

	printl(head);

	push(head,4);

	printl(head);

	pop(head,3);

	printl(head);

}
