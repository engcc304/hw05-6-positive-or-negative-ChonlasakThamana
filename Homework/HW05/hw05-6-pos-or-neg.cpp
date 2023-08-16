/*
    จงรับค่าจากผู้ใชิ และวิเคราะห์ว่าจำนวนดังกล่าวเป็นจำนวนเต็มบวก หรือจำนวนเต็มลบ
    
    Test case:
        Input :
            49

    Output:
        Positive

    Test case:
        Input :
            -90

    Output:
        Negative

*/
#include <stdio.h>

int main() {
    int num;

    // รับค่าจากผู้ใช้
    printf("Enter a number: ");
    scanf("%d", &num);

    // ตรวจสอบว่าเป็นจำนวนเต็มบวก หรือ จำนวนเต็มลบ หรือ ศูนย์
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}