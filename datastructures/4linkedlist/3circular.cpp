#include<iostream>
using namespace std;

void display(struct Node *h);

struct Node{
	int data;
	struct Node *next;
};

struct Node* head = NULL;
struct Node* last = NULL;

void create(int A[],int n){
	struct Node *t;
	head = new struct Node();
	head->data = A[0];
	head->next = head;
	last=head;

	for (int i = 1; i < n; i++){
		t = new struct Node();
		t->data=A[i];
		t->next = last->next;
		last->next = t;
		last = t;
	}		
}

void display(struct Node *h){
	do{
		cout<<h->data<<endl;
		h=h->next;
	} while (h!=head);	
}

void insert(struct Node *h,int n){
	struct Node *t;
	t = new struct Node();
	t->data=n;
	t->next = last->next;
	last->next = t;
	last = t;
	display(head);
}

void insert(struct Node *h,int n,int v){
	struct Node *t,*p;
	t = new struct Node();
	t->data=v;
	p=head;
	if (n==0){
		if (head==NULL){
			head=t;
			head->next=head;
		}else{
			t->next = last->next;
			last->next = t;
			head = t;
		}
		
	}else{
		for (int i = 0; i < n-1; i++){
			p=p->next;
		}
		t->next = p->next;
		p->next=t;
	}
	display(head);	
}

void deletel(struct Node *p,int n){
	struct Node *q;
	int x;
	p=head;
	if (n==1){
		head=p->next;
		last->next = head;
	}else{
		for (int i = 0; i < n-1; i++){
			q=p;
			p=p->next;
		}
		q->next = p->next;
		p->next = NULL;
	}
	display(head);	
}

int main(int argc, char const *argv[]){
	
	int A[]={2,5,7,9,11};

	create(A,5);

	display(head);
	cout<<"========================"<<endl;
	// insert(head,20);
	// cout<<"========================"<<endl;
	// insert(head,23);
	// cout<<"========================"<<endl;
	// insert(head,10);
	// cout<<"========================"<<endl;
	// insert(head,90);
	// cout<<"========================"<<endl;
	// insert(head,50);
	// cout<<"========================"<<endl;
	// insert(head,0,3);
	// cout<<"========================"<<endl;
	cout<<"==============delete=========="<<endl;
	deletel(head,2);
	cout<<"========================"<<endl;
	
	return 0;
}