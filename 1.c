#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int compare(int a, int b) {
//	if (a < b) {
//		return b;
//	}
//	else if (a > b) {
//		return a;
//	}
//	return 0;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int result = compare(a, b);
//	if (result == 0) {
//		printf("The two numbers are equal.\n");
//	}
//	else {
//		printf("The larger number is: %d\n", result);
//	}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        int b = a % 2;
//        if (b == 1) {
//            printf("Odd");
//        }
//        else { printf("Even"); }
//        printf("\n");
//    }
//}
//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//
// 
//// }
//#include<stdio.h>
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i%3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
////	return 0;
////}
//#include<stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && b > c) {
//		printf("%d %d %d\n", a, b, c);
//	}
//	else if (a > c && c > b) {
//		printf("%d %d %d\n", a, c, b);
//	}
//	else if (b > a && a > c) {
//		printf("%d %d %d\n", b, a, c);
//	}
//	else if (b > c && c > a) {
//		printf("%d %d %d\n", b, c, a);
//	}
//	else if (c > a && a > b) {
//		printf("%d %d %d\n", c, a, b);
//	}
//	else if (c > b && b > a) {
//		printf("%d %d %d\n", c, b, a);
//	}
//	else {
//		printf("something wrong\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int i, j, flag;
//	for (i = 100; i <= 200; i++) {
//		for (j = 2, flag = 1; j <= i / 2; j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}if (flag) {
//			printf("%d ", i);
//		}
//	}return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int i;
//	for (i = 1000; i <= 2000; i++) {
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
//			printf("%d ", i);
//		}
//		}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//// Function to compare two integers and return the larger one
//int compare(int a, int b) {
//	if (a < b) {
//		return b;
//	}
//	else if (a > b) {
//		return a;
//	}
//	return 0; // Return 0 if they are equal
//}
//int main() {
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF) {
//		int i = compare(a, b);
//		for (i; i > 0; i--) {
//			if (a % i == 0 && b % i == 0) {
//				printf("%d\n", i); // Print the largest common divisor
//				break; // Exit the loop after finding the first common divisor
//			}
//		}
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
	//for (int i = 1; i <= 9; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		printf("%d*%d=%d ",j, i, i * j);
	//	}
	//	printf("\n");
	//}
//	return 0;
//}
//
//#include <stdio.h>
//int main() {
//    int numbers[10];
//    int max;
//    printf("������10��������\n");
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &numbers[i]);
//    }
//    max = numbers[0];
//    for (int i = 1; i < 10; i++) {
//        if (numbers[i] > max) {
//            max = numbers[i];
//        }
//    }
//    printf("��10�������е����ֵ�ǣ�%d\n", max);
//    return 0;
////}
//
//#include <stdio.h>
//
//int main() {
//    double sum = 0.0;
//    for (int n = 1; n <= 100; n++) {
//        sum += (n % 2 == 1 ? 1.0 : -1.0) / n;
//    }
//    printf("������: %.10f\n", sum);
//////    return 0;#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//
//int binarySearch(int arr[], int size, int target) {
//    int left = 0;
//    int right = size - 1;
//
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//
//        if (arr[mid] == target) {
//            return mid; // �ҵ�Ŀ�꣬�����±�
//        }
//        else if (arr[mid] < target) {
//            left = mid + 1; // Ŀ�����Ұ벿��
//        }
//        else {
//            right = mid - 1; // Ŀ������벿��
//        }
//    }
//
//    return -1; // δ�ҵ�Ŀ��
//}
//
//int main() {
//    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int target;
//
//    printf("������Ҫ���ҵ�����: ");
//    scanf("%d", &target);
//
//    int result = binarySearch(arr, size, target);
//
//    if (result != -1) {
//        printf("���� %d �ҵ����±�Ϊ: %d\n", target, result);
//    }
//    else {
//        printf("�Ҳ������� %d\n", target);
//    }
//
//    return 0;
//}
// 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    const int MAX_ATTEMPTS = 1; // ����Դ���
//    do {
//        int secretNumber, guess, attempts = 0;
//        // ��ʼ�����������
//        srand(time(0));
//        // ����1-100�������
//        secretNumber = rand() % 100 + 1;
//
//        printf("��ӭ������������Ϸ��\n");
//        printf("���Ѿ������һ��1��100֮������֣�����%d�λ���³�����\n", MAX_ATTEMPTS);
//
//        while (attempts < MAX_ATTEMPTS) {
//            printf("\n��������Ĳ²⣨��ʣ%d�λ��ᣩ: ", MAX_ATTEMPTS - attempts);
//            scanf("%d", &guess);
//            attempts++;
//
//            if (guess == secretNumber) {
//                printf("��ϲ�㣡���ڵ�%d�β���������%d��\n", attempts, secretNumber);
//                break;
//            }
//            else if (guess < secretNumber) {
//                printf("̫С�ˣ�\n");
//            }
//            else {
//                printf("̫���ˣ�\n");
//            }
//        }
//        if(attempts==MAX_ATTEMPTS)
//        printf("\n���ź�����û����%d���ڲ������֡���ȷ����%d��\n", MAX_ATTEMPTS, secretNumber);
//    } while (1);
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a, i;
//    while (scanf("%d", &a) != EOF) {
//        int s = 0;
//        for ( i = a; i >= 0; i--) {
//            s += i;
//        }
//        printf("%d\n", s);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//// ʹ����ʱ�����Ľ�������
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int x = 10, y = 20;
//
//    printf("����ǰ: x = %d, y = %d\n", x, y);
//    swap(&x, &y);
//    printf("������: x = %d, y = %d\n", x, y);
//
//    return 0;
//}
//#include <stdio.h>
//
//void printMultiplicationTable(int* n) {
//	for (int i = 1; i <= *n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//}
//
//int main() {
//    int size;
//
//    printf("������˷��ھ���Ĵ�С: ");
//    scanf("%d", &size);
//    printMultiplicationTable(&size);
//
//    return 0;
//}
//
//#include <stdio.h>
//int gapyear(int year) {
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//		return 1; // ����
//	}
//	return 0; // ƽ��
//}
//int main() {
//
//	return 0;
////}
//
//#include<stdio.h>
//int is_prime(int n) {
//	if (n <= 1) return 0; // 0��1��������
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0) return 0; // ����ܱ�i��������������
//	}
//	return 1; // ������
//}
//int main() {
//	int i = 0;
//	for (i = 100; i <= 400000; i++) {
//		if (is_prime(i)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}