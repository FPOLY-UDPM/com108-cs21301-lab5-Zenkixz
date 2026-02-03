/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

#include <stdio.h>


// Tạo hàm tìm số lớn nhất trong 3 số
int TimSoLonNhat(int so1, int so2, int so3) {
    int max;

    max = so1;
    if (so2 > max)
        max = so2;
    if (so3 > max)
        max = so3;

    return max;   // Trả về giá trị lớn nhất
}

int main() {
    int a, b, c;
    int soMax;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    // Gọi hàm
    soMax = TimSoLonNhat(a, b, c);

    printf("So lon nhat trong 3 so la: %d\n", soMax);

    return 0;
}       

