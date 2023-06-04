/*Bạn hãy viết chương trình nhập vào từ bàn phím 10 số nguyên
và hiển thị ra tổng của 10 số này.
Ví dụ nếu nhập:
2 7 6 3 4 8 9 7 6 10
Thì màn hình sẽ hiển thị:
62*/
#include <stdio.h>

int main()
{
    int a[10];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    printf("%d", sum);

    return 0;
}