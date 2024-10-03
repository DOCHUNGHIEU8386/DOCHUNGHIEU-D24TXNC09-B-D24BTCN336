/**
 * Chuong trinh tim uoc chung lon nhat (USCLN)
 * va boi so chung nho nhat (BSCNN) cua 2 so a và b
 * 
 */
#include<stdio.h>
 
/**
 * Tim uoc so chung lon nhat (USCLN) Ð? qui Euclid
 */
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}

/*Thu?t toán t? nhiên mà b?n dùng d? tìm UCLN dó là duy?t t? s? nh? hon trong 2 s? v? t?i 1, s? nào mà c? a và b chia h?t d?u tiên s? là UCLN*/

int ucln(int a, int b){
   if(a == 0 || b == 0){
      return a + b;
   }
   int min = a < b ? a : b;
   for(int i = min; i >= 1; i--){
      if(a % i == 0 && b % i == 0){
         return i;
      }
   }
   return 1;
}

 
/**
 * Tim boi so chung nho nhat (BSCNN)
 */
int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}
 
/**
 * Ham main
 */
int main() {
 int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    // tinh USCLN cua a và b
    printf("USCLN cua %d va %d la: %d", a, b, USCLN(a, b));
    // tinh BSCNN cua a và b
    printf("USCLN cua %d va %d la: %d", a, b, BSCNN(a, b));
}

