#include<stdio.h>
int main() 
{  
    int s1, s2, s3, s4, s5, per;  
  
    printf("Enter marks of 5 subjects\n");  
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);  
  
    per = (s1 + s2 + s3 + s4 + s5) / 5.0;  
  
    if(per > 101)  
        printf("You've entered wrong marks, re-enter\n");  
    else if(per >= 85)  
        printf("Grade A\n");  
    else if(per >= 70)  
        printf("Grade B\n");  
    else if(per >= 55)  
        printf("Grade C\n");  
    else if(per >=40)  
        printf("Grade D\n");
	else
		printf("failed \n"); 
}  
