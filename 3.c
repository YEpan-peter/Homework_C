#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%zd\n", sizeof(arr));
//    return 0;
//}
//#include <stdio.h>
//
//#define SIZE 10  // 定义数组大小
//
//// 初始化
//void init(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        arr[i] = 0;
//    }
//}
//
//// 打印数组
//void print(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//// 逆置
//void reverse(int arr[], int size) {
//    int left = 0;
//    int right = size - 1;
//    while (left < right) {
//        int temp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = temp;
//        left++;
//        right--;
//    }
//}
//int main() {
//    int arr[SIZE];
//    init(arr, SIZE);
//    print(arr, SIZE); 
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = i + 1;
//    }
//    print(arr, SIZE); 
//    reverse(arr, SIZE);
//    print(arr, SIZE);  
//    return 0;
////}
//#include <stdio.h>
//void bubbleSort(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {          
//        for (int j = 0; j < n - 1 - i; j++) {  
//            if (arr[j] > arr[j + 1]) {         
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    printf("排序前的数组: \n");
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    printf("排序后的数组: \n");
//    printArray(arr, n);
//
//    return 0;
////}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 3  // 棋盘大小
//
//char board[SIZE][SIZE];  // 游戏棋盘
//
//// 初始化棋盘
//void initBoard() {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            board[i][j] = ' ';
//        }
//    }
//}
//
//// 打印棋盘
//void printBoard() {
//    printf("\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//        if (i < SIZE - 1) {
//            printf("---|---|---\n");
//        }
//    }
//    printf("\n");
//}
//
//// 检查棋盘是否已满
//int isBoardFull() {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            if (board[i][j] == ' ') {
//                return 0;
//            }
//        }
//    }
//    return 1;
//}
//
//// 检查是否有玩家获胜
//char checkWin() {
//    // 检查行
//    for (int i = 0; i < SIZE; i++) {
//        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
//            return board[i][0];
//        }
//    }
//
//    // 检查列
//    for (int j = 0; j < SIZE; j++) {
//        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
//            return board[0][j];
//        }
//    }
//
//    // 检查对角线
//    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
//        return board[0][0];
//    }
//    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
//        return board[0][2];
//    }
//
//    return ' ';  // 没有获胜者
//}
//
//// 玩家走棋
//void playerMove() {
//    int x, y;
//    while (1) {
//        printf("请输入你的走棋位置(行 列, 如:1 1): ");
//        scanf("%d %d", &x, &y);
//        x--; y--;  // 转换为数组索引
//
//        if (x >= 0 && x < SIZE && y >= 0 && y < SIZE && board[x][y] == ' ') {
//            board[x][y] = 'X';
//            break;
//        }
//        else {
//            printf("无效的走棋位置，请重新输入！\n");
//        }
//    }
//}

// 电脑走棋（随机）
//void computerMove() {
//    printf("电脑走棋...\n");
//
//    int x, y;
//    do {
//        x = rand() % SIZE;
//        y = rand() % SIZE;
//    } while (board[x][y] != ' ');
//
//    board[x][y] = 'O';
//}
//
//int main() {
//    srand(time(0));  // 初始化随机数种子
//
//    initBoard();
//    printf("三子棋游戏开始！\n");
//    printf("你是X，电脑是O\n");
//
//    while (1) {
//        printBoard();
//
//        // 玩家走棋
//        playerMove();
//        if (checkWin() == 'X') {
//            printBoard();
//            printf("恭喜你赢了！\n");
//            break;
//        }
//        if (isBoardFull()) {
//            printBoard();
//            printf("平局！\n");
//            break;
//        }
//
//        // 电脑走棋
//        computerMove();
//        if (checkWin() == 'O') {
//            printBoard();
//            printf("电脑赢了！\n");
//            break;
//        }
//        if (isBoardFull()) {
//            printBoard();
//            printf("平局！\n");
//            break;
//        }
//    }
//
//    return 0;
////}
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>  // 用于Sleep()函数和system()函数
//
//int main() {
//    int minutes;
//    int seconds;
//
//    printf("电脑倒计时关机程序\n");
//    printf("请输入倒计时时间（分钟）：");
//    if (scanf("%d", &minutes) != 1) { // 检查输入是否为整数
//        printf("输入无效，请输入一个整数！\n");
//        system("pause");
//        return 1;
//    }
//
//    if (minutes <= 0) {
//        printf("时间必须大于0分钟！\n");
//        system("pause");
//        return 1;
//    }
//
//    seconds = minutes * 60;
//
//    printf("倒计时开始，将在%d分钟后关机...\n", minutes);
//    printf("按Ctrl+C可以取消关机\n");
//
//    // 设置关机命令（/t参数指定倒计时时间，单位秒）
//    char shutdownCmd[100];
//    sprintf(shutdownCmd, "shutdown -s -t %d", seconds);
//    system(shutdownCmd);
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int a = 343, b = 156;
//
//    printf("Before swap: a = %d, b = %d\n", a, b);
//
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//
//    printf("After swap: a = %d, b = %d\n", a, b);
//
//    return 0;
//}

//#include <stdio.h>
//
//int countOnes(int n) {
//    int count = 0;
//    for (int i = 0; i < 32; i++) {
//        if (n & (1 << i)) {  // 检查第 i 位是否为 1
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", countOnes(n));
//    return 0;
//}
//#include <stdio.h>
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        int count = 0;
//        for (int i = 0; i < 32; i++) {
//            if (n & (1 << i)) {
//                count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}

//
//#include <stdio.h>
//
//void printBinaryDigits(int num) {
//    printf("二进制表示: ");
//    // 打印完整32位二进制
//    for (int i = 31; i >= 0; i--) {
//        printf("%d", (num >> i) & 1);
//    }
//    printf("\n");
//
//    printf("偶数位(0、2、4...30位): ");
//    for (int i = 30; i >= 0; i -= 2) {  // 从最高偶数位开始
//        printf("%d", (num >> i) & 1);
//    }
//    printf("\n");
//
//    printf("奇数位(1、3、5...31位): ");
//    for (int i = 31; i >= 1; i -= 2) {  // 从最高奇数位开始
//        printf("%d", (num >> i) & 1);
//    }
//    printf("\n");
//}
//
//int main() {
//    int num;
//    printf("请输入一个整数: ");
//    scanf("%d", &num);
//
//    printBinaryDigits(num);
//
//    return 0;
////}
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) {
//        int count = 0;
//        int i = 0;
//        for (i = 0; i < 32; i++) {
//            if (((a >> i) & 1) == ((b >> i) & 1)) {
//                count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
////}
//
//#include <stdio.h>
//
//int count(int n) {
//	if (n == 1) return 1;
//	else if (n == 2) return 2;
//	else return (count(n - 1) + count(n - 2));
//	
//}
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		printf("%d\n", count(n));
//	}
//	return 0;
//}