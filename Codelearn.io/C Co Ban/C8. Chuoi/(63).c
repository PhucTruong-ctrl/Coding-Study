/*Bạn hãy viết chương trình nhập vào
tên và địa chỉ của một người sau đó hiển thị ra màn hình thông tin sau:
Name: {P1}
Address: {P2}
Với {P1} và {P2} lần lượt là tên và địa chỉ của người đó.*/

#include <stdio.h>

int main()
{
    char name[100], address[100];
    gets(name);
    gets(address);
    // scanf("%s%s", name, address);
    printf("Name: %s\nAddress: %s", name, address);
    return 0;
}