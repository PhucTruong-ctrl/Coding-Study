/*Cho 2 biến kiểu số nguyên a và b được nhập từ bàn phím,
bạn hãy viết chương trình hiển thị ra các phép tính trên 2 số này:
a + b = {P1}
a - b = {P2}
a * b = {P3}
a / b = {P4}
a mod b = {P5}
Với {P1} là tổng của a và b.
Với {P2} là hiệu của a và b.
Với {P3} là tích của a và b.
Với {P4} là thương của a và b.
Với {P5} là phần dư của phép chia a/b.
Ví dụ nếu bạn nhập:
10 5
thì màn hình sẽ hiển thị:
a + b = 15
a - b = 5
a * b = 50
a / b = 2
a mod b = 0*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a mod b = %d", a % b);
    return 0;
}