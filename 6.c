#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main() {
//	int money = 20;
//	int bottle_num = 0; // 瓶子数量
//	int buy_num = 0;//买的饮料数量
//	while (money > 0) {
//		money--; // 每次买一瓶饮料花费1元
//		bottle_num++; // 买一瓶饮料增加一瓶
//		buy_num++; // 买的饮料数量增加
//	}
//	while (bottle_num >= 1) {
//		bottle_num --;
//		buy_num++; // 每两瓶空瓶可以换一瓶饮料
//	}
//	printf("可以喝到的饮料总数: %d\n", buy_num);
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
//			arr_even[j] = arr[i]; // 偶数放在arr_even中
//			j++;
//		} else {
//			arr_odd[k] = arr[i]; // 奇数放在arr_odd中
//			k++;
//		}
//	}
//	for(i = 0; i < k; i++) {
//		arr[i] = arr_odd[i]; // 将奇数放回原数组
//	}
//	for(i = k; i-k < j; i++) {
//		arr[i] = arr_even[i-k]; // 将偶数放回原数组
//	}
//}
//int main() {
//	int arr[10] = { 0 };
//	for(int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("原数组为： ");
//	Print(arr);
//	Change(arr);
//	printf("修改后的数组为： ");
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
//    int arr1[1000] = { 0 }; // 初始化为0即可
//    int arr2[1000] = { 0 }; // 初始化为0即可
//    int arr_result[2000] = { 0 };
//    int i = 0, j = 0, k = 0;
//
//    scanf("%d %d", &m, &n);
//
//    // 读取输入数据
//    for (i = 0; i < m; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0;
//
//    // 合并两个有序数组（标准归并排序合并逻辑）
//    while (j < m && k < n) {
//        if (arr1[j] <= arr2[k]) {
//            arr_result[i++] = arr1[j++];
//        }
//        else {
//            arr_result[i++] = arr2[k++];
//        }
//    }    // 处理剩余元素
//    while (j < m) {
//        arr_result[i++] = arr1[j++];
//    }
//    while (k < n) {
//        arr_result[i++] = arr2[k++];
//    }
//
//    // 输出结果
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
//    int is_non_decreasing = 1;  // 非递减标志
//    int is_non_increasing = 1;  // 非递增标志
//
//    for (int i = 0; i < n - 1; i++) {
//        if (arr[i] < arr[i + 1])
//            is_non_increasing = 0;  // 出现升序，破坏非递增
//        else if (arr[i] > arr[i + 1])
//            is_non_decreasing = 0;  // 出现降序，破坏非递减
//    }
//
//    // 只要满足非递增或非递减之一即有序
//    if (is_non_decreasing || is_non_increasing)
//        printf("sorted");
//    else
//        printf("unsorted");
//
//    return 0;
//}



