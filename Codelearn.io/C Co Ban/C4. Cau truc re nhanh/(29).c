/*Bạn hãy viết chương trình nhập vào từ bàn phím số 2 nguyên a và b. Sau đó hiển thị ra màn hình:
Nếu a lớn hơn hoặc bằng b thì hiển thị ra:
a is greater than or equal to b
Ngược lại nếu a nhỏ hơn b thì hiển thị ra:
a is smaller than b*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        printf("a is greater than or equal to b");
    }
    else
    {
        printf("a is smaller than b");
    }
    return 0;
}