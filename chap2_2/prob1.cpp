#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	const int num = 12;
	const int *ptr = &num;
	const int *(&ref) = ptr;
	
	cout<<*ptr<<endl;
	cout<<*ref<<endl;
	
	return 0;
}




