#include <iostream>
using namespace std;

class Node{
public:
	Node *lchild;
	int data;
	Node *rchild;
};

class Queue{
private:
	int front,rear,size;
	Node **Q;
public:
	Queue(){
		front = rear = -1;
		size = 10;
		Q = new Node*[size];
	}
	Queue(int size){
		front=rear=-1;
		this->size=size;;
		Q=new Node*[size];
	}
	void enqueue(Node* x);
	Node* dequeue();
	int isEmpty(){return front!=rear;}
	void display();
};

void Queue::enqueue(Node* x){
	if (rear==size-1){
		cout<<"queue is full"<<endl;
	}else{
		rear++;
		Q[rear]=x;
	}	
}

Node* Queue::dequeue(){
	Node* x = NULL;
	if (front==rear){
		cout<<"Queue is empty"<<endl;
	}else{
		x=Q[front+1];
		front++;
	}
	return x;	
}

void Queue::display(){
	for (int i = front+1; i <=rear; i++){
		cout<<Q[i]<<endl;
	}
	cout<<endl;
}

// ================================================================

class Tree{
public:
	Node *root;
	Tree(){
		root=NULL;
	}
	void CreateTree();
	void preorder(Node *p);
	void postorder(Node *p);
	void inorder(Node *p);
	void levelorder(Node *p);
	int height(Node *p);
};

void Tree::CreateTree(){
	Node *p,*t;
	int x;
	Queue q(100);

	cout<<"enter root value"<<endl;
	cin >> x;
	root = new Node;
	root->data = x;
	root->lchild=root->rchild=NULL;
	q.enqueue(root);

	while (q.isEmpty()){
		p = q.dequeue();
		cout<<"enter left child value"<<endl;
		cin >> x;

		if (x!=-1){
			t = new Node;
			t->data = x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			q.enqueue(t);
		}
		cout<<"enter right child value"<<endl;
		cin >> x;
		if (x!=-1){
			t = new Node;
			t->data = x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			q.enqueue(t);
		}
	}
}

void Tree::preorder(Node *p){
	if (p){
		cout<<p->data<<endl;
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void Tree::inorder(Node *p){
	if (p){
		inorder(p->lchild);
		cout<<p->data<<endl;
		inorder(p->rchild);
	}
}

void Tree::postorder(Node *p){
	if (p){
		postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<endl;
	}
}

void Tree::levelorder(Node *root){
	Queue q(100);

	cout<<root->data<<endl;
	q.enqueue(root);
	while (!q.isEmpty()){
		root = q.dequeue();
		if (root->lchild){
			cout<<root->lchild->data;
			q.enqueue(root->lchild);
		}
		if (root->rchild){
			cout<<root->rchild->data;
			q.enqueue(root->rchild);
		}
	}
}

int Tree::height(Node *root){
	int x=0,y=0;
	if (root==0){
		return 0;
	}
	x=height(root->lchild);
	y=height(root->rchild);
	if (x>y){
		return x+1;
	}else{
		return y+1;
	}
}

int main(int argc, char const *argv[]){
	Tree t;
	t.CreateTree();
	t.preorder(t.root);
	// t.inorder(t.root);

	return 0;
}