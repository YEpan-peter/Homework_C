#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//	int money = 20;
//	int bottle_num = 0; // ƿ������
//	int buy_num = 0;//�����������
//	while (money > 0) {
//		money--; // ÿ����һƿ���ϻ���1Ԫ
//		bottle_num++; // ��һƿ��������һƿ
//		buy_num++; // ���������������
//	}
//	while (bottle_num >= 1) {
//		bottle_num --;
//		buy_num++; // ÿ��ƿ��ƿ���Ի�һƿ����
//	}
//	printf("���Ժȵ�����������: %d\n", buy_num);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int flag = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//			if(i>j&& arr[i][j] == 0) {
//				flag++;
//			}
//		}
//	}
//
//    if (flag == n * (n - 1) / 2 ) {
//	 printf("YES");
//    } else {
//	 printf("NO");
//    }
//    return 0;
// }


//#include<stdio.h>
//
//int main() {
//	int m, n;
//	while (scanf("%d %d",&m,&n) != EOF)
//	{
//		int arr1[10][10] = { 0 };
//		int arr2[10][10] = { 0 };
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				scanf("%d", &arr1[i][j]);
//			}
//		}
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				scanf("%d", &arr2[i][j]);
//			}
//		}
//		for (int i = 0; i < m; i++) {
//			for (int j = 0; j < n; j++) {
//				if(arr1[i][j] != arr2[i][j]) {
//					printf("NO\n");
//					return 0;
//				}
//			}
//		}
//
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void Print(int arr[]) {
//	for(int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Change(int arr[]) {
//	int arr_odd[10] = { 0 };	
//	int arr_even[10] = { 0 };
//	int  i =0,j = 0,k = 0;
//	for(i = 0; i < 10; i++) {
//		if(arr[i] % 2 == 0) {
//			arr_even[j] = arr[i]; // ż������arr_even��
//			j++;
//		} else {
//			arr_odd[k] = arr[i]; // ��������arr_odd��
//			k++;
//		}
//	}
//	for(i = 0; i < k; i++) {
//		arr[i] = arr_odd[i]; // �������Ż�ԭ����
//	}
//	for(i = k; i-k < j; i++) {
//		arr[i] = arr_even[i-k]; // ��ż���Ż�ԭ����
//	}
//}
//int main() {
//	int arr[10] = { 0 };
//	for(int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("ԭ����Ϊ�� ");
//	Print(arr);
//	Change(arr);
//	printf("�޸ĺ������Ϊ�� ");
//	Print(arr);
//	return 0;
//}
//

//#include<stdio.h>
//
//int main() {
//	int m = 0, n = 0;
//	int arr1[1001] = { 0 };
//	int arr2[1001] = { 0 };
//	int arr_result[2000] = { 0 };
//	int i = 0, j = 0, k = 0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < 1001; i++) {
//		arr1[i] = 30000;
//	}
//	for (i = 0; i < 1001; i++) {
//		arr2[i] = 30000;
//	}
//	for (i = 0; i < m; i++) {
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 0; i < m + n;i++) {
//		if (arr1[j] < arr2[k]) {
//			arr_result[i] = arr1[j];
//			j++;
//		}
//		else if (arr1[j] > arr2[k]) {
//			arr_result[i] = arr2[k];
//			k++;
//		}
//		else {
//			arr_result[i] = arr1[j];
//			arr_result[i + 1] = arr2[k];
//			i++;
//			j++;
//			k++;
//		}
//	}
//	/*if(arr1[m-1] < arr2[n - 1]) {
//		arr_result[m + n - 1] = arr2[n - 1];
//	}
//	else {
//		arr_result[m + n - 1] = arr1[m - 1];
//	}*/
//	for (i = 0; i < m + n; i++) {
//		printf("%d ", arr_result[i]);
//	}
//	return 0;
////}
//#include <stdio.h>
//
//int main() {
//    int m, n;
//    int arr1[1000] = { 0 }; // ��ʼ��Ϊ0����
//    int arr2[1000] = { 0 }; // ��ʼ��Ϊ0����
//    int arr_result[2000] = { 0 };
//    int i = 0, j = 0, k = 0;
//
//    scanf("%d %d", &m, &n);
//
//    // ��ȡ��������
//    for (i = 0; i < m; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0;
//
//    // �ϲ������������飨��׼�鲢����ϲ��߼���
//    while (j < m && k < n) {
//        if (arr1[j] <= arr2[k]) {
//            arr_result[i++] = arr1[j++];
//        }
//        else {
//            arr_result[i++] = arr2[k++];
//        }
//    }    // ����ʣ��Ԫ��
//    while (j < m) {
//        arr_result[i++] = arr1[j++];
//    }
//    while (k < n) {
//        arr_result[i++] = arr2[k++];
//    }
//
//    // ������
//    for (int idx = 0; idx < m + n; idx++) {
//        printf("%d ", arr_result[idx]);
//    }
//
//    return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int n;
//	int flag = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	for(int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for(int i = 0; i < n - 1; i++) {
//		if(arr[i] > arr[i + 1]) {
//			flag ++;
//		}
//	}
//	if (flag == n-1) {
//		printf("sorted");
//		return 0;
//	}
//	flag = 0;
//	for (int i = 0; i < n - 1; i++) {
//		if (arr[i] < arr[i + 1]) {
//			flag++;
//		}
//	}
//	if (flag == n-1) {
//		printf("sorted");
//		return 0;
//	}
//	flag = 0;
//	for (int i = 0; i < n - 1; i++) {
//		if (arr[i] == arr[i + 1]) {
//			flag++;
//		}
//	}
//	if (flag == n-1) {
//		printf("sorted");
//	}
//	else {
//		printf("unsorted");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    int arr[50];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    int is_non_decreasing = 1;  // �ǵݼ���־
//    int is_non_increasing = 1;  // �ǵ�����־
//
//    for (int i = 0; i < n - 1; i++) {
//        if (arr[i] < arr[i + 1])
//            is_non_increasing = 0;  // ���������ƻ��ǵ���
//        else if (arr[i] > arr[i + 1])
//            is_non_decreasing = 0;  // ���ֽ����ƻ��ǵݼ�
//    }
//
//    // ֻҪ����ǵ�����ǵݼ�֮һ������
//    if (is_non_decreasing || is_non_increasing)
//        printf("sorted");
//    else
//        printf("unsorted");
//
//    return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//#define ROWS 4
//#define COLS 4
//
//bool searchMatrix(int matrix[ROWS][COLS], int target) {
//    int row = 0;
//    int col = COLS - 1;
//
//    while (row < ROWS && col >= 0) {
//        if (matrix[row][col] == target) {
//            return true;
//        }
//        else if (matrix[row][col] > target) {
//            col--; // �����ƶ�
//        }
//        else {
//            row++; // �����ƶ�
//        }
//    }
//    return false;
//}
//
//int main() {
//    int matrix[ROWS][COLS] = {
//        {1,  4,  7, 11},
//        {2,  5,  8, 12},
//        {3,  6,  9, 16},
//        {10,13,14,17}
//    };
//    int target = 5;
//
//    if (searchMatrix(matrix, target)) {
//        printf("Found!\n");
//    }
//    else {
//        printf("Not Found!\n");
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//void leftRotate(char* str, int k) {
//    int len = strlen(str);
//    if (len == 0 || k <= 0 || k >= len) return;
//
//    char temp[1000];  // �����������1000
//    int i;
//
//    // ���ƴӵ� k λ��ĩβ���ַ��� temp
//    for (i = 0; i < len - k; i++) {
//        temp[i] = str[i + k];
//    }
//
//    // ����ǰ k ���ַ����ں���
//    for (int j = 0; j < k; j++) {
//        temp[i++] = str[j];
//    }
//
//    temp[i] = '\0';  // ������
//
//    // ��������ƻ�ԭ�ַ���
//    strcpy(str, temp);
//}
//
//int main() {
//    char str1[100] = { 0 };
//    int k;
//	printf("Enter a string: ");
//	scanf("%s", str1);
//	printf("Enter the number of positions to rotate left: ");
//	scanf("%d", &k);
//	printf("Original string: %s\n", str1);  // ���ԭ�ַ���
//	printf("Number of positions to rotate left: %d\n", k);
//	// ������������
//    leftRotate(str1, k);
//    printf("After left rotation: %s\n", str1);  // ���: CDAB
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//
//// �ж�s2�Ƿ���s1����ת�ַ���
//bool isRotation(const char* s1, const char* s2) {
//    if (strlen(s1) != strlen(s2)) {
//        return false;
//    }
//
//    // ����ƴ���ַ��� s1 + s1
//    char temp[2000];  // ����ԭ�ַ����������1000
//    strcpy(temp, s1);
//    strcat(temp, s1);
//
//    // �ж�s2�Ƿ�Ϊtemp���Ӵ�
//    return strstr(temp, s2) != NULL;
//}
//
//int main() {
//    char s1[] = "AABCD";
//    char s2[] = "BCDAA";
//
//    if (isRotation(s1, s2)) {
//        printf("Yes, '%s' is a rotation of '%s'\n", s2, s1);
//    }
//    else {
//        printf("No, '%s' is NOT a rotation of '%s'\n", s2, s1);
//    }
//
//    return 0;
//}
