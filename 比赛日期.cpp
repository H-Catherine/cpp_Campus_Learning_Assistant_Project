 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	scanf("%d %d %d",&a,&b,&c);
 	b++;
 	if(b>31) 
 	  {b=1,a++; if(a>12)a=1,c++;}
 	else if( (b>30) && (a==4||a==6||a==9||a==11) )
 	       {a++,b=1;}
 	     else if(a==2)
 	         {if( (c%4==0&&c%100!=0)||(c%400==0) && (b==29 ));
 	          else {b=1,a++;}};
 	printf("%d/%d/%d",a,b,c);
 	return 0;
 }




