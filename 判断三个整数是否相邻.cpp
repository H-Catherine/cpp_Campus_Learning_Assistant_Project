#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max,mid,min;
	if(a==b||a==c||b==c)
	{printf("WRONG DATA");}
	else
	{
	max =(a>b)?((a>c)?a:c):((b>c)?b:c);
	min =(a<b)?((a<c)?a:c):((b<c)?b:c);
	mid =a+b+c-max-min;
	     if(max==mid+1&&max==min+2&&mid==min+1)
	        {
				printf("TRUE");
	         }
		  else
		  {printf("FALSE");}
	}	 	
	return 0;
}
