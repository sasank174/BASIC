#include<iostream>
using namespace std;

void display(struct Node *p);
void insert(struct Node *p,int n);

struct Node{
	int data;
	struct Node *next;
};

struct Node* first = NULL;
struct Node* last = NULL;

void create(int A[],int n){
	struct Node *t;

	first = new struct Node();

	first->data=A[0];
	first->next=NULL;
	last = first;
	for (int i = 1; i < n; i++)
	{
		t = new struct Node();
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void display(struct Node *p){
	while (p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
}

void duplicate(struct Node *p){
	struct Node *q;
	q=first;
	p=first->next;
	int x;
	while (p!=NULL){
		if(p->data==q->data){
			q->next = p->next;
			delete p;
			p=q->next;
		}else{
			q=p;
			p=p->next;
		}
	}
	display(first);
}

void reverse(struct Node *p){
	struct Node *q,*r;
	q=NULL;
	r=NULL;
	p=first;
	while (p!=NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
	display(first);
}

void insert(struct Node *p,int n){
	struct Node *t,*q=NULL;
	t = new struct Node();
	t->data=n;
	t->next=NULL;

	if (first == NULL){
		first = t;
	}else{
		while (p && p->data<n){
			q=p;
			p=p->next;
		}
		if (p==first){
			t->next = first;
			first = t;
		}else{
			t->next = q->next;
			q->next = t;
		}
	}
	display(first);
}

int main(int argc, char const *argv[])
{
	int A[]={3,3,5,5,5,7,10,10,10,15};

	create(A,10);
	display(first);
	cout<<"================="<<endl;
	// insert(first,2);
	// cout<<"========duplicate========="<<endl;
	// duplicate(first);
	cout<<"========reverse========="<<endl;
	// reverse(first);

	return 0;
}