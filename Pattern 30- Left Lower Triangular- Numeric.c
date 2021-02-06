#include<stdio.h>
#include<conio.h>

int main()
{
	int i=0,j=0,c=0,Num=0,Temp=0;
	
	printf("Enter a value for pattern=");
	scanf("%d",&c);
	
	printf("\n Enter a number in pattern=");
	scanf("%d",&Num);
	
	printf("\n Enter a Increment Seed=");
	scanf("%d",&Temp);
	
	printf("\n ====== Pattern ======\n\n");
	
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i>=j)
			{
				printf(" %-3d ",Num);
				Num=Num+Temp;
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