/*Bạn hãy viết chương trình nhập từ bàn phím số nguyên n và hiển thị ra màn hình n! (n giai thừa).
Ví dụ nếu nhập n = 5 thì chương trình sẽ hiển thị ra màn hình:
120
Giải thích: 1 * 2 * 3 * 4 * 5 = 120.*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // Biến lưu trữ kết quả của n!
    // Lưu ý: bạn cần khởi tạo giá trị cho biến này = 1
    int giaithua = 1;
    for (int i = 1; i <= n; i++)
    {
        giaithua = giaithua * i;
    }
    printf("%d", giaithua);
    return 0;
}