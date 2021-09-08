#include<iostream>
using namespace std;

void display();

struct Node{
	int data;
	struct Node *next;
};

struct Node *top=NULL;

void push(int x){
	struct Node *t;
	t = new struct Node;

	if(t==NULL){
		cout<<"stack is full"<<endl;
	}else{
		t->data=x;
		t->next=top;
		top=t;
	}
	display();
}

void pop(){
	struct Node *t;
	int x;
	if(top==NULL){
		cout<<"stack is empty"<<endl;
	}else{
		t=top;
		top=top->next;
		x=t->data;
		delete t;
		cout<<x<<endl;
	}
	display();
}

void display(){
	struct Node *t;
	t=top;
	while (t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
	}
}

int main(){
	push(10);
	cout<<endl<<"============"<<endl;
	pop();
	cout<<endl<<"============"<<endl;
	return 0;
}