#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node *next;
};

class Linkedlist{
private:
	Node *first;
public:
	Linkedlist(){first = NULL;}
	Linkedlist(int A[],int n);
	~Linkedlist();
	void Display();
	void insert(int index,int x);
	int Delete(int index);
	int Length();
};

Linkedlist::Linkedlist(int A[],int n){
	Node *last,*t;
	int i=0;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++){
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

Linkedlist::~Linkedlist(){
	Node *p=first;
	while (first){
		first=first->next;
		delete p;
		p = first; 
	}
}

void Linkedlist::Display(){
	Node *p=first;
	while (p){
		cout<<p->data<<endl;
		p=p->next;
	}
}

int Linkedlist::Length(){
	Node *p=first;
	int len = 0;
	while (p){
		len++;
		p=p->next;
	}
	return len;
}

void Linkedlist::insert(int index,int n){
	Node *t,*p=first;
	if (index<0 || index>Length()){
		return;
	}
	t = new Node;
	t->data=n;
	t->next = NULL;

	if (index==0){
		t->next = first;
		first = t;
	}else{
		for (int i = 0; i < index-1; i++)
			p=p->next;
		t->next = p->next;
		p->next = t;
	}
}

int Linkedlist::Delete(int index){
	Node *p,*q=NULL;
	int x=-1;

	if (index<1 || index > Length()){
		return -1;
	}else if(index==1){
		p=first;
		first=first->next;
		x=p->data;
		delete p;
	}else{
		p=first;
		for (int i = 0; i < index-1; i++){
			q=p;
			p=p->next;
		}
		q->next = p->next;
		x=p->data;
		delete p;		
	}
	return x;
}

int main(int argc, char const *argv[]){
	int A[]={1,2,3,4,5};
	Linkedlist L(A,5);
	L.insert(0,10);
	L.Display();
	return 0;
}