/*Bạn hãy viết chương trình nhập từ bàn phím số nguyên a và b. Sau đó hiển thị ra các số từ a tới b:
Ví dụ nếu nhập a = 5, b = 9 thì chương trình sẽ hiển thị ra màn hình :
5 6 7 8 9 */

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        printf("%d ", i);
    }
    return 0;
}