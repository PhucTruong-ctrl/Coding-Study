/*Bạn hãy viết chương trình nhập từ bàn phím một số nguyên n và hiển thị ra màn hình các ước của n (n > 0).
Ví dụ nếu nhập n = 12 thì chương trình sẽ hiển thị ra màn hình:
1 2 3 4 6 12*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // Nếu n chia hết cho i thì i chính là ước của n
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}