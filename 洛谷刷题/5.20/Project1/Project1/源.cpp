#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cin >> str;
	char a='0', b = '0', c = '0';
	for (int i = 0;; i++)
	{
		string str1 = str.substr(0+5*i,5);
		if ((0 + 5 * i) >= str.size())break;
		if (str1.find("a:=")!= string::npos)
		{		
			if (str1[str1.find("a:=") + 3] != 'a')
			a = str1[str1.find("a:=") + 3];
			if (str1[str1.find("a:=") + 3] == 'a');
			else if (str1[str1.find("a:=") + 3] == 'b')	a = b;
			else if (str1[str1.find("a:=") + 3] == 'c')	a = c;

			//cout << str[str.rfind("a:=") + 3] << " ";
		}
		if (str1.find("b:=") != string::npos)
		{  
			if (str1[str1.find("b:=") + 3] != 'b')
			b = str1[str1.find("b:=") + 3];
			if (str1[str1.find("b:=") + 3] == 'b');
			else if (str1[str1.find("b:=") + 3] == 'a')	b = a;
			else if (str1[str1.find("b:=") + 3] == 'c')	b = c;
			
		/*	cout << str[str.rfind("b:=") + 3] << " ";*/
		}
		if (str1.find("c:=") != string::npos)
		{	
			if( str1[str1.find("c:=") + 3]!='c')
				c= str1[str1.find("c:=") + 3];
			if (str1[str1.find("c:=") + 3] == 'c');
			else if (str1[str1.find("c:=") + 3] == 'b')	c = b;
			else if (str1[str1.find("c:=") + 3] == 'a')	c = a;			
			/*cout << str[str.rfind("c:=") + 3] << " ";*/			
		}
	}
	if (a > 57)a = '0';
	if (b >57)b = '0';
	if (c >57)c = '0';

	cout << a << " ";
	cout << b << " ";
	cout << c << " ";
	return 0;
}