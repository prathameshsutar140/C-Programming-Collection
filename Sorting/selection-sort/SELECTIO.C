#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],min,i,p,s,temp,size;
	printf("enter size of array :\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter %d data :",i+1);
		scanf("%d",&a[i]);
	}
	for(p=0;p<size-1;p++)
	{
		min=p;
		for(s=p+1;s<size;s++)
		{
			if(a[min]>a[s])
			{
				min= s;
			}
		}

		temp=a[p];
		a[p]=a[min];
		a[min]=temp;
	}
	printf("\n--------------sorted array-----------------------\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
	getch();
	clrscr();
}