#include <iostream>

using namespace std;

void increase(int &ref);
void inverse(int &ref);

int main(void)
{
	int a = 3;
	
	increase(a);	
	cout<<a<<endl;		
	increase(a);
	cout<<a<<endl;		
	increase(a);
	cout<<a<<endl;		
	inverse(a);
	cout<<a<<endl;			
	inverse(a);
	cout<<a<<endl;		
		
	return 0;	
}

void increase(int &ref)
{
	ref++;	
}

void inverse(int &ref)
{
	ref*=-1;
}

