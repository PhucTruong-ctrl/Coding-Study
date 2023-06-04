/*Bạn hãy viết chương trình nhập từ bàn phím hai số nguyên a và b.
Sau đó hiển thị ra màn hình các số từ a tới b mà chia hết cho cả 3 và 5.
Ví dụ nếu nhập a = 1, b = 50 thì chương trình sẽ hiển thị ra màn hình:
15 30 45*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    while (a <= b)
    {
        if (a % 3 == 0 && a % 5 == 0)
        {
            printf("%d ", a);
        }
        a++;
    }
    return 0;
}