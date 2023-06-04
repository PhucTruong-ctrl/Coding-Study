/*Viết chương trình nhập từ bàn phím 2 số nguyên a, b.
Bạn hãy kiểm tra xem giá trị của cả a và b có khác 0 không. Nếu có hiển thị:
a is not equal to 0 and b is not equal to 0
Ngược lại nếu a hoặc b có giá trị bằng 0 thì hiển thị:
a is equal to 0 or b is equal to 0*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a != 0 && b != 0)
    {
        printf("a is not equal to 0 and b is not equal to 0");
    }
    else
    {
        printf("a is equal to 0 or b is equal to 0");
    }
    return 0;
}