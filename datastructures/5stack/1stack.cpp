#include<iostream>
using namespace std;

struct stack{
	int size,top,*s;
};

void create(struct stack *st){
	cout<<"enter size"<<endl;
	cin>>st->size;
	st->top=-1;
	st->s = new int[st->size];
}

void display(struct stack *st){
	for (int i = st->top; i >=0; i--){
		cout<<st->s[i]<<" ";
	}
	cout<<endl;
}

void push(struct stack *st,int n){
	if (st->top == st->size-1){
		cout<<"stack is full"<<endl;
	}else{
		st->top++;
		st->s[st->top]=n;
	}
	display(st);
}

void pop(struct stack *st){
	if (st->top == -1){
		cout<<"stack is empty"<<endl;
	}else{
		st->s[st->top]=-1;
		st->top--;
	}
	display(st);
}

void peek(struct stack *st,int n){
	int x = -1;
	if (st->top-n<0){
		cout<<"invalid"<<endl;
	}else{
		x=st->s[st->top-n+1];
		cout<<x<<endl;
	}
}

int main(int argc, char const *argv[]){
	struct stack st;
	create(&st);

	push(&st,10);
	cout<<"=========pop============="<<endl;
	pop(&st);

	peek(&st,10);

	return 0;
}