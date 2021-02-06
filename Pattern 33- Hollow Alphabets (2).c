#include<stdio.h>
#include<conio.h>

int main()
{
	int i=0,j=0,c=0;
	char ch='A';
	
	printf("Enter a value for pattern=");
	scanf("%d",&c);
	
	printf("\n ====== Pattern ======\n\n");
	
	for(i=1;i<=c;i++)
	{
		ch='A';
		for(j=1;j<=c;j++)
		{
			if(i==1 || i==c)
			{
				printf(" %c ",ch);
				ch++;
			}
			else if(j==1)
			{
				ch = ch + (i - 1);
				printf(" %c ",ch);
			}
			else if(j==c)
			{
				printf(" %c ",ch);
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