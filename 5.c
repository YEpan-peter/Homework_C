#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//
//int main() {
//	int arr[5] = { 0 };
//	int n;
//	for(int i = 1;i<100000;i++){
//		n = (int)log10(i) + 1; // �������� i ��λ��
//		int temp = i;
//		for (int j = n-1; j >=0; j--) {
//			arr[j] = temp % 10;
//			temp /= 10;// ��ȡÿһλ����
//		}
//		int sum = 0;
//		for(int k = 0; k < n; k++) {
//			sum += (int)pow(arr[k],n); // ����ÿһλ���ֵ�λ���η���
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
//	printf("������һ��������1-9����");
//	scanf("%d", &n);
//	int temp = 0;
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		temp += n * (int)pow(10, i);
//		sum += temp;
//	}
//	printf("������Ϊ��%d\n", sum);
//	
//	return 0;
//}