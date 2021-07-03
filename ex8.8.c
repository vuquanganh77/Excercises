#include <stdio.h>
int main() {
    int n, i;
    int fact = 1;
    printf("Nhap mot so: ");
    scanf("%d", &n);

    
    if (n < 0)
        printf("Khong ton tai giai thua cua %d",n);
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("giai thua cua  %d = %d", n, fact);
    }

    return 0;
}
