#include <iostream>

int main(void)
{
	char name[20];
	char tel[20];
	
	std::cout<<"�̸�: ";
	std::cin>>name;
	std::cout<<"��ȭ��ȣ: ";
	std::cin>>tel;
	
	std::cout<<"�Է��Ͻ� ������ ������ �����ϴ�."<<std::endl;
	std::cout<<"�̸�: "<<name<<", ��ȭ��ȣ: "<<tel<<std::endl;
	
	return 0;
}
