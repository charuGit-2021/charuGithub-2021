#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int i,j;
int main_exit;

int main()
{
	char pass[10],passward[10]="mycap";
	int i=0;
	printf("\n\nt Enter the passward to login");
	scanf("%s",pass);
	
	
	if(pass[i]!=13&&pass[i]!=8)
	{
		printf("");
		pass[i]=getch();
		i++
	}
	while(pass[i]!=13);
	pass[10]="\0";
	if(strcmp(pass,passward)==0)
	{
		printf("\n\n Passward match");
		for(i=0;i<=6;i++)
		{
			fordelay(1000);
			printf(".");
		}
		system("cls");
		menu();
	}
	else
	{
		printf("\n\n Wrong passward");
		prinf("Enter 1 to retry & 0 to exit");
		scanf("%d",&main_exit);
		if(main_exit==1)
		{
			system("cls");
			main();
		}
		else if(main_exit=0)
		{
			system("cls");
			close();
		}
		else
		{
			printf("\n Invalid");
			fordelay(1000);
			system("cls");
			goto login_try;
		}
	}
	return 0;
}
