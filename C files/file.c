#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp;
    int id;
    char name[50];
    fp=fopen("data.txt" , "w");
    printf("Enter id of student");
    scanf("%d",&id);
    printf("\nEnter the name of student");
    scanf("%s",name);
    fp= fprint(fp,"%d",id,name);
    fclose(fp);
    getch();
}


