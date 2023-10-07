#include<stdio.h>

main()
{
	int *p;
	char data[1000];
	p = fopen("D:\\demo.txt","w");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("enter your data = ");
		gets(data);
		fputs(data,p);
		printf("data add successfully...");
	}
	fclose(p);
}
