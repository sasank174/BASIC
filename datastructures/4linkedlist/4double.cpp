#include<iostream>
using namespace std;

void display(struct Node *h);

struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};

struct Node* first = NULL;
struct Node* last = NULL;

void create(int A[],int n){
	struct Node *t;
	first = new struct Node();

	first->data=A[0];
	first->next=NULL;
	first->prev=NULL;
	last = first;
	for (int i = 1; i < n; i++){
		t = new struct Node();
		t->data=A[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	}
}

void display(struct Node *p){
	while (p){
		cout<<p->data<<endl;
		p=p->next;
	}	
}

void length(struct Node *p){
	int x = 0,sum=0;
	while (p){
		sum=sum+p->data;
		x++;
		p=p->next;
	}
	cout<<"count: "<<x<<" SUM: "<<sum<<endl;
}

void insert(struct Node *p,int n){
	struct Node *t;
	t = new struct Node();
	t->data=n;
	t->next=last->next;
	t->prev=last;
	last->next=t;
	last=t;
	display(first);
}

void insert(struct Node *p,int n,int v){
	struct Node *t;
	t = new struct Node();
	t->data=v;

	if (n==0){
		t->next = first;
		t->prev = NULL;
		first->prev = t;
		first = t;
	}else{
		for (int i = 0; i < n-1; i++){
			p=p->next;
		}
		t->next=p->next;
		t->prev = p;
		p->next->prev = t;
		p->next=t;
	}
	display(first);
}

void deletel(struct Node *p,int n){
	int x;

	if (n==1){
		p=first;
		first=first->next;
		first->prev=NULL;
		x=p->data;
		delete p;
	}else{
		for (int i = 0; i < n-1; i++){
			p=p->next;
		}
		p->prev->next=p->next;
		if (p->next){
			p->next->prev=p->prev;
		}
		x=p->data;
		delete p;
	}
	display(first);
}

void reverse(struct Node *p){
	struct Node *t;
	while(p){
		t = p->next;
		p->next = p->prev;
		p->prev=t;
		p=p->prev;
		if (p!=NULL && p->next==NULL){
			first = p;
		}
	}
	display(first);
}

int main(int argc, char const *argv[]){
	
	int A[]={2,5,7,9,11};

	create(A,5);

	display(first);
	cout<<"========================"<<endl;
	length(first);
	cout<<"=========insert==============="<<endl;
	// insert(first,10);
	// cout<<"========================"<<endl;
	// insert(first,3,55);
	// cout<<"========================"<<endl;
	// deletel(first,5);
	// cout<<"========================"<<endl;
	reverse(first);
	cout<<"========================"<<endl;
	
	return 0;
}