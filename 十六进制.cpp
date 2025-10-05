#include<stdio.h>
int main()
{
	char X;
	scanf("%s",&X);//%c也可以，但只读单个字符，而%s读完整字符
	if(X>='A'&&X<='F')//单独考虑10-15之间的数
	{
		printf("%d",X-55);//55对应16进制中的A
	}
	else
	{
		printf("%d",X-48);//48对应16进制中的0
	}
	return 0;
}
