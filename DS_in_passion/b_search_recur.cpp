#include <iostream>

using namespace std;
/* DECLARE*/
int BSearchRecur(int ar[], int first, int last, int target);

/* INITIALIZE */

int main(int argc, char* argv[])
{
	int arr[5] = {1,3,5,7,9};
	
	cout<<"The index of 4 is "<<BSearchRecur(arr,0,4,4)<<endl;
	cout<<"The index of 3 is "<<BSearchRecur(arr,0,4,3)<<endl;
	cout<<"The index of 10 is "<<BSearchRecur(arr,0,4,10)<<endl;
	cout<<"The index of 5 is "<<BSearchRecur(arr,0,4,5)<<endl;
		
	return 0;	
}

int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid = (first+last)/2;
	int val = 0;
	int rlt = 0;
	
	if(first > last)
	{
		rlt = -1;
	}
	else
	{
		val = ar[mid];
		
		if(val == target)
		{
			rlt = mid;
		}
		else
		{
			if(val > target)	rlt = BSearchRecur(ar, first,mid-1,target);
			else				rlt = BSearchRecur(ar, mid+1,last,target);
		}
	}
	
	return rlt;	
}

