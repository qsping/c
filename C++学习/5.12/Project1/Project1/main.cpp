#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>

using namespace std;
class Student {
public:
    Student(const char* name1)
    {
        if (name1 != nullptr)
        {
            int len = strlen(name1);
            name = (char*)malloc(len + 1);
            if (name)
            {
                strcpy(name, name1);
            }
            else
            {
                cerr << "Failed to allocate memory for name." << endl;
            }
            cout << name << endl;
        }
    }
    ~Student()
    {
        if(name)
            free(name);
    }
private:
	char* name;
	int age;
};
typedef Student Stu;
int main() {
    char a[32] = "\0";
    scanf("%s", a);
	Stu A (a);
	return 0;
}