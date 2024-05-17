#include <bits/stdc++.h>
using namespace std;
//int main() {
//	int* p = new int[4];
//	for (int i = 0; i < 3; i++)
//	{
//		p[i] = i;
//	}
//	delete p;
//	cout << p[2] << endl;
//	return 0;
//}
//class dog {
//public:
//	static void show_cnt(void)
//	{cout << _cnt << endl;}
//	dog() {
//		_cnt++;
//	}
//private:
//	static int _cnt;
//};
//int dog::_cnt = 0;
//int main() {
//	dog dogs[4];
//	dog::show_cnt();
//	return 0;
//}
int main() {
	int n = 0;
	cin >> n;
	int count=0;
	int countMax = 0;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		while((p[i+1]-p[i])==1)
		{
			count++;
			i++;
		}
		if (count >= countMax)
		{
			countMax = count;
			count = 0;
		}
	}
	delete[n]p;
	cout << countMax+1 << endl;
	return 0;
}
