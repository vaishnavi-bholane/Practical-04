
#include<iostream>
using namespace std;

namespace first
{
	int add(int a, int b)
	{
		return a+b;
	}
}
namespace second
{
	float add(float a, float b)
	{
		return a+b;
	}
}

int main()
{
	int a = first :: add(2,7);
	float b = second :: add(6.7, 23.4);
	cout<< "Sum = " <<a<<" "<< b<<endl;
	return 0;

}
