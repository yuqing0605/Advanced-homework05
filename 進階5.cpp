#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a[1000],s[1000],k[1000];
	
	int user,i=0,x,num,d=1,m=0;
	
	printf("�п�J�@�ӤQ�i���:");
	scanf("%d",&user);
	x=user;
	
	while(x>0) 
	
	{ 	a[i]=x%2; 
		x=x/2; 
		i++; 	}

	printf("2�i��");

	while(i>0)
	
	{	printf("%d",a[i-1]);
		i--; 	}
	
	getchar();
	printf("\n8�i��:%o\n",user);
	printf("16�i��:%x\n",user);
	printf("�п�J�@�ӤG�i���:");

	for(m=0;m<=100;m++)
	
	{
		s[m]=getchar();
		if(s[m]== '\n')
		{break;}
	}

	for(int y=m-1;y>=0;y--)
	
	{	num=num+(s[y]-48)*d;		
		d=d*2;	}
	
	printf("10�i��:%d\n",num);
	printf("8�i��:%o\n",num);
	printf("16�i��:%x\n",num);
	printf("�п�J�@�ӤQ���i���:");

	d=1;
	num=0;
	for(m=0;m<=100;m++)
	
	{
		k[m]=getchar();
		if(k[m]== '\n')
		{break;}
	}
	
	for(int y=m-1;y>=0;y--)	
	
	{	if(k[y]>57)
		{num=num+(k[y]-87)*d;}
		else
		{num=num+(k[y]-48)*d;}		
		d=d*16;}
	
	x=num;
	while(x>0) 
	
	{ a[i]=x%2; 
		x=x/2; 
		i++; }
	
	printf("2�i��");
	while(i>0)
	
	{printf("%d",a[i-1]);
		i--; }
	
	printf("\n8�i��:%o\n",num);
	printf("10�i��:%d\n",num);	
	system("pause");
	return 0;
}
