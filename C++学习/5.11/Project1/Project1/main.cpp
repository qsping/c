#include<iostream>
#include<string>
#include<stdio.h>
#include"Box.h"
using namespace std;
// class teacher {
//public:
//	int age;
//	void set_name(const char*name) {
//		strcpy(_name, name);
//	}
//	char* get_name() {
//		return _name;
//	}
//private:
//	char _name[20];
//};
// 
// int main() {
//	 char name[20] = "\0";
//	scanf("%19s",name);
//	char& Pname = name[3];
//	teacher tea;
//	teacher* Ptea=&tea;
//	Ptea->age = 20;
//	Ptea->set_name(name);
//	cout << Ptea->get_name() << endl;
//	cout << Pname<< endl;
//	return 0;
//}
//在类的外部实现成员函数
//int main() {
//	Box A;
//	A.set_l(10);
//	A.set_w(10);
//	A.set_h(10);
//	cout <<A.set_l(10) << endl;
//	cout << A.get_v() << endl;
//	return 0;
//}
int main() {
	Box box(10,20,20);
	cout << box.get_v() << endl;
	return 0;
}