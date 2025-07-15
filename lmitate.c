#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//char* my_strcpy(char* dest, const char* src) {
//    if (dest == NULL || src == NULL) {
//        return NULL; // 处理空指针
//    }
//
//    char* ret = dest;  // 保存目标字符串的起始地址
//    while (*src != '\0') {
//        *dest = *src;  // 复制字符
//        dest++;
//        src++;
//    }
//    *dest = '\0';  // 添加字符串终止符
//    return ret;    // 返回目标字符串的起始地址
//}
//
//int main() {
//    char src[] = "Hello bit!!";
//    char dest[20]; // 确保目标数组足够大
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
//    const char* ptr = str;  // 保存起始地址
//
//    if (str == NULL) {
//        return 0;  // 处理空指针
//    }
//
//    while (*ptr != '\0') {  // 遍历到字符串末尾
//        ptr++;
//    }
//
//    return ptr - str;  // 指针相减得到长度
//}
//
//int main() {
//    char str[] = "Hello bit!!!";
//    printf("Length: %zu\n", my_strlen(str));  
//    return 0;
//}