/*Bạn hãy viết chương trình hiển thị ra màn hình các số từ 1 tới 5 sử dụng vòng lặp do-while.*/

#include <stdio.h>

int main()
{
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    return 0;
}