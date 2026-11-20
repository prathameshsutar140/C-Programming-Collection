#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],size,i,p,s,temp,flag=0;
	printf("enter a size of a array");
	scanf("%d",&size);
	printf("enter %d element ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(p=0;p<size-1;p++)
	{
		flag=0;
		for(s=0;s<size-p-1;s++)
		{
			if(a[5]>a[s+1])
			{
				temp=a[s];
				a[s+1]=a[s+1];
				a[s+1]=temp;
				flag++;
			}
		}
		if(flag==0)
		{
			break;
		}

	}
	printf("-----sorted array ----\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	clrscr();
}