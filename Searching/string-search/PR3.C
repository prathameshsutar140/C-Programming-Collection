#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10][10],key[10];
	int i,size,flag=0;

	printf("enter a size");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter %d number",i+1);
		scanf("%s",&a[i]);

	}
	printf("enter searchimg element ");
	scanf("%s",&key);

	for(i=0;i<=size;i++)
	{
		if(strcmp(a[i],key)==0)
		{
		      printf("element found");
		      flag=1;
		}



	}
	if(flag==0)
	{
		printf("element not found");
	}
	getch();
	clrscr();
}