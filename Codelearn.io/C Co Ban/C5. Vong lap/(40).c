/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n
và thực hiện hiển thị ra tổng các số lẻ từ 0 tới n.
Ví dụ nếu nhập n = 7 thì chương trình sẽ hiển thị ra màn hình:
16
Giải thích: 1 + 3 + 5 + 7 = 16*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // Biến lưu trữ tổng các số từ a tới b
    // Lưu ý: bạn cần khởi tạo giá trị cho biến = 0
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            // sum += i tương đương với sum = sum + i
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}