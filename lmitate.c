#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//char* my_strcpy(char* dest, const char* src) {
//    if (dest == NULL || src == NULL) {
//        return NULL; // �����ָ��
//    }
//
//    char* ret = dest;  // ����Ŀ���ַ�������ʼ��ַ
//    while (*src != '\0') {
//        *dest = *src;  // �����ַ�
//        dest++;
//        src++;
//    }
//    *dest = '\0';  // ����ַ�����ֹ��
//    return ret;    // ����Ŀ���ַ�������ʼ��ַ
//}
//
//int main() {
//    char src[] = "Hello bit!!";
//    char dest[20]; // ȷ��Ŀ�������㹻��
//
//    my_strcpy(dest, src);
//    printf("Copied string: %s\n", dest);
//
//    return 0;
//
// }

//#include <stdio.h>
//
//size_t my_strlen(const char* str) {
//    const char* ptr = str;  // ������ʼ��ַ
//
//    if (str == NULL) {
//        return 0;  // �����ָ��
//    }
//
//    while (*ptr != '\0') {  // �������ַ���ĩβ
//        ptr++;
//    }
//
//    return ptr - str;  // ָ������õ�����
//}
//
//int main() {
//    char str[] = "Hello bit!!!";
//    printf("Length: %zu\n", my_strlen(str));  
//    return 0;
//}