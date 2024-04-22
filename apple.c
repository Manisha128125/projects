#include<stdio.h>
int main()
{
	int p,c,i=21;
	printf("****APPLE GAME****\n");
	printf("RULES FOR THE GAME ARE:\n");
	printf("1.THERE ARE TOTAL 21 APPLE AND YOU CAN PICK IN RANGE OF 1 TO 4 APPLE AT A TIME \n");
	printf("2. THE LOOSE WHO PICK THE LOST APPLE \n ");
	printf("PRESS ANY KEY TO START THE GAME");
	getch();
	system("cls");
	printf("YOUR TURN\n TOTAL NO. OF APPLE ARE 21\n");
	TURN:
		scanf("%d",&p);
		{
			if(p==1||p==2||p==3||p==4)
			{ 
			   printf("TAKEN BY YOU\n");
			}
            else 
            { 
              printf("YOU TAKEN EXTRA\n");
			}
		}
	i=i-p;
	{ 
	   printf("  REMAINING APPLES ARE=%d\n",i);
	}
	printf("*COMPUTER'S TURN\n");
	c=5-p;
	i=i-c;
	{
		printf("  REMAINING APPLES ARE=%d\n *YOUR TURN\n ",i);
	}
	if(i!=1&&i<21)
	{
		goto TURN;
	}
	else
	  {
	   printf("**YOU LOOSE THE GAME**\n");
	  } 
	
}
