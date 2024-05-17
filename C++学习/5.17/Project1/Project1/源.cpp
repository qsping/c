#include<bits/stdc++.h>
using namespace std;

//class Person {
//public:
//	void print()
//	{
//		cout << "name is:" << _name << endl;
//		cout << "age is:" << _age << endl;
//	}
//protected:
//	string _name;
//	int _age;
//};
//class stu : protected Person {
//public:
//	void printf()
//	{
//		print();
//	}
//	void set_name(const char*p)
//	{
//		_name = p;
//	}
//protected:
//	string _stuid;//学号
//};
//class teac :protected Person {
//protected:
//	string _teacid;//工号
//};
//int main() {
//	stu s;
//	teac t;
//	s.set_name("zhangsan");
//	s.printf();
//	return 0;
//}

//class father {
//public:
//	int a;
//	void set()
//	{
//		a = 1;
//		/*b = 2;*/
//		//c = 3;
//		cout << a << endl;
//		/*cout << b << endl;*/
//	}
//protected:
//	int b;
//private:
//	int c;
//};
//class son1:public father {
//public:
//	son1()	{}
//	son1(int x,int y)
//	{
//		a = x;
//		b = y;
//	}
//	//void set()
//	//{
//	//	a = 1;
//	//	b = 2;
//	//	//c = 3;
//	//	cout << a << endl;
//	//	cout << b << endl;
//	//}
////protected:
////	int b;
////private:
////	int c;
//};
//class son2 :protected father {
//public:
//	//void set()
//	//{
//	//	a = 1;
//	//	b = 2;
//	//	//c = 3;
//	//	cout << a << endl;
//	//	cout << b << endl;
//	//}
//};//但是在类的外部无法访问a和b
//class son3 :private father {
//public:
//	//void set()
//	//{
//	//	a = 1;
//	//	b = 2;
//	//	/*c = 3;*/
//	//	cout << a << endl;
//	//	cout << b << endl;
//	//}
//};
//int main() {
//	son1 s1;
//	s1.set();
//
//	//son2 s2;
//	//s2.set();//无法在外部调用protect void set（）函数
//
//	//son3 s3;
//	//s3.set();无法在外部调用private void set（）函数
//	
//	return 0;
//}

class A {
public:
	 A(int a)
	{	 this->_a = a;	
	 cout << "a:" << a << endl;
	}
private:
	int _a;
};
class B :public A{
public :
	B(int n):A(n)
	{ }
};
int main() {
	B a(8);