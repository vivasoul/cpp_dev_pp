#include <iostream>

int main(void)
{
	int num;
	int sum = 0;
	
	for(int i=1; i<6; i++)
	{
		std::cout<<i<<"��° ���� �Է�: ";
		std::cin>>num;
		sum+=num;			
	}
	std::cout<<"�հ�: "<<sum<<std::endl; 
	return 0;
}
