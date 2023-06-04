/*Bạn hãy viết chương trình nhập từ bàn phím số nguyên n
và hiển thị ra màn hình số các ước số của n.
Ví dụ nếu nhập n = 12 thì chương trình sẽ hiển thị ra màn hình:
6
Giải thích: 12 có 6 ước là 1, 2, 3, 4, 6, 12*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    int uoc = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            uoc++;
        }
        i++;
    }
    printf("%d", uoc);
    return 0;
}