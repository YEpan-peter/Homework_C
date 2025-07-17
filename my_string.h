#include <stddef.h> // 提供 size_t 类型

void* my_memchr(const void* ptr, int value, size_t num) {
    // 将 void* 转换为 unsigned char* 以支持逐字节访问
    const unsigned char* p = (unsigned char*)ptr;
    // 将目标字符转为 unsigned char 避免符号问题
    unsigned char target = (unsigned char)value;

    // 遍历内存块中的每个字节
    for (size_t i = 0; i < num; i++) {
        // 找到匹配字符，返回当前地址
        if (p[i] == target) {
            return (void*)(p + i); // 类型转换保持原型
        }
    }

    // 扫描完成未找到，返回 NULL
    return NULL;
}

int my_memcmp(const void* ptr1, const void* ptr2, size_t num) {
    // 转换为无符号字节指针
    const unsigned char* p1 = (const unsigned char*)ptr1;
    const unsigned char* p2 = (const unsigned char*)ptr2;

    // 逐字节比较
    for (size_t i = 0; i < num; i++) {
        if (p1[i] != p2[i]) {
            // 返回差值（符号决定大小关系）
            return (int)(p1[i] - p2[i]);
        }
    }
    return 0; // 全部匹配
}

void* my_memcpy(void* destination, const void* source, size_t num) {
    // 转换为字节指针（最小可寻址单元）
    char* d = (char*)destination;
    const char* s = (char*)source;

    // 逐字节复制
    for (size_t i = 0; i < num; i++) {
        d[i] = s[i];
    }

    return destination;
}

void* my_memmove(void* destination, const void* source, size_t num) {
    char* d = (char* )destination;
    const char* s = (char*) source;

    // 处理重叠的核心逻辑
    if (d < s) {
        // 目标地址在源地址前 -> 从前往后复制
        for (size_t i = 0; i < num; i++) {
            d[i] = s[i];
        }
    }
    else if (d > s) {
        // 目标地址在源地址后 -> 从后往前复制
        for (size_t i = num; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }
    // d == s 时无需复制

    return destination;
}

void* my_memset(void* ptr, int value, size_t num) {
    unsigned char* p = (unsigned char*)ptr;
    unsigned char uc = (unsigned char)value; // 确保使用低8位

    for (size_t i = 0; i < num; i++) {
        p[i] = uc;
    }

    return ptr;
}

char* my_strcat(char* destination, const char* source) {
    // 保存起始地址用于返回
    char* dest = destination;
    // 便于对指针的修改
    char* src = (char*)source;

    // 定位到dest的结尾（找到'\0'）
    while (*dest != '\0') {
        dest++;
    }

    // 复制src内容（包括'\0'）
    while (*src != '\0') {
        *dest = *source;
        dest++;
        src++;
    }
    *dest = '\0'; // 添加终止符

    return destination;
}

char* my_strncat(char* destination, const char* source, size_t num) {
    if (num == 0) return destination;  // 特殊情况处理

    char* d = destination;
    // 定位到destination的结尾
    while (*d != '\0') d++;

    // 复制最多num个字符
    while (num-- && *source != '\0') {
        *d++ = *source++;
    }

    *d = '\0';  // 确保以空字符结尾
    return destination;
}

char* my_strchr(const char* str, int character) {
    // 将int c转为char（取低8位）
    char ch = (char)character;

    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str; // 强制去除const
        }
        str++;
    }

    // 检查是否在搜索终止符
    if (ch == '\0') {
        return (char*)str; // 返回指向'\0'的指针
    }

    return NULL; // 未找到
}

char* my_strrchr(const char* str, int character) {
    char* last_occurrence = NULL;  // 记录最后一次匹配的位置
    char ch = (char)character;             // 将 int 转换为 char

    if (str == NULL) {             // 处理空指针输入
        return NULL;
    }

    do {
        if (*str == ch) {
            last_occurrence = (char*)str;  // 更新匹配位置
        }
    } while (*str++);              // 遍历直到字符串结尾（包括 '\0'）

    return last_occurrence;        // 返回最后一次匹配的指针（或 NULL）
}

int my_strcmp(const char* str1, const char* str2) {
    // 转换为 unsigned char* 确保正确处理负值字符
    const unsigned char* p1 = (const unsigned char*)str1;
    const unsigned char* p2 = (const unsigned char*)str2;

    // 逐字节比较直到出现差异或遇到'\0'
    while (*p1 && *p1 == *p2) {
        p1++;
        p2++;
    }

    // 返回差值（符合标准返回值规则）
    return *p1 - *p2;
}

int my_strncmp(const char* str1, const char* str2, size_t num) {
    if (num == 0) return 0;  // 比较0个字符总是相等

    // 转换为 unsigned char* 避免符号扩展问题
    const unsigned char* p1 = (const unsigned char*)str1;
    const unsigned char* p2 = (const unsigned char*)str2;

    while (num-- > 0) {
        if (*p1 != *p2)
            return *p1 - *p2;  // 发现差异立即返回

        if (*p1 == '\0')
            break;  // 任一字符串结束则终止

        p1++;
        p2++;
    }
    return 0;  // 前n个字符完全匹配
}

char* my_strcpy(char* destination, const char* source) {
    char* start = destination;
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';  // 别忘了结尾的'\0'
    return start;
}

char* my_strncpy(char* destination, const char* source, size_t num) {
    size_t i = 0;
    while (i < num && source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    // 如果 source 长度小于 n，则补 '\0'
    while (i < num) {
        destination[i++] = '\0';
    }
    return destination;
}

size_t my_strcspn(const char* str1, const char* str2) {
    size_t i = 0;
    while (str1[i]) {
        for (size_t j = 0; str2[j]; j++) {
            if (str1[i] == str2[j]) {
                return i;
            }
        }
        i++;
    }
    return i;  // 没有匹配，返回整个 str1 的长度
}

size_t my_strspn(const char* str1, const char* str2) {
    size_t i = 0;
    while (str1[i]) {
        int found = 0;
        for (size_t j = 0; str2[j]; j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) break;
        i++;
    }
    return i;
}

size_t my_strlen(const char* str) {
    const char* p = str;
    while (*p) {
        p++;
    }
    return p - str;  // 指针相减，得到长度
}

char* my_strpbrk(const char* str1, const char* str2) {
    while (*str1) {
        const char* p = str2;
        while (*p) {
            if (*str1 == *p)
                return (char*)str1;
            p++;
        }
        str1++;
    }
    return NULL;
}

char* my_strstr(const char* str1, const char* str2) {
    if (!*str2) {
        return (char*)str1;  // 空子串
    }

    while (*str1) {
        const char* h = str1;
        const char* n = str2;

        while (*h && *n && *h == *n) {
            h++;
            n++;
        }

        if (!*n) {
            return (char*)str1;  // 找到完整匹配
        }

        str1++;
    }

    return NULL;  // 没有找到
}

char* my_strtok(char* str, const char* delimiters) {
    // 静态指针，记录当前处理位置
    static char* next_token = NULL;

    // 若str为NULL且静态指针已结束，返回NULL
    if (str == NULL && (next_token == NULL || *next_token == '\0')) {
        return NULL;
    }

    // 若str非NULL，初始化静态指针
    if (str != NULL) {
        next_token = str;
    }

    // 跳过起始的分隔符
    next_token += my_strspn(next_token, delimiters);

    // 若剩余字符串为空，返回NULL
    if (*next_token == '\0') {
        next_token = NULL;
        return NULL;
    }

    // 记录子串起始位置
    char* token_start = next_token;

    // 查找下一个分隔符位置
    next_token += my_strcspn(next_token, delimiters);

    // 若未到字符串结尾，替换分隔符为\0并后移指针
    if (*next_token != '\0') {
        *next_token = '\0';
        next_token++;
    }
    else {
        // 已到结尾，下次返回NULL
        next_token = NULL;
    }

    return token_start;
}