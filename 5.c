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