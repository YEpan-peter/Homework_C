#define _CRT_SECURE_NO_WARNINGS 1
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