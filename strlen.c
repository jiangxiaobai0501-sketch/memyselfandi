#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    size_t len;

    scanf("%19s", a);

    len = strlen(a);

    printf("字符串长度：%zu", len);

    return 0;
}