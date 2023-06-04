/*Bạn hãy viết chương trình hiển thị ra màn hình các ký tự từ 'A' tới 'Z' như bên dưới:
ABCDEFGHIJKLMNOPQRSTUVWXYZ*/
#include <stdio.h>

int main()
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c", c);
    }
    return 0;
}