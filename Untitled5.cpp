/**
 * Chuong trinh liet ke tat ca so nguyen to co 5 chu so.
 * 
 * 
 */
  
#include<stdio.h>
 
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = (int) sqrt(n);
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
    int count = 0;
    int i;
    printf("Liet ke tat ca cac so co 5 chu so:");
    for (i = 10001; i < 99999; i+=2) {
        if (isPrimeNumber(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Tong cac so nguyen to co 5 chu so la: %d", count);
}


