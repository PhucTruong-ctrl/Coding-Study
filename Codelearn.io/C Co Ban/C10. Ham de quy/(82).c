/*Cho số nguyên n được nhập từ bàn phím,
bạn hãy viết hàm đệ quy trả về n! (n giai thừa).
Ví dụ nếu bạn nhập n = 5 thì chương trình sẽ hiển thị lên màn hình 120.*/

#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}