/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n và hiển thị ra các số từ 1 tới n.
Ví dụ nếu nhập n = 10 thì chương trình sẽ hiển thị ra màn hình:
1 2 3 4 5 6 7 8 9 10 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}