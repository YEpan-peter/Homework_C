#include <stddef.h> // �ṩ size_t ����

void* my_memchr(const void* ptr, int value, size_t num) {
    // �� void* ת��Ϊ unsigned char* ��֧�����ֽڷ���
    const unsigned char* p = (unsigned char*)ptr;
    // ��Ŀ���ַ�תΪ unsigned char �����������
    unsigned char target = (unsigned char)value;

    // �����ڴ���е�ÿ���ֽ�
    for (size_t i = 0; i < num; i++) {
        // �ҵ�ƥ���ַ������ص�ǰ��ַ
        if (p[i] == target) {
            return (void*)(p + i); // ����ת������ԭ��
        }
    }

    // ɨ�����δ�ҵ������� NULL
    return NULL;
}

int my_memcmp(const void* ptr1, const void* ptr2, size_t num) {
    // ת��Ϊ�޷����ֽ�ָ��
    const unsigned char* p1 = (const unsigned char*)ptr1;
    const unsigned char* p2 = (const unsigned char*)ptr2;

    // ���ֽڱȽ�
    for (size_t i = 0; i < num; i++) {
        if (p1[i] != p2[i]) {
            // ���ز�ֵ�����ž�����С��ϵ��
            return (int)(p1[i] - p2[i]);
        }
    }
    return 0; // ȫ��ƥ��
}

void* my_memcpy(void* destination, const void* source, size_t num) {
    // ת��Ϊ�ֽ�ָ�루��С��Ѱַ��Ԫ��
    char* d = (char*)destination;
    const char* s = (char*)source;

    // ���ֽڸ���
    for (size_t i = 0; i < num; i++) {
        d[i] = s[i];
    }

    return destination;
}

void* my_memmove(void* destination, const void* source, size_t num) {
    char* d = (char* )destination;
    const char* s = (char*) source;

    // �����ص��ĺ����߼�
    if (d < s) {
        // Ŀ���ַ��Դ��ַǰ -> ��ǰ������
        for (size_t i = 0; i < num; i++) {
            d[i] = s[i];
        }
    }
    else if (d > s) {
        // Ŀ���ַ��Դ��ַ�� -> �Ӻ���ǰ����
        for (size_t i = num; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }
    // d == s ʱ���踴��

    return destination;
}

void* my_memset(void* ptr, int value, size_t num) {
    unsigned char* p = (unsigned char*)ptr;
    unsigned char uc = (unsigned char)value; // ȷ��ʹ�õ�8λ

    for (size_t i = 0; i < num; i++) {
        p[i] = uc;
    }

    return ptr;
}

char* my_strcat(char* destination, const char* source) {
    // ������ʼ��ַ���ڷ���
    char* dest = destination;
    // ���ڶ�ָ����޸�
    char* src = (char*)source;

    // ��λ��dest�Ľ�β���ҵ�'\0'��
    while (*dest != '\0') {
        dest++;
    }

    // ����src���ݣ�����'\0'��
    while (*src != '\0') {
        *dest = *source;
        dest++;
        src++;
    }
    *dest = '\0'; // �����ֹ��

    return destination;
}

char* my_strncat(char* destination, const char* source, size_t num) {
    if (num == 0) return destination;  // �����������

    char* d = destination;
    // ��λ��destination�Ľ�β
    while (*d != '\0') d++;

    // �������num���ַ�
    while (num-- && *source != '\0') {
        *d++ = *source++;
    }

    *d = '\0';  // ȷ���Կ��ַ���β
    return destination;
}

char* my_strchr(const char* str, int character) {
    // ��int cתΪchar��ȡ��8λ��
    char ch = (char)character;

    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str; // ǿ��ȥ��const
        }
        str++;
    }

    // ����Ƿ���������ֹ��
    if (ch == '\0') {
        return (char*)str; // ����ָ��'\0'��ָ��
    }

    return NULL; // δ�ҵ�
}

char* my_strrchr(const char* str, int character) {
    char* last_occurrence = NULL;  // ��¼���һ��ƥ���λ��
    char ch = (char)character;             // �� int ת��Ϊ char

    if (str == NULL) {             // �����ָ������
        return NULL;
    }

    do {
        if (*str == ch) {
            last_occurrence = (char*)str;  // ����ƥ��λ��
        }
    } while (*str++);              // ����ֱ���ַ�����β������ '\0'��

    return last_occurrence;        // �������һ��ƥ���ָ�루�� NULL��
}

int my_strcmp(const char* str1, const char* str2) {
    // ת��Ϊ unsigned char* ȷ����ȷ����ֵ�ַ�
    const unsigned char* p1 = (const unsigned char*)str1;
    const unsigned char* p2 = (const unsigned char*)str2;

    // ���ֽڱȽ�ֱ�����ֲ��������'\0'
    while (*p1 && *p1 == *p2) {
        p1++;
        p2++;
    }

    // ���ز�ֵ�����ϱ�׼����ֵ����
    return *p1 - *p2;
}

int my_strncmp(const char* str1, const char* str2, size_t num) {
    if (num == 0) return 0;  // �Ƚ�0���ַ��������

    // ת��Ϊ unsigned char* ���������չ����
    const unsigned char* p1 = (const unsigned char*)str1;
    const unsigned char* p2 = (const unsigned char*)str2;

    while (num-- > 0) {
        if (*p1 != *p2)
            return *p1 - *p2;  // ���ֲ�����������

        if (*p1 == '\0')
            break;  // ��һ�ַ�����������ֹ

        p1++;
        p2++;
    }
    return 0;  // ǰn���ַ���ȫƥ��
}

char* my_strcpy(char* destination, const char* source) {
    char* start = destination;
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';  // �����˽�β��'\0'
    return start;
}

char* my_strncpy(char* destination, const char* source, size_t num) {
    size_t i = 0;
    while (i < num && source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    // ��� source ����С�� n���� '\0'
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
    return i;  // û��ƥ�䣬�������� str1 �ĳ���
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
    return p - str;  // ָ��������õ�����
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
        return (char*)str1;  // ���Ӵ�
    }

    while (*str1) {
        const char* h = str1;
        const char* n = str2;

        while (*h && *n && *h == *n) {
            h++;
            n++;
        }

        if (!*n) {
            return (char*)str1;  // �ҵ�����ƥ��
        }

        str1++;
    }

    return NULL;  // û���ҵ�
}

char* my_strtok(char* str, const char* delimiters) {
    // ��ָ̬�룬��¼��ǰ����λ��
    static char* next_token = NULL;

    // ��strΪNULL�Ҿ�ָ̬���ѽ���������NULL
    if (str == NULL && (next_token == NULL || *next_token == '\0')) {
        return NULL;
    }

    // ��str��NULL����ʼ����ָ̬��
    if (str != NULL) {
        next_token = str;
    }

    // ������ʼ�ķָ���
    next_token += my_strspn(next_token, delimiters);

    // ��ʣ���ַ���Ϊ�գ�����NULL
    if (*next_token == '\0') {
        next_token = NULL;
        return NULL;
    }

    // ��¼�Ӵ���ʼλ��
    char* token_start = next_token;

    // ������һ���ָ���λ��
    next_token += my_strcspn(next_token, delimiters);

    // ��δ���ַ�����β���滻�ָ���Ϊ\0������ָ��
    if (*next_token != '\0') {
        *next_token = '\0';
        next_token++;
    }
    else {
        // �ѵ���β���´η���NULL
        next_token = NULL;
    }

    return token_start;
}