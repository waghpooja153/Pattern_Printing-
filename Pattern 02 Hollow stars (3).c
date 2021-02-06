#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,r=5,c=7;
	
	printf("\n ====== Pattern ======\n\n");
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
				if(i==1 || j==1 || i==r || j==c)
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