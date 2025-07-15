#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main() {
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {   //�������п��ܵ����
//						if (((b == 2) ^ (a == 3)) && //A: B�ڶ����ҵ���
//							((b == 2) ^ (e == 4)) && //B: �ҵڶ���E����
//							((c == 1) ^ (d == 2)) && //C: �ҵ�һ��D�ڶ�
//							((c == 5) ^ (d == 3)) && //D: C����ҵ���
//							((e == 4) ^ (a == 1)) && //E: �ҵ��ģ�A��һ
//							a != b && a != c && a != d && a != e &&//a,b,c,d,eȫ����ͬ
//							b != c && b != d && b != e && 
//							c != d && c != e &&
//							d != e) {
//							printf("A:%d\nB:%d\nC:%d\nD:%d\nE:%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//



//#include <stdio.h>
//
//// ��鵱ǰ�����Ƿ���������
//int check(int perm[5]) {
//    int A = (perm[1] == 2) + (perm[0] == 3); // A: B�ڶ����ҵ���
//    int B = (perm[1] == 2) + (perm[4] == 4); // B: �ҵڶ���E����
//    int C = (perm[2] == 1) + (perm[3] == 2); // C: �ҵ�һ��D�ڶ�
//    int D = (perm[2] == 5) + (perm[3] == 3); // D: C����ҵ���
//    int E = (perm[4] == 4) + (perm[0] == 1); // E: �ҵ��ģ�A��һ
//    // ÿλѡ�ֵ�����ǡ������һ�루��ֵΪ1��
//    return (A == 1) && (B == 1) && (C == 1) && (D == 1) && (E == 1);
//}
//
//// �ݹ������������в��������
//void permute(int depth, int perm[5], int used[6]) {
//    if (depth == 5) { // ������������
//        if (check(perm)) {
//            printf("A: %d, B: %d, C: %d, D: %d, E: %d\n",
//                perm[0], perm[1], perm[2], perm[3], perm[4]);
//        }
//        return;
//    }
//    // �������п��ܵ����Σ�1-5��
//    for (int i = 1; i <= 5; i++) {
//        if (!used[i]) { // ȷ�����β��ظ�
//            used[i] = 1;    // ���������ʹ��
//            perm[depth] = i; // ���õ�ǰѡ������
//            permute(depth + 1, perm, used); // �ݹ鴦����һѡ��
//            used[i] = 0;    // ����
//        }
//    }
//}
//
//int main() {
//    int perm[5] = { 0 }; // �洢���Σ�perm[0]=A, [1]=B, [2]=C, [3]=D, [4]=E
//    int used[6] = { 0 }; // ��������Ƿ����ã�����1-5��
//    permute(0, perm, used);
//    return 0;
//}


//#include <stdio.h>	

//int main() {
//	int a, b, c, d;
//	for (a = 0; a <= 1; a++) {
//		for (b = 0; b <= 1; b++) {
//			for (c = 0; c <= 1; c++) {
//				for (d = 0; d <= 1; d++) {
//					if (((a == 0) + (c == 1) + (d == 1) + (d == 0) == 3) && ((a + b + c + d) == 1)) {
//						if (a == 1)printf("������A\n");
//						if (b == 1)printf("������B\n");
//						if (c == 1)printf("������C\n");
//						if (d == 1)printf("������D\n");
//					}
//				}
//			}
//		}
//	}
//}

//#include <stdio.h>
//
//int main() {
//    int n;
//    printf("������������ǵ�����: ");
//    scanf("%d", &n);  // ��ȡ�û����������
//
//    // ʹ��һά����洢��ǰ������
//    int arr[100];
//    for (int i = 0; i < n; i++) {
//        // ���㵱ǰ��Ԫ�أ�����������£�
//        arr[i] = 1;  // ÿ�����һ��Ԫ��Ϊ1
//        // �ӵ����ڶ���Ԫ����ǰ���£����⸲��ǰһ�����ݣ�
//        for (int j = i - 1; j > 0; j--) {
//            arr[j] = arr[j] + arr[j - 1];
//        }
//
//        // ��ӡ��ǰ�ո񣨾���Ч����
//        for (int space = 0; space < n - i - 1; space++) {
//            printf("   ");  // ÿ�����ֿ��Ϊ6�ַ����ո���Ϊ3�ַ�
//        }
//
//        // ��ӡ��ǰ������Ԫ��
//        for (int k = 0; k <= i; k++) {
//            printf("%6d", arr[k]);  // ÿ������ռ6�ַ����
//        }
//        printf("\n");  // ���е���һ��
//    }
//
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

// �ݹ������������е�row�С���col�е�ֵ
int pascalValue(int row, int col) {
    // ÿ�еĵ�һ�������һ��Ԫ��ֵΪ1
    if (col == 0 || col == row) {
        return 1;
    }
    // ����Ԫ�ص�����һ��ͬ��λ�ú�ǰһ��λ��ֵ֮��
    return pascalValue(row - 1, col - 1) + pascalValue(row - 1, col);
}

// �ݹ��ӡ�������
void printPascalTriangle(int n, int currentRow) {
    if (currentRow >= n) {
        return; // �ݹ�����������Ѵ�ӡ
    }

    // ��ӡ��ǰ�ո񣨾��ж��룩
    for (int i = 0; i < n - currentRow - 1; i++) {
        printf("   ");
    }

    // ��ӡ��ǰ�е�����Ԫ��
    for (int j = 0; j <= currentRow; j++) {
        printf("%6d", pascalValue(currentRow, j));
    }
    printf("\n");

    // �ݹ��ӡ��һ��
    printPascalTriangle(n, currentRow + 1);
}

int main() {
    int n;
    printf("������������ǵ�����: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("�����������0��\n");
        return 1;
    }

    printf("\n%d���������:\n\n", n);
    printPascalTriangle(n, 0);

    return 0;
}