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
//#define SIZE 10  // ���������С
//
//// ��ʼ��
//void init(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        arr[i] = 0;
//    }
//}
//
//// ��ӡ����
//void print(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//// ����
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
//    printf("����ǰ������: \n");
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    printf("����������: \n");
//    printArray(arr, n);
//
//    return 0;
////}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 3  // ���̴�С
//
//char board[SIZE][SIZE];  // ��Ϸ����
//
//// ��ʼ������
//void initBoard() {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            board[i][j] = ' ';
//        }
//    }
//}
//
//// ��ӡ����
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
//// ��������Ƿ�����
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
//// ����Ƿ�����һ�ʤ
//char checkWin() {
//    // �����
//    for (int i = 0; i < SIZE; i++) {
//        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
//            return board[i][0];
//        }
//    }
//
//    // �����
//    for (int j = 0; j < SIZE; j++) {
//        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
//            return board[0][j];
//        }
//    }
//
//    // ���Խ���
//    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
//        return board[0][0];
//    }
//    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
//        return board[0][2];
//    }
//
//    return ' ';  // û�л�ʤ��
//}
//
//// �������
//void playerMove() {
//    int x, y;
//    while (1) {
//        printf("�������������λ��(�� ��, ��:1 1): ");
//        scanf("%d %d", &x, &y);
//        x--; y--;  // ת��Ϊ��������
//
//        if (x >= 0 && x < SIZE && y >= 0 && y < SIZE && board[x][y] == ' ') {
//            board[x][y] = 'X';
//            break;
//        }
//        else {
//            printf("��Ч������λ�ã����������룡\n");
//        }
//    }
//}

// �������壨�����
//void computerMove() {
//    printf("��������...\n");
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
//    srand(time(0));  // ��ʼ�����������
//
//    initBoard();
//    printf("��������Ϸ��ʼ��\n");
//    printf("����X��������O\n");
//
//    while (1) {
//        printBoard();
//
//        // �������
//        playerMove();
//        if (checkWin() == 'X') {
//            printBoard();
//            printf("��ϲ��Ӯ�ˣ�\n");
//            break;
//        }
//        if (isBoardFull()) {
//            printBoard();
//            printf("ƽ�֣�\n");
//            break;
//        }
//
//        // ��������
//        computerMove();
//        if (checkWin() == 'O') {
//            printBoard();
//            printf("����Ӯ�ˣ�\n");
//            break;
//        }
//        if (isBoardFull()) {
//            printBoard();
//            printf("ƽ�֣�\n");
//            break;
//        }
//    }
//
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // ����Sleep()������system()����

int main() {
    int minutes;
    int seconds;

    printf("���Ե���ʱ�ػ�����\n");
    printf("�����뵹��ʱʱ�䣨���ӣ���");
    if (scanf("%d", &minutes) != 1) { // ��������Ƿ�Ϊ����
        printf("������Ч��������һ��������\n");
        system("pause");
        return 1;
    }

    if (minutes <= 0) {
        printf("ʱ��������0���ӣ�\n");
        system("pause");
        return 1;
    }

    seconds = minutes * 60;

    printf("����ʱ��ʼ������%d���Ӻ�ػ�...\n", minutes);
    printf("��Ctrl+C����ȡ���ػ�\n");

    // ���ùػ����/t����ָ������ʱʱ�䣬��λ�룩
    char shutdownCmd[100];
    sprintf(shutdownCmd, "shutdown -s -t %d", seconds);
    system(shutdownCmd);

    // ��ʾ����ʱ
    while (seconds > 0) {
        int remainingMinutes = seconds / 60;
        int remainingSeconds = seconds % 60;

        printf("\rʣ��ʱ��: %02d:%02d", remainingMinutes, remainingSeconds);
        fflush(stdout);  // ˢ�����������

        Sleep(1000);  // �ȴ�1��
        seconds--;
    }

    printf("\nʱ�䵽�����ڹػ�...\n");
    return 0;
}