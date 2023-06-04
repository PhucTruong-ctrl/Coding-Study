/*Cho 2 biến kiểu số nguyên a và b được nhập từ bàn phím,
bạn hãy viết chương trình hiển thị ra màn hình:
a mod b = {P}
Với {P} là phần dư của phép chia a/b
Ví dụ nếu bạn nhập
7 3
thì màn hình sẽ hiển thị lên dòng chữ:
a mod b = 1
Giải thích: 7 chia 3 dư 1*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a mod b = %d", a % b);
    return 0;
}