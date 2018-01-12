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
		이때 p를 delete(소멸자)로 메모리 해제를 시도하면 오류가 발생한다.		
		
		_p는 지역변수, 고로 호출스택이 끝나면 사라질 운명이다. 
		또한, 지역변수인 _p에 대입연산이 발생할때, 그 값에 대한 참조가 대입되는 것이 아닌
		값 자체가 복사되기 때문에, 결과적으로 _p != PntAdder(*_p1, *_p2) 가 된다.(속 안의 데이터만 같다.) 
		
		특히, 호출스택영역에 존재하는 지역변수의 특성상,
		해당 변수를 delete 키워드로 메모리소멸 시도시 힙영역에 할당된 메모리를 소멸을 시키려는 시도때문에 오동작을 일으킨다. 
		 
		이는 _p를 참조변수로 선언함으로서 해결할 수 있다.
		_p대신 &_p로 선언 후, 똑같이  PntAdder(*_p1, *_p2)의 대입연산이 진행되면, 값 자체가 복사되었던 위의 경우와는 달리 
		값을 가리키는 변수를 반환받게 된다.		
		참조변수로 선언하면 _p자체는 지역변수이나 실제 가리키는 곳은  PntAdder에서 반환하는 힙영역의 데이터이기 때문이다.
		
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
