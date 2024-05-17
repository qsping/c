#include <bits\stdc++.h>
using namespace std;

//class clocktime {
//public:
//	int hour;
//	int minute;
//	clocktime()
//	{
//		cin >> hour;
//		cin >> minute;
//	}
//	static void subtime(int* arr, clocktime time1, clocktime time2)
//	{
//		arr[0] = ((time2.hour * 60 + time2.minute) - (time1.hour * 60 + time1.minute)) / 60;
//		arr[1] = ((time2.hour * 60 + time2.minute) - (time1.hour * 60 + time1.minute)) % 60;
//	}
//};
//int main() {
//	int time[2];
//	clocktime time1;
//	clocktime time2;
//	clocktime::subtime(time, time1, time2);
//	cout << time[0] <<" "<< time[1] << endl;
//	return 0;
//}
//输入两个正整数 x, n，表示从周 x 算起，经过 n 天。
//int main() {
//	int x;
//	int n;
//	int kilometre=0;
//	cin >> x;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		kilometre += 250;
//		if ((x==7)||(x==6))
//		{
//			kilometre -= 250;
//		}
//		x++;
//		if (x == 8)
//		{
//			x = 1;
//		}
//	}
//	cout << kilometre << endl;
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	cin >> a;
//	cin >> b;
//	cout << (long long)(a * b) << endl;
//	return 0;
//}


//class ABC {
//public:
//	static int n;
//};
//int ABC::n = 0;
//int main() {
//	string s1("abcde");
//	ABC n ;
//	n.n = 10;
//	cout << ABC::n<< endl;
//	return 0;
// }


int main() {
	string s1("hello");
	string s2("world");
	//s1.swap(s2);
	//cout << s1 << endl;
	//int pos = s1.find('o');
	int pos = s1.rfind('a');

	cout << (pos = string::npos ? 1 : 0)<< endl;
	return 0;

}