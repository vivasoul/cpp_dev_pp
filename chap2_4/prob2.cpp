#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	cout<<"use rand"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<rand()%100<<endl;		
	}
	
	cout<<"use srand"<<endl;
	srand(time(NULL));
	for(int i=0; i<5; i++)
	{
		cout<<rand()%100<<endl;		
	}
	return 0;
}
