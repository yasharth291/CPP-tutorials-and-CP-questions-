//CODE BY YASHARTH DUBEY
//  IIIT DHARWAD
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		char data;
		Node *next;
};
void printl(Node *a){
	if(a){
		cout<<a->data<<" ";
		a = a->next;
		printl(a);
	}
	else{
		cout<<endl;
	}
}
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
	head = new Node;
	first = new Node;
	second = new Node;
	third = new Node;

	head->data = 'A';
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
