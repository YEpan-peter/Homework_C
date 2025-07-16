#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//
//int main() {
//	int arr[5] = { 0 };
//	int n;
//	for(int i = 1;i<100000;i++){
//		n = (int)log10(i) + 1; // 计算数字 i 的位数
//		int temp = i;
//		for (int j = n-1; j >=0; j--) {
//			arr[j] = temp % 10;
//			temp /= 10;// 提取每一位数字
//		}
//		int sum = 0;
//		for(int k = 0; k < n; k++) {
//			sum += (int)pow(arr[k],n); // 计算每一位数字的位数次方和
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main() {
//	int arr[5] = { 0 };
//	int n;
//	printf("请输入一个整数（1-9）：");
//	scanf("%d", &n);
//	int temp = 0;
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		temp += n * (int)pow(10, i);
//		sum += temp;
//	}
//	printf("计算结果为：%d\n", sum);
//	
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//// 比较函数，比较两个 int 的大小
//int compare_int(const void* a, const void* b) {
//    int int_a = *(const int*)a;
//    int int_b = *(const int*)b;
//
//    if (int_a < int_b) return -1;
//    else if (int_a > int_b) return 1;
//    else return 0;
//}
//
//int main() {
//    int arr[] = { 5, 3, 8, 1, 9, 7 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    qsort(arr, n, sizeof(int), compare_int);
//
//    printf("排序后的整型数组：");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//
////
//#include <stdio.h>
//#include <stdlib.h>
//
//// 比较函数，比较两个 double 的大小
//int compare_double(const void* a, const void* b) {
//    double da = *(const double*)a;
//    double db = *(const double*)b;
//
//    if (da < db) return -1;
//    else if (da > db) return 1;
//    else return 0;
//}
//
//int main() {
//    double arr[] = { 3.14, 2.71, 0.618, 1.414, 2.0 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    qsort(arr, n, sizeof(double), compare_double);
//
//    printf("排序后的浮点数组：");
//    for (int i = 0; i < n; i++) {
//        printf("%.3f ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    char name[20];
//    int age;
//} Person;
//
//// 按年龄升序排序
//int compare_person_age(const void* a, const void* b) {
//    const Person* pa = (const Person*)a;
//    const Person* pb = (const Person*)b;
//
//    return pa->age - pb->age;
//}
//
//int main() {
//    Person people[] = {
//        {"Alice", 30},
//        {"Bob", 25},
//        {"Charlie", 35},
//        {"Dave", 20}
//    };
//    int n = sizeof(people) / sizeof(people[0]);
//
//    qsort(people, n, sizeof(Person), compare_person_age);
//
//    printf("按年龄排序后的人员名单：\n");
//    for (int i = 0; i < n; i++) {
//        printf("%s: %d\n", people[i].name, people[i].age);
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int cmp_string(const void* a, const void* b) {
//    const char* str1 = *(const char**)a;
//    const char* str2 = *(const char**)b;
//    return strcmp(str1, str2);
//}
//
//
//int main() {
//    // 字符串数组
//    const char* arr[] = { "banana", "apple", "orange", "grape", "pear" };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // 直接把strcmp当比较函数
//    qsort(arr, n, sizeof(const char*), cmp_string);
//
//    printf("排序后的字符串数组：\n");
//    for (int i = 0; i < n; i++) {
//        printf("%s\n", arr[i]);
//    }
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

// 通用冒泡排序函数
void bubble_sort(void* base, size_t num, size_t size,
    int (*cmp)(const void*, const void*)) {
    char* arr = (char*)base;
    char* temp = malloc(size);  // 临时空间，用于交换元素
    if (!temp) {
        perror("malloc failed");
        return;
    }

    for (size_t i = 0; i < num - 1; i++) {
        for (size_t j = 0; j < num - i - 1; j++) {
            char* elem1 = arr + j * size;
            char* elem2 = arr + (j + 1) * size;
            if (cmp(elem1, elem2) > 0) {
                // 交换元素
                memcpy(temp, elem1, size);
                memcpy(elem1, elem2, size);
                memcpy(elem2, temp, size);
            }
        }
    }

    free(temp);
}

int compare_int(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);
}

int main() {
    int arr[] = { 5, 3, 8, 1, 9, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n, sizeof(int), compare_int);

    printf("排序结果：");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
