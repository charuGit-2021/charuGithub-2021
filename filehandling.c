#include<stdio.h.>
int main()
{
	FILE*fp;
	
	fp=fopen("cap.txt","a+");
	
	//fprintf(fp,"%s","My captain");
	/*line by line-fgets()
	char by char-getsc()
	word by word-fscanf()*/
	
	int ch=getc(fp);
	
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=getc(fp);
	}
	putc()
	fclose(fp);
	return 0;
}
