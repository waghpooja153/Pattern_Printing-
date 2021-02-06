#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	
	printf("\n ====== Pattern ======\n\n");
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
				if(i==1 || j==1 || i==5 || j==5)
				{
					printf(" * ");
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