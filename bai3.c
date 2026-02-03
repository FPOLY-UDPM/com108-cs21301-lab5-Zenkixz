/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

//Tạo hàm hoán vị sử dụng con trỏ
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Nhap gia tri x: ");
    scanf("%d", &x);        
    printf("Nhap gia tri y: ");
    scanf("%d", &y);
    //Gọi hàm hoán vị
    swap(&x, &y);
    printf("Gia tri sau khi hoan vi:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}

