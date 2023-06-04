/*Bạn hãy viết chương trình nhập từ bàn phím xâu str
và hiển thị độ dài của xâu này ra màn hình.
Ví dụ nếu bạn nhập:
Codelearn
Thì màn hình hiển thị ra:
9
Giải thích: xâu "Codelearn" có 9 ký tự*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    printf("%d", strlen(str));
    return 0;
}