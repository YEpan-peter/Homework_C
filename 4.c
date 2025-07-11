#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    printf("i = %d\n", i);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        int arr[50] = { 0 };
//        int i;
//        for (i = 0; i < a; i++) {
//            scanf("%d", &arr[i]);
//        }
//        int b;
//       
//        scanf("%d", &b);
//
//        for (i = 0; i < a; i++) {
//            if (arr[i] == b) {
//                for (int j = i; j < a - 1; j++) {
//                    arr[j] = arr[j + 1];
//                }
//                a--;
//                i--;
//            }
//        }
//        for (i = 0; i < a; i++) {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d ", *(arr + i));
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//

//
//#include<stdio.h>
//
//int main() {
//	int n = 13;
//	int i ,j, k;
//	for (i = 7; i > 0; i--) {
//		for (j = i; j > 0; j--) {
//			printf(" ");
//		}
//		for(k =n+2-2*i; k > 0; k--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <7; i++) {
//		for (j = 0; j <= i; j++) {
//			printf(" ");
//		}
//		for (k = 0; k < n - 2 * i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



#include <stdio.h>	

int main() {
	int n;
	printf("请输入一个层数： ");
	scanf("%d", &n);
	int i, j, k;
	for (i = 0; i < n; i++) {
		if (i <=(n / 2)) {
			for (j = ((n/2)-i); j > 0; j--) {
				printf(" ");
			}
			for (k = (2*i)+1; k > 0; k--) {
				printf("*");
			}
			printf("\n");
			continue;
		}else {
			for (j =(i-(n/2)) ; j > 0; j--) {
				printf(" ");
			}
			for (k =(2*(n-i) - 1); k > 0; k--) {
				printf("*");
			}
			printf("\n");
			continue;
		}

		return 0;
	}
}