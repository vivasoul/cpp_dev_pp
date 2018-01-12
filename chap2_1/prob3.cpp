#include <iostream>


void SwapPointer(int *(&ref1), int *(&ref2));

int main(void)
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;
	
	std::cout<<*ptr1<<" "<<*ptr2<<std::endl;
	
	SwapPointer(ptr1, ptr2);
	
	std::cout<<*ptr1<<" "<<*ptr2<<std::endl;
	
	return 0;
}

void SwapPointer(int *(&ref1), int *(&ref2))
{
	int *temp = NULL;
	
	temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}
