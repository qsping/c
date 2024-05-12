#include <stdio.h>  
#include <string.h> // 包含string.h头文件以使用strcpy函数  

typedef struct student {
    char name[50]; // 假设名字长度不会超过49个字符  
} stu;

int main() {
    stu A;
  /*  strcpy(A.name, "dog");*/ // 使用strcpy函数来复制字符串  
    scanf("%s", A.name);
    printf("%s", A.name);
    return 0;
}