/*Viết chương trình nhập từ bàn phím điểm của một học sinh.
Biết điểm hợp lệ là điểm nằm trong đoạn từ 0 đến 10,
bạn hãy kiểm tra xem điểm vừa nhập có hợp lệ không, nếu có thì hiển thị ra màn hình:
The score is valid
Ngược lại nếu điểm không hợp lệ thì hiển thị:
The score is not valid*/

#include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);
    if (score >= 0 && score <= 10)
    {
        printf("The score is valid");
    }
    else
    {
        printf("The score is not valid");
    }
    return 0;
}