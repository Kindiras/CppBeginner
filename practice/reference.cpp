#include <iostream>

using namespace std;
int array_reference(int& a);
int main()
{
	int b = 0;
	array_reference(b);
	cout<<b<<endl;
}

int array_reference(int& a)
{
	a = 5;
	return 0;
}