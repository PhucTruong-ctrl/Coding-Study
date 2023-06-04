/*Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra màn hình những số chẵn trong mảng.
Ví dụ nếu bạn nhập:
5
2 7 6 8 9
Thì màn hình sẽ hiển thị:
2 6 8 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
