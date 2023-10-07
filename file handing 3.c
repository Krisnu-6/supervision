#include<stdio.h>

main()
{
	int *p;
	char data[1000];
	p = fopen("D:\\demo.txt","a");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("enter your data = ");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add successfully...");
	}
	fclose(p);
	
	printf("\n-----Data Add-----\n");
	
	p = fopen("D:\\hello.txt","r");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		while(fgets(data,20,p) != 0)
		{
			printf("%s",data);
		}
	}
	fcolse(p);
}
