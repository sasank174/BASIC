#include<iostream>
using namespace std;

struct Queue{
	int size,front,rear,*Q;
};

void create(struct Queue *q){
	cin>>q->size;
	q->Q = new int[q->size-1];
	q->front=-1;
	q->rear=-1;
}

void display(struct Queue *q){
	for (int i = 0; i < q->rear+1; i++){
		cout<<q->Q[i]<<" ";
	}
	cout<<endl;
	
}


void enqueue(struct Queue *q,int n){
	if (q->rear == q->size-1){
		cout<<"queue is full"<<endl;
	}else{
		q->rear++;
		q->Q[q->rear]=n;
	}
	display(q);
}

void dequeue(struct Queue *q){
	int x=-1;
	if (q->rear == q->front){
		cout<<"queue is empty"<<endl;
	}else{
		q->front++;
		x=q->Q[q->front];
	}
	cout<<x<<endl;
}

int main(int argc, char const *argv[]){
	struct Queue que;
	create(&que);
	
	enqueue(&que,10);
	cout<<"=========================="<<endl;
	dequeue(&que);
	return 0;
}