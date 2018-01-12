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
	first IN first OUT
	
	IN		BODY	OUT
	
	@-> 	@@@@@@	->@
*/

typedef struct queue_peice{
	int data;
	queue_peice* next;
} NODE;

typedef struct queue_body{
	NODE* front;
	NODE* end; 
} QUEUE;

NODE* createNode(int a);
void enQueue(NODE* n);
NODE* deQueue(void);
void executeQueue(NODE*);

/*---------------------END OF HEADER-----------------------------*/


QUEUE q1;

int main(void)
{
	enQueue(createNode(3));
	enQueue(createNode(4));
	enQueue(createNode(5));
	enQueue(createNode(6));
	enQueue(createNode(7));

	executeQueue(deQueue());
	executeQueue(deQueue());
	executeQueue(deQueue());
	executeQueue(deQueue());	
	executeQueue(deQueue());
	
	if(q1.front == NULL) cout<<"front IS NULL"<<endl; 
	else				 cout<<"front IS NOT NULL"<<endl; 
	
	if(q1.end == NULL)	 cout<<"end IS NULL"<<endl; 
	else				 cout<<"end IS NOT NULL"<<endl;	
	
	return 0;
}


NODE* createNode(int a)
{
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = a;
	
	return new_node;
}
void enQueue(NODE* n)
{
	if(q1.front == NULL){
		q1.front = n;		
		q1.end = n;
	}else{
		/*
			count	q1.front == q1.end		order
			1		true					q1.front->next = NULL, q1.front = q1.end = n0;
			2		false					q1.front->next = n1 = q1.end
			3		false					q1.front->next->next = n1->next = n2 = q1.end
			4		false					q1.front->next->next->next = n2->next = n3 = q1.end
			5		false					q1.front->next->next->next->next = n3->next = n4 = q1.end
			6		false					q1.front->next->next->next->next->next = n4->next = n5 = q1.end
		*/
		q1.end->next = n;
		q1.end = n;
	}
	cout<<n->data<<" HAS BEEN ENQUEUED"<<endl;
}
NODE* deQueue(void)
{		
	NODE* de_node;
	if(q1.front == NULL){
		de_node = NULL;	
		cout<<"NO QUEUE"<<endl;
	}else{
		de_node = q1.front;
		if(q1.front == q1.end)
		{
			cout<<"JUST ONE MEMBER LEFT"<<endl;			
			q1.front = q1.end = NULL;
		}
		else
		{
			cout<<"MORE THAN TWO MEMBERS LEFT"<<endl;			
			q1.front = q1.front->next;
		}
		de_node->next = NULL;
	}	
	cout<<de_node->data<<" HAS BEEN DEQUEUED"<<endl;
	return de_node;
}

void executeQueue(NODE* n)
{
	//cout<<n->data<<endl;
	if(n != NULL) free(n);
}

