#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "�ȳ��ϼ���.";
	printf("%d\n", strchr(a, '��'));

	return 0;
}