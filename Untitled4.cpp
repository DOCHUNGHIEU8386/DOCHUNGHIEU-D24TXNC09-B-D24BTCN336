/**
 * Chuong trinh liet ke n so nguyen to dau tien.
 * 
 *
 */
 #include<stdio.h>
 #include<math.h>
 
/**
 * check so nguyen to
 * 
 * 
 * @param n: so nguyen duong
 * @return 1: la so nguyen so, 
 *         0: khong la so nguyen to
 */
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
/**
 * Ham main
 */
int main() {
 int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("%d so nguyen to dau tien la: \n", n);
    int dem = 0; // dem tong so nguyen to
    int i = 2;   // tim so nguyen to bat dau tu so 2
    while (dem < n) {
        if (isPrimeNumber(i)) {
            printf("%d ", i);
            dem++;
        }
        i++;
    }
}

