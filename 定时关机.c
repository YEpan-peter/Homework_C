#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>  // ����Sleep()������system()����
//
//int main() {
//    int minutes;
//    int seconds;
//
//    printf("���Ե���ʱ�ػ�����\n");
//    printf("�����뵹��ʱʱ�䣨���ӣ���");
//    if (scanf("%d", &minutes) != 1) { // ��������Ƿ�Ϊ����
//        printf("������Ч��������һ��������\n");
//        system("pause");
//        return 1;
//    }
//
//    if (minutes <= 0) {
//        printf("ʱ��������0���ӣ�\n");
//        system("pause");
//        return 1;
//    }
//
//    seconds = minutes * 60;
//
//    printf("����ʱ��ʼ������%d���Ӻ�ػ�...\n", minutes);
//    printf("��Ctrl+C����ȡ���ػ�\n");
//
//    // ���ùػ����/t����ָ������ʱʱ�䣬��λ�룩
//    char shutdownCmd[100];
//    sprintf(shutdownCmd, "shutdown -s -t %d", seconds);
//    system(shutdownCmd);
//
//    return 0;
//}