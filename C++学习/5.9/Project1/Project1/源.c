#include <stdio.h>  
#include <string.h> // ����string.hͷ�ļ���ʹ��strcpy����  

typedef struct student {
    char name[50]; // �������ֳ��Ȳ��ᳬ��49���ַ�  
} stu;

int main() {
    stu A;
  /*  strcpy(A.name, "dog");*/ // ʹ��strcpy�����������ַ���  
    scanf("%s", A.name);
    printf("%s", A.name);
    return 0;
}