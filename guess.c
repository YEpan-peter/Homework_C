#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main() {
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {   //遍历所有可能的情况
//						if (((b == 2) ^ (a == 3)) && //A: B第二，我第三
//							((b == 2) ^ (e == 4)) && //B: 我第二，E第四
//							((c == 1) ^ (d == 2)) && //C: 我第一，D第二
//							((c == 5) ^ (d == 3)) && //D: C最后，我第三
//							((e == 4) ^ (a == 1)) && //E: 我第四，A第一
//							a != b && a != c && a != d && a != e &&//a,b,c,d,e全不相同
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
//// 检查当前排列是否满足条件
//int check(int perm[5]) {
//    int A = (perm[1] == 2) + (perm[0] == 3); // A: B第二，我第三
//    int B = (perm[1] == 2) + (perm[4] == 4); // B: 我第二，E第四
//    int C = (perm[2] == 1) + (perm[3] == 2); // C: 我第一，D第二
//    int D = (perm[2] == 5) + (perm[3] == 3); // D: C最后，我第三
//    int E = (perm[4] == 4) + (perm[0] == 1); // E: 我第四，A第一
//    // 每位选手的条件恰好满足一半（即值为1）
//    return (A == 1) && (B == 1) && (C == 1) && (D == 1) && (E == 1);
//}
//
//// 递归生成所有排列并检查条件
//void permute(int depth, int perm[5], int used[6]) {
//    if (depth == 5) { // 生成完整排列
//        if (check(perm)) {
//            printf("A: %d, B: %d, C: %d, D: %d, E: %d\n",
//                perm[0], perm[1], perm[2], perm[3], perm[4]);
//        }
//        return;
//    }
//    // 尝试所有可能的名次（1-5）
//    for (int i = 1; i <= 5; i++) {
//        if (!used[i]) { // 确保名次不重复
//            used[i] = 1;    // 标记名次已使用
//            perm[depth] = i; // 设置当前选手名次
//            permute(depth + 1, perm, used); // 递归处理下一选手
//            used[i] = 0;    // 回溯
//        }
//    }
//}
//
//int main() {
//    int perm[5] = { 0 }; // 存储名次：perm[0]=A, [1]=B, [2]=C, [3]=D, [4]=E
//    int used[6] = { 0 }; // 标记名次是否已用（索引1-5）
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
//						if (a == 1)printf("凶手是A\n");
//						if (b == 1)printf("凶手是B\n");
//						if (c == 1)printf("凶手是C\n");
//						if (d == 1)printf("凶手是D\n");
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
//    printf("请输入杨辉三角的行数: ");
//    scanf("%d", &n);  // 获取用户输入的行数
//
//    // 使用一维数组存储当前行数据
//    int arr[100];
//    for (int i = 0; i < n; i++) {
//        // 计算当前行元素（从右向左更新）
//        arr[i] = 1;  // 每行最后一个元素为1
//        // 从倒数第二个元素向前更新（避免覆盖前一行数据）
//        for (int j = i - 1; j > 0; j--) {
//            arr[j] = arr[j] + arr[j - 1];
//        }
//
//        // 打印行前空格（居中效果）
//        for (int space = 0; space < n - i - 1; space++) {
//            printf("   ");  // 每个数字宽度为6字符，空格宽度为3字符
//        }
//
//        // 打印当前行所有元素
//        for (int k = 0; k <= i; k++) {
//            printf("%6d", arr[k]);  // 每个数字占6字符宽度
//        }
//        printf("\n");  // 换行到下一行
//    }
//
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

// 递归计算杨辉三角中第row行、第col列的值
int pascalValue(int row, int col) {
    // 每行的第一个和最后一个元素值为1
    if (col == 0 || col == row) {
        return 1;
    }
    // 其他元素等于上一行同列位置和前一列位置值之和
    return pascalValue(row - 1, col - 1) + pascalValue(row - 1, col);
}

// 递归打印杨辉三角
void printPascalTriangle(int n, int currentRow) {
    if (currentRow >= n) {
        return; // 递归基：所有行已打印
    }

    // 打印行前空格（居中对齐）
    for (int i = 0; i < n - currentRow - 1; i++) {
        printf("   ");
    }

    // 打印当前行的所有元素
    for (int j = 0; j <= currentRow; j++) {
        printf("%6d", pascalValue(currentRow, j));
    }
    printf("\n");

    // 递归打印下一行
    printPascalTriangle(n, currentRow + 1);
}

int main() {
    int n;
    printf("请输入杨辉三角的行数: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("行数必须大于0！\n");
        return 1;
    }

    printf("\n%d行杨辉三角:\n\n", n);
    printPascalTriangle(n, 0);

    return 0;
}