#include<stdio.h>
main()
{
	printf("pick an item:\n1. pen\n2. pencil\n3.eraser\n4. book");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
	    	printf("you picked pen");
	    	break;
		case 2:
		    printf("you picked pencil");
		    break;
		case 3:
		    printf("you picked eraser");
		    break;
		case 4:
		    printf("you picked book");
		    break;
		default:printf("invalid choice");
	}
	
}
