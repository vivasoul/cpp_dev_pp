#include <iostream>

double base_salary = 50.0;
double incentive_rate = 0.12;
int total_sales = 0;

void startMenu(void);
void getTotalSalary(void);

void getTotalSalary(int _sales)
{
	std::cout<<"�̴��� �� �޿��� "<< base_salary+_sales*incentive_rate<<" �ʸ����̴�."<<std::endl;
}

void startMenu(void)
{
	std::cout<<"�� ���� �� �Ǹűݾ�(-1 to end): ";
	std::cin>>total_sales;
}

int main(void)
{
	while(1){
		startMenu();
		if(total_sales == -1)	break;
		else					getTotalSalary(total_sales);		
	}
	
	return 0;
}
