#include<iostream>
using namespace std;
int main()
{
	int a = 'a';
	int& p = a;
	float x = 0;
	double y = 0;
	cout << sizeof(x) << endl;
	cout << sizeof(y) << endl;
	return 0;
}