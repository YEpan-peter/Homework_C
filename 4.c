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



//#include <stdio.h>	
//
//int main() {
//	int n;
//	printf("������һ�������� ");
//	scanf("%d", &n);
//	printf("\n");	
//	int i, j, k;
//	for (i = 0; i < n; i++) {
//		if (i <=(n / 2)) {
//			for (j = ((n/2)-i); j > 0; j--) {
//				printf(" ");
//			}
//			for (k = (2*i)+1; k > 0; k--) {
//				printf("*");
//			}
//			printf("\n");
//		}else {
//			for (j =(i-(n/2)) ; j > 0; j--) {
//				printf(" ");
//			}
//			for (k =(2*(n-i) - 1); k > 0; k--) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
////#include <stdio.h>
////
////void printDiamond(int n) {
////    int i, j, space;
////    for (i = 1; i <= n; i++) {
////        for (space = 1; space <= n - i; space++) {
////            printf(" ");
////        }      
////        for (j = 1; j <= 2 * i - 1; j++) {
////            printf("*");
////        }
////        printf("\n");
////    }
////    for (i = n - 1; i >= 1; i--) {
////        for (space = 1; space <= n - i; space++) {
////            printf(" ");
////        }
////        for (j = 1; j <= 2 * i - 1; j++) {
////            printf("*");
////        }
////        printf("\n");
////    }
////}
//////
////int main() {
////    int rows;
////
////    printf("���������ε�����: ");
////    scanf("%d", &rows);
////
////    if (rows % 2 == 0) {
////        printf("����ӦΪ���������Զ���1\n");
////        rows++;
////    }
////
////    printDiamond((rows + 1) / 2);
////
////    return 0;
////}
//#include <stdio.h>
//#include <stdlib.h> // ����abs����
//
//int main() {
//    int n;
//    do {
//        printf("���������εĲ���(����): ");
//        scanf("%d", &n);
//    } while (n % 2 == 0);
//
//    int center = n / 2; // ��������
//    
//    // ʹ�õѿ�������ϵ˼·
//    for (int y = -center; y <= center; y++) {
//        for (int x = -center; x <= center; x++) {
//            // ���α߽�������|x| + |y| <= center
//            if (abs(x) + abs(y) <= center) {
//                printf("*");
//            } else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
////}
//#include <stdio.h>
//
//int main() {
//    int n;
//    do {
//        printf("���������εĲ���(����): ");
//        scanf("%d", &n);
//    } while (n % 2 == 0); // ȷ������Ϊ����
//
//    int mid = n / 2; // ���ĵ�����
//
//    // ��ӡ�ϰ벿�֣������ģ�
//    for (int i = 0; i <= mid; i++) {
//        // ��ӡ�ո�ÿ�пո��� = �������� - ��ǰ������
//        for (int j = 0; j < mid - i; j++)
//            printf(" ");
//
//        // ��ӡ�Ǻţ�ÿ���Ǻ��� = ��ǰ������*2 + 1
//        for (int j = 0; j < 2 * i + 1; j++)
//            printf("*");
//        printf("\n");
//    }
//
//    // ��ӡ�°벿��
//    for (int i = mid - 1; i >= 0; i--) {
//        for (int j = 0; j < mid - i; j++)
//            printf(" ");
//        for (int j = 0; j < 2 * i + 1; j++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int n;
//    do {
//        printf("���������εĲ���(����): ");
//        scanf("%d", &n);
//    } while (n % 2 == 0);//���ĵ�����
//
//    int mid = n / 2;
//
//    for (int i = -mid; i <= mid; i++) {
//        int spaces = (i > 0) ? i : -i; // ���㵱ǰ�������ĵ�ľ���
//        int stars = n - 2 * spaces;//���㵱ǰ���Ǻ���
//
//        for (int j = 0; j < spaces; j++)
//            printf(" ");
//        for (int j = 0; j < stars; j++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}