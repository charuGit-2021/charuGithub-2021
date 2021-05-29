
#include"newscoresheet.h"
#include"filling.h"
#include"final.h"
int main()
{
 system("colour f1");
 int a,key;
 char b,ch;
File *fnew;

char lastinput;
while(True)
{
	initializeconsolehandles();
    Welcome();
    system("cls");
    menu();
    locate(32,9);
    ch=getch();
    switch(ch)
    {
	case'1';
	fileopen(ch);
	case'2';
	fileopen(ch);
	getch();
	case'3';
	system("cls");
	exit(0);

    }
     
}

}
