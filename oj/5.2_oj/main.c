#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	//字符串倒序输出
	char a[100],b[100];
	gets(a);
	int c = strlen(a);//获取字符串的长度，不会计入结束符'\0'
	int i = 0;
	while (c)
	{
		b[i] = a[c - 1];
		i++;
		c--;
	}
	c = c + strlen(a);

	b[c] = '\0';

    int result = strcmp(a, b);

    if (result < 0)

    {

        printf("%d\n",-1);

    }

    else if (result > 0)

    {

        printf("%d\n", 1);

    }

    else {

        printf("%d\n", 0);

    }

}