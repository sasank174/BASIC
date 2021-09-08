#include<iostream>
using namespace std;

void push(struct Node *p,int n);
void insert(struct Node *p,int n,int v);
void display(struct Node *p);
void Rdisplay(struct Node *p);
void count(struct Node *p);
void max(struct Node *p);

struct Node
{
	int data;
	struct Node *next;
};

struct Node* first = NULL;
struct Node* last = NULL;

void create(int A[],int n){
	struct Node *t,*last;

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
// =========================push
void push(struct Node *p,int n){
	struct Node *t;
	t = new struct Node();
	t->data = n;
	t->next=NULL;

	if (last == NULL){
		first = t;
		last = t;
	}else{
		last->next = t;
		last = t;
	}
	display(first);
}
// =========================delete
void deletel(struct Node *p,int n){
	struct Node *q;
	p=first;
	q=NULL;
	int x;

	if (n==1){
		first=first->next;
		x=p->data;
		delete p;
	}else{
		for (int i = 0; i < n-1; i++){
			q=p;
			p=p->next;
		}
		q->next = p->next;
		x=p->data;
		delete p;
		
	}
	display(first);
}

// =========================insert
void insert(struct Node *p,int n,int v){
	struct Node *t;
	t = new struct Node();
	t->data=v;
	if (n==0){
		t->next=first;
		first = t;
	}else{
		p=first;
		for (int i = 0; i < n-1; i++)
		{
			p=p->next;
		}
		t->next = p->next;
		p->next = t;
	}
}

// =========================display
void display(struct Node *p){
	while (p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
}

// ========================Recursive display
void Rdisplay(struct Node *p){
	if(p!=NULL){
		cout<<p->data<<endl;
		Rdisplay(p=p->next);
	}
}

// ========================count
void count(struct Node *p){
	int i = 0;
	int sum = 0;
	while (p!=NULL)
	{
		sum = sum + p->data;
		p=p->next;
		i++;
	}
	cout<<"count: "<<i<<" SUM: "<<sum<<endl;
}
// ========================max
void max(struct Node *p){
	int i,j;
	while (p!=NULL){
		if (i <= p->data){
			i = p->data;
		}
		if (j >= p->data){
			j = p->data;
		}
		
		p = p->next;
	}
	cout<<"MAX: "<<i<<" MIN: "<<j<<endl;
}

// ========================search
Node *search(struct Node *p,int n){
	while (p!=NULL){
		if (p->data == n){
			return p;
		}
		p = p->next;
	}
	return NULL;
}

// ========================recursive search
Node *Rsearch(struct Node *p,int n){
	if(p==NULL){
		return NULL;
	}
	if (p->data == n){
		return p;
	}
	return Rsearch(p->next,n);
}

// ========================Improved search
Node *Isearch(struct Node *p,int n){
	Node *q;
	while (p!=NULL){
		if (p->data == n){
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p = p->next;
	}
	return NULL;
}

int main(int argc, char const *argv[])
{
	int A[]={3,5,7,10,15};

	// create(A,5);
	
	display(first);
	cout<<"========================"<<endl;
	// Rdisplay(first);
	// cout<<"========================"<<endl;
	// count(first);
	// cout<<"========================"<<endl;
	// max(first);
	// cout<<"========================"<<endl;
	// cout<<search(first,3)<<endl;
	// cout<<"========================"<<endl;
	// cout<<Rsearch(first,3)<<endl;
	// cout<<"========================"<<endl;
	// cout<<Isearch(first,10)<<endl;
	// cout<<"========================"<<endl;
	// insert(first,0,20);
	// cout<<"========================"<<endl;
	push(first,10);
	cout<<"========================"<<endl;
	push(first,20);
	cout<<"========================"<<endl;
	push(first,30);
	cout<<"========================"<<endl;
	push(first,40);
	cout<<"========================"<<endl;
	push(first,50);
	cout<<"========================"<<endl;
	cout<<"============deleted============"<<endl;
	deletel(first,3);
	cout<<"========================"<<endl;

	return 0;
}