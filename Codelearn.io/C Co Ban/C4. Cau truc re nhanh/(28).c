/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n và hiển thị ra màn hình:
Nếu n là số nguyên dương thì hiển thị ra:
n is a positive number
Nếu n là số nguyên âm thì hiển thị ra:
n is a negative number
Nếu n = 0 thì hiển thị ra:
n is equal to 0*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        printf("n is a positive number");
    }
    else if (n < 0)
    {
        printf("n is a negative number");
    }
    else
    {
        printf("n is equal to 0");
    }
    return 0;
}