#include <iostream>

int main(void)
{
	int num;
	
	std::cout<<"������ ����� ���� ���ڸ� �Է����ֽʽÿ�.: ";
	std::cin>>num; 
	for(int i=1;i<10;i++)
		std::cout<<num<<" X "<<i<<" = "<<num*i<<std::endl;
	return 0;
}
