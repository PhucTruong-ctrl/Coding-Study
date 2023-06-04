/*Bạn hãy viết chương trình nhập từ bàn phím
chiều dài và chiều rộng của một hình chữ nhật (chiều dài và chiều rộng của hình chữ nhật này là một số nguyên)
sau đó hiển thị lên màn hình:
Area = {P}
Với {P} là diện tích của hình chữ nhật.*/

#include <stdio.h>

int main()
{
    int length, width;
    scanf("%d%d", &length, &width);
    printf("Area = %d", length * width);
    return 0;
}