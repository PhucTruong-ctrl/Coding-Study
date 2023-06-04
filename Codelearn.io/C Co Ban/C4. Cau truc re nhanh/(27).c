/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n.
Sau đó kiểm tra xem nếu n là số chẵn thì hiển thị ra:
n is an even number
Ngược lại, nếu n là số lẻ thì hiển thị ra:
n is an odd number*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("n is an even number");
    }
    else
    {
        printf("n is an odd number");
    }
    return 0;
}