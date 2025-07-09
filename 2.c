#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//double power(double n, int k) {
//    // 处理指数为0的情况
//    if (k == 0) {
//        return 1;
//    }
//
//    // 处理负指数
//    if (k < 0) {
//        return 1 / power(n, -k);
//    }
//
//    // 递归计算正指数
//    return n * power(n, k - 1);
//}
//
//int main() {
//    double base;
//    int exponent;
//
//    printf("请输入底数: ");
//    scanf("%lf", &base);
//    printf("请输入指数: ");
//    scanf("%d", &exponent);
//
//    double result = power(base, exponent);
//    printf("%.2f的%d次方是: %.6f\n", base, exponent, result);
//
//    return 0;
//}
//#include <stdio.h>
//
//int DigitSum(int n) {
//    if (n < 10) {
//        return n;  
//    }
//    else {
//        return n % 10 + DigitSum(n / 10); 
//    }
//}
//
//int main() {
//    int num = 0;
//	printf("请输入一个整数: ");   
//	scanf("%d", &num);  
//    printf("DigitSum(%d) = %d\n", num, DigitSum(num));  
//    return 0;
//}
//
//#include <stdio.h>
//int strlen_recursive(const char* str) {
//    if (*str == '\0') {  
//        return 0;        
//    }
//    return 1 + strlen_recursive(str + 1);  
//}
//
//int main() {
//    const char* str = "Hello,World!";
//    int len = strlen_recursive(str);
//    printf("Length of \"%s\" is %d\n", str, len);  
//    return 0;
//}
//
//
//#include <stdio.h>
//void printDigitsForward(long n) {
//    if (n < 10) { 
//        printf("%ld ", n);
//    }
//    else {
//        printDigitsForward(n / 10);  
//        printf("%ld ", n % 10);       
//    }
//}
//int main() {
//	int num;
//	printf("请输入一个整数: ");
//	scanf("%ld", &num);
//	printf("数字的各位是: ");
//	printDigitsForward(num);
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//
//int fibonacci_recursive(int n) {
//    if (n == 0) return 0;           
//    if (n == 1) return 1;           
//    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2); 
//}
//int fibonacci_iterative(int n) {
//    if (n == 0) return 0;
//    if (n == 1) return 1;
//
//    int a = 0, b = 1, c;
//    for (int i = 2; i <= n; i++) {
//        c = a + b; 
//        a = b;      
//        b = c;
//    }
//    return b;
//}
//
//int main() {
//    int n = 0;
//	printf("请输入一个非负整数: ");  
//	scanf("%d", &n);
//    printf("F(%d) = %d\n", n, fibonacci_recursive(n));  
//	printf("F(%d) = %d\n", n, fibonacci_iterative(n));
//    return 0;
//}
//
//#include <stdio.h>
//void reverse_string(char* str) {
//    if (*str == '\0' || *(str + 1) == '\0') {
//        return;
//    }
//    char* end = str;
//    while (*(end + 1) != '\0') {
//        end++;
//    }
//    char temp = *str;
//    *str = *end;
//    *end = temp;
//    *end = '\0';         
//    reverse_string(str + 1);
//    *end = temp;         
//}
//
//int main() {
//    char str[] = "abcde";
//    printf("Original: %s\n", str);
//    reverse_string(str);
//    printf("Reversed: %s\n", str);
//    return 0;
////}
//#include <stdio.h>
//
//int factorial_recursive(int n) {
//    if (n == 0 || n == 1) { 
//        return 1;
//    }
//    return n * factorial_recursive(n - 1); 
//}
//int factorial_iterative(int n) {
//    int result = 1;
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    int n = 5;
//	printf("请输入一个非负整数: ");
//	scanf("%d", &n);
//    printf("%d! = %d\n", n, factorial_recursive(n));
//	printf("%d! = %d\n", n, factorial_iterative(n));
//    return 0;
//}