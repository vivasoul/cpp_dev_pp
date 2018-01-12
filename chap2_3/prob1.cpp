#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main(void)
{
	Point *_p1 = new Point;	
	_p1->xpos = 2;
	_p1->ypos = 3;
	
	Point *_p2 = new Point;		
	_p2->xpos = 4;
	_p2->ypos = 5;	
			
	Point &_p = PntAdder(*_p1, *_p2);
	
	/*
		Point _p = PntAdder(*_p1, *_p2);
		�̶� p�� delete(�Ҹ���)�� �޸� ������ �õ��ϸ� ������ �߻��Ѵ�.		
		
		_p�� ��������, ��� ȣ�⽺���� ������ ����� ����̴�. 
		����, ���������� _p�� ���Կ����� �߻��Ҷ�, �� ���� ���� ������ ���ԵǴ� ���� �ƴ�
		�� ��ü�� ����Ǳ� ������, ��������� _p != PntAdder(*_p1, *_p2) �� �ȴ�.(�� ���� �����͸� ����.) 
		
		Ư��, ȣ�⽺�ÿ����� �����ϴ� ���������� Ư����,
		�ش� ������ delete Ű����� �޸𸮼Ҹ� �õ��� �������� �Ҵ�� �޸𸮸� �Ҹ��� ��Ű���� �õ������� �������� ����Ų��. 
		 
		�̴� _p�� ���������� ���������μ� �ذ��� �� �ִ�.
		_p��� &_p�� ���� ��, �Ȱ���  PntAdder(*_p1, *_p2)�� ���Կ����� ����Ǹ�, �� ��ü�� ����Ǿ��� ���� ���ʹ� �޸� 
		���� ����Ű�� ������ ��ȯ�ް� �ȴ�.		
		���������� �����ϸ� _p��ü�� ���������̳� ���� ����Ű�� ����  PntAdder���� ��ȯ�ϴ� �������� �������̱� �����̴�.
		
		1.
		_p = PntAdder(*_p1, *_p2)
		
		STACK									HEAP
		_p					 					
		PntAdder(*_p1, *_p2) <---(copy)-----	PntAdder(*_p1, *_p2)  
		
		2. 
		&_p = PntAdder(*_p1, *_p2)
		
		STACK									HEAP
		_p					<---(reference)--	PntAdder(*_p1, *_p2)  		
	*/	
	
	cout<<"xpos = "<<_p.xpos<<endl;
	cout<<"ypos = "<<_p.ypos<<endl;
	cout<<"ref of p "<<&_p<<endl;

	delete _p1;
	delete _p2;
	delete &_p;
	
	return 0;
}

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *p = new Point;
	
	p->xpos = p1.xpos + p2.xpos;
	p->ypos = p1.ypos + p2.ypos;
	
	return *p;
}
