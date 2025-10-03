#include <stdio.h>
int main()
{
	char jia,yi;
	scanf("%c %c",&jia,&yi);
	if(jia == yi)
	{
		printf("DEUCE");
	}
	else  if((jia=='S'&&yi=='J')||(jia=='J'&&yi=='B')||(jia=='B'&&yi=='S'))
	       {
		   	printf("FIRST");
		   }
		  else
		  {
		  	printf("SECOND");
		  }  	
	return 0;
}

