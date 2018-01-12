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
	@ next -> @ next -> @ next .....
*/

typedef struct list_peice{
	int data;
	list_peice* next;
} NODE;

typedef struct list_body{
	NODE* first;
	int length;
} LIST;

LIST list;

NODE* createNode(int a);

void add(NODE* n);
void insert(NODE* n, int i);
void remove(int i);
void change(NODE* n, int i);
NODE* get(int i);

/*---------------------END OF HEADER-----------------------------*/

int main(void)
{
	NODE* n=NULL;
	int c = 0;

	add(createNode(1));
	add(createNode(2));
	add(createNode(3));
	add(createNode(4));
	add(createNode(5));
	
	insert(createNode(6),1);
	insert(createNode(7),1);	
	insert(createNode(8),5);
	
	remove(0);
	remove(4);
	
	n = list.first;
	
	while(n!=NULL)
	{
		cout<<n->data<<" :data printed."<<endl;
		
		n=n->next;
		c++;
		if(c > 20) break;
	}
	
	return 0;
}

NODE* createNode(int a)
{
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = a;
	new_node->next = NULL;
	/* if a pointer variable is not initialized manually, it initialized to a thrash value.*/	
	//if(new_node->next == NULL)	cout<<" new_node next IS NULL"<<endl;
	//else							cout<<" new_node next IS NOT NULL"<<endl;
	return new_node;
}

void add(NODE* n)
{
	insert(n, list.length);
}

void insert(NODE* n, int i)
{
	NODE* left=NULL;
	//At least, i >= 0
	if(i == 0)
	{
		if(list.first==NULL)	
		{
			list.first = n;
		}
		else
		{			
			n->next=list.first;
			list.first=n;
		}
		++list.length;
	}
	else if(i<list.length && i>0)
	{

		left=get(i-1);
		n->next=left->next;
		left->next=n;
		
		++list.length;
	}
	else if(i==list.length)
	{
		left=get(i-1);
		left->next=n;
		
		++list.length;
	}
	else
	{
		cout<<"Out of index ERR"<<"input index : "<<i<<" | length : "<<list.length<<endl;
	}
}

void remove(int i)
{
	NODE* tmp=NULL, *tmp2=NULL;
	//At least, i >= 0		
	if(i == 0)
	{
		if(list.first->next==NULL)	
		{
			//list.first = NULL;
			free(list.first);
		}
		else
		{			
			tmp=list.first;
			list.first=tmp->next;
			tmp->next=NULL;
			free(tmp);
		}
		--list.length;
	}
	else if(i<list.length && i>0)
	{

		tmp=get(i-1);
		tmp2=tmp->next;
		tmp->next=tmp2->next;
		tmp2->next=NULL;
		free(tmp2);		
		--list.length;
	}
	else
	{
		cout<<"Out of index ERR"<<"input index : "<<i<<" | length : "<<list.length<<endl;
	}	
}

void change(NODE* n, int i)
{
	
}

NODE* get(int i)
{
	NODE* n = NULL;
	//At least, i = {0,}
	if(i<list.length && i>-1)
	{		
		n = list.first;
		
		while(i--)
		{
			n = n->next;			
		}
	}
	else
	{
		cout<<"Out of index ERR >> input index : "<<i<<" | length : "<<list.length<<endl;
	}	
	return n;
}

