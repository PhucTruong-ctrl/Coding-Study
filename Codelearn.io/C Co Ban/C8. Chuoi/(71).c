/*Viết chương trình nhập vào tên của 2 người,
bạn hãy kiểm tra xem tên 2 người này có giống nhau không. Nếu có thì hiển thị ra:
two people having the same name
Ngược lại nếu 2 người này không có tên giống nhau thì hiển thị ra:
two people don't have the same name*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);
    if (strcmp(a, b) == 0) // strcmp trả về 0 nếu 2 xâu giống nhau và ngược lại.
    {
        printf("two people having the same name");
    }
    else
    {
        printf("two people don't have the same name");
    }
    return 0;
}