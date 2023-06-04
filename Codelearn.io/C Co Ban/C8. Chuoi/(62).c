/*Bạn hãy viết chương trình nhập vào từ bàn phím xâu str
và hiển thị xâu này ra màn hình.
Ví dụ nếu bạn nhập:
Codelearn.io
Thì màn hình sẽ hiển thị ra:
Codelearn.io*/

#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    printf("%s", str);
    return 0;
}