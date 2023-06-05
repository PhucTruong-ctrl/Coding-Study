/*Cho xâu str được nhập từ bàn phím, bạn hãy viết hàm hiển thị ra màn hình thông tin sau:

Hello {P}
Với {P} là giá trị của xâu str.

Ví dụ nếu bạn nhập:

Codelearn
Thì màn hình sẽ hiển thị ra:

Hello Codelearn*/
#include <stdio.h>

void show(char name[100])
{
    printf("Hello %s", name);
}

int main()
{
    char name[100];
    scanf("%s", name);
    show(name);
    return 0;
}