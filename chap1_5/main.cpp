#include <iostream>
#include <cstdlib>
#define STR_LEN 30
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

typedef struct{
	char name[STR_LEN];
	char tel[STR_LEN];
	long amt;
} ACCOUNT;

ACCOUNT* accounts;
void extendAccounts(void);
void makeAccount(void);
void deposit(long _amt);
void withdraw(long _amt);
void showAccount(void);

int main(void) {
	int menu;
	
	accounts = (ACCOUNT*)malloc(10*sizeof(ACCOUNT));
	
	while(1)
	{
		cout<<"1. ���°輳"<<endl;
		cout<<"2. �Ա�"<<endl;
		cout<<"3. ���"<<endl;
		cout<<"4. ����Ȯ��"<<endl;
		cout<<"5. ����"<<endl;
		cout<<"�޴��� �Է����ּ���.> ";
		cin>>menu;
		
		switch(menu){
			case 1:
			case 2:
			case 3:
			case 4:
				break;
			case 5:
				cout<<"���α׷��� �����մϴ�."<<endl;
		}	
		if(menu == 5) break;
	}
	
	
	
	/*
	1.���°輳
	2.�Ա�
	3.���
	4.����Ȯ�� 
	5.����
	*/
	free(accounts);
	return 0;
}

void extendAccounts(void)
{
	
}
void makeAccount(void)
{
	
}
void deposit(long _amt)
{
	
}
void withdraw(long _amt)
{
	
}
void showAccount(void)
{
	
}
