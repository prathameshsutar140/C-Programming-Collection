#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,size,key,flag=0;

	printf("enter a size");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter %d number",i+1);
		scanf("%d",&a[i]);

	}
	printf("enter searchimg element ");
	scanf("%d",&key);

	for(i=0;i<=size;i++)
	{
		if(key==a[i])
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