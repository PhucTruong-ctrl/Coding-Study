/*Bạn hãy viết chương trình nhập vào một ký tự từ bàn phím và
thực hiện hiển thị ký tự tiếp trong bảng bảng chữ cái của ký tự đó ra màn hình.
Ví dụ nếu bạn nhập
c
thì chương trình sẽ hiển thị ra
d
Giải thích: 'd' là ký tự tiếp theo của 'c' trong bảng chữ cái.*/

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    c = c + 1;
    printf("%c", c);
    return 0;
}