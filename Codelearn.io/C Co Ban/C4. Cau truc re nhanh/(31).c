/*Viết chương trình nhập từ bàn phím 3 số nguyên. Sau đó hiển thị lên màn hình số lớn nhất trong 3 số này.
Nếu bạn nhập:
4 7 3
thì màn hình sẽ hiển thị ra:
7
Nếu bạn nhập:
4 4 4
thì màn hình sẽ hiển thị ra:
4
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
    return 0;
}