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
		cout<<"1. 계좌계설"<<endl;
		cout<<"2. 입금"<<endl;
		cout<<"3. 출금"<<endl;
		cout<<"4. 계좌확인"<<endl;
		cout<<"5. 종료"<<endl;
		cout<<"메뉴를 입력해주세요.> ";
		cin>>menu;
		
		switch(menu){
			case 1:
			case 2:
			case 3:
			case 4:
				break;
			case 5:
				cout<<"프로그램을 종료합니다."<<endl;
		}	
		if(menu == 5) break;
	}
	
	
	
	/*
	1.계좌계설
	2.입금
	3.출금
	4.계좌확인 
	5.종료
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
