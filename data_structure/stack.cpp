#include <iostream>
#include <stdlib.h>
using namespace std;
/*
	queue 					+
	stack					+	
	deck					+++
	linked-list				++
	double linkend-list		+++
	
	binary tree				++
	graph					++++
*/

/*
	last IN first OUT
	
	IN				OUT
	@				@
		->		->
			@
			@
			@
			@
	
*/

typedef struct stack_peice{
	int data;
	stack_peice* prev;
} NODE;

typedef struct stack_body{
	NODE* top;
	NODE* bottom; 
} STACK;

NODE* createNode(int a);
void push(NODE* n);
NODE* pop(void);
void executeStack(NODE*);

/*---------------------END OF HEADER-----------------------------*/


STACK s1;

int main(void)
{	
	push(createNode(3));
	push(createNode(4));
	push(createNode(5));
	push(createNode(6));
	push(createNode(7));

	executeStack(pop());
	executeStack(pop());
	executeStack(pop());
	executeStack(pop());	
	executeStack(pop());
	
	if(s1.top == NULL) 	 cout<<"top IS NULL"<<endl; 
	else				 cout<<"top IS NOT NULL"<<endl; 
	
	if(s1.bottom == NULL)cout<<"bottom IS NULL"<<endl; 
	else				 cout<<"bottom IS NOT NULL"<<endl;	
	
	return 0;
}

NODE* createNode(int a)
{
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = a;
	
	return new_node;
}
void push(NODE* n)
{
	if(s1.top == NULL){
		s1.top = n;		
		s1.bottom = n;
	}else{
		/*
			count	s1.top == s1.bottom		order
			1		true					s1.top->prev = NULL, n0 = s1.top = s1.bottom
			2		false					s1.top->prev = s1.bottom = n0;
			3		false					s1.top->prev->prev = s1.bottom = n0;
			4		false					s1.top->prev->prev->prev = s1.bottom = n0;
			5		false					s1.top->prev->prev->prev->prev = s1.bottom = n0;
			6		false					s1.top->prev->prev->prev->prev->prev = s1.bottom = n0;
		*/
		n->prev = s1.top;
		s1.top = n;
	}
	cout<<n->data<<" HAS BEEN PUSHED"<<endl;
}
NODE* pop(void)
{		
	NODE* de_node;
	if(s1.top == NULL){
		de_node = NULL;	
		cout<<"NO STACK"<<endl;
	}else{
		de_node = s1.top;
		if(s1.top == s1.bottom)
		{
			cout<<"JUST ONE MEMBER LEFT"<<endl;			
			s1.top = s1.bottom = NULL;
		}
		else
		{
			cout<<"MORE THAN TWO MEMBERS LEFT"<<endl;			
			s1.top = s1.top->prev;
		}
		de_node->prev = NULL;
	}	
	cout<<de_node->data<<" HAS BEEN POPED"<<endl;
	return de_node;
}

void executeStack(NODE* n)
{
	//cout<<n->data<<endl;
	if(n != NULL) free(n);
}

