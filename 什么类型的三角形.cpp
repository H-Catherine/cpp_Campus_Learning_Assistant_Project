#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max,mid,min;
	max =(a>b)?((a>c)?a:c):((b>c)?b:c);
	min =(a<b)?((a<c)?a:c):((b<c)?b:c);
	mid =a+b+c-max-min;
	if(a<0||b<0||c<0||a+b<=c||a+c<=b||b+c<=a)
		{
			printf("FALSE");
		}	
	if(max*max==min*min+mid*mid)
	{
		printf("zhi jiao");
	}
	if(max*max<min*min+mid*mid)
	{
		printf("rui jiao");
	}
	if(max*max>min*min+mid*mid)
	{
		printf("dun jiao");
	}
	return 0;
}
