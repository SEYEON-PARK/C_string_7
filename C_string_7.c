#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "안녕하세요.";
	printf("%d\n", strchr(a, '하'));

	return 0;
}