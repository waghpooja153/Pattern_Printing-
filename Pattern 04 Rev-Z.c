#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,c=0;
	
	printf("Enter column value for Reverse Z pattern:");
	scanf("%d",&c);
	
	printf("\n ====== Pattern ======\n\n");
	
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==1 || i==c || i==j)
			{
				printf(" @ ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n\n");
	}
	printf("\n=====================\n");
	getch();
	return 0;
}