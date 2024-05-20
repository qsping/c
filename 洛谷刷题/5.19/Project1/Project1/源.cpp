#include <iostream>
#include <string>  
using namespace std;

//int main() {
//	int n;
//	cin >> n;
//	int* p = new int[n];
//	int* po = new int[n];
//
//	for (int i=0; i < n; i++)
//	{
//		cin >> p[i];
//	}
//	for (int i=0;i<n;i++)
//	{
//		int count = 0;
//		for (int j=0; j < i; j++)
//		{
//			if (p[i] >= p[j])count++;
//		}
//		po[i] = count;
//	}
//	for (int i = 0; i < n; i++)
//		cout << po[i] << " ";
//	delete[] p;
//	delete[] po;
//	return 0;
//}

int main() {
	char a = 'a';
	int count = 0;
	string S;
	getline(cin, S);
	for (int i = 0; i < S.size(); i++)
	{		
		if (S[i] == 'z') { count += 4; }
		if (S[i] == 's') { count+=4; }
		if (S[i] == 't') { count+=1; }
		if (S[i] == 'u') { count+=2; }
		if (S[i] == 'v') { count+=3; }
		if (S[i] == 'w') { count+=1; }
		if (S[i] == 'x') { count+=2; }
		if (S[i] == 'y') { count+=3; }
		if (S[i] == ' ') { count += 1; }

		for (int j = 0; j < 18; j++)
		{
			if (S[i] == a + j) { count += ((S[i] - 97) % 3)+1;break; }
		}
	}
	cout << count << endl;
	return 0;
}