
/* 1. if statement */
#include<stdio.h>
#include<conio.h>
int main ()
{

int a;
printf("Enter the value for age: ");
scanf("%d",&a);
if(a>=18)
{
printf("\nPerson is eligible to Vote...");
}
printf("\n\n ***Coded By: name***");
getch();
}



/* 2. 'if else' control statement...*/
#include<stdio.h>
#include<conio.h>
int main ()
{

int a;
printf("Enter the value for age: ");
scanf("%d",&a);
if(a>=18)
{
printf("\nPerson is eligible to Vote");
}
else{
	printf("\nPerson is not eligible to Vote");
}
printf("\n\n Coded By: ASHIM NEPAL***");
getch();
}

/* 3. 'if else if' control statement...*/
#include<stdio.h>
#include<conio.h>
int main ()
{
	
	
	int a;
printf("Enter the value for age: ");
scanf("%d",&a);
if(a>=18)
{
printf("\nPerson is eligible to Vote");
}
else if(a < 1){
	printf("\nPlease enter proper age");
}
else{
	printf ("\nPerson is not eligible to vote");
}

printf("\n\n ***Coded By: ASHIM NEPAL***");
getch();
}

/*4. 'switch case' control statement*/
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a;

printf("Enter a number:");
scanf("%d",&a);
switch(a)
{
case 1:
printf("Sunday\n");
break;
case 2:
printf("Monday\n");
break;
case 3:
printf("Tuesday\n");
break;
case 4:
printf("Wednesday\n");
break;
case 5:
printf("Thrusday\n");
break;
case 6:
printf("Friday\n");
break;
case 7:
printf("Saturday\n");
break;
default:
printf("Invalid number\n");
}

printf("\n\n ***Coded By: name***");
getch();
}


/* 5. 'for' Looping statement...*/
#include<stdio.h>
#include<conio.h>
int main ()
{

int i;

for(i=1;i<=100;i=i+2)
{
printf("%d\t",i);
}

printf("\n\n ***Coding By: ASHIM NEPAL***");
getch();
}

/* 6. 'While' Looping statement...*/
#include<stdio.h>
#include<conio.h>
int main ()
{
	
	int i=1;
while (i<=50)

{
printf("%d\t",i);
i = i+1;
}




printf("\n\n ***Coded by: ASHIM NEPAAL***");
getch();
}

/*7. 'Do While' Looping statement...*/
#include<stdio.h>
#include<conio.h>
int main ()
{
	
	int i=0;
do

{
printf("%d\t",i);
i = i+1;
}
while(i<=40);





printf("\n\n ***Coded By: ***");
getch();
}

/* 8. Functions TYPE I  */

#include <stdio.h>
#include<conio.h>

int diff(int x,int y);

int main()
{
	int x,y,s;
	
	printf("Enter the first number:");
	scanf("%d",&x);
	printf("Enter the second number:");
	scanf("%d",&y);
	s = diff(x,y);
	printf("The difference is : %d",s);
	
	printf("\n\n ***Coding By:Ashim Nepal***");
	getch();
	
	
	
}

int diff(int x , int y)
{
	int a;
	a = x - y;
	return a;
}

/* 9. Functions TYPE II*/
#include<stdio.h>
#include<conio.h>
int prod(int x,int y, int z);
int main ()
{
	
	int x,y,z;
	
	printf("Enter value for first no.:");
	scanf("%d",&x);
	printf("Enter value for second no.:");
	scanf("%d",&y);
	printf("Enter value for third no.:");
	scanf("%d",&z);
	
	 prod( x, y, z );
	
	
	


printf("\n\n ***Coding By: name ***");
getch();
}

int product(int x , int y , int z)
{
	int prd;
	prd = x*y*z;
	printf("The product is:%d",prd);
}

/* 10. Functions TYPE III */
#include <stdio.h>
#include <conio.h>

int sum();

int main()
{
	
	int a;
	a = sum();
	
	printf("That is the sum is:%d",a);
	
	
	
	printf("\n\n ***Coded By: name***");
	getch ();
}

int sum()
{
	int g,h,i;
	printf("Enter value for first number:");
	scanf("%d", &g);
	printf("Enter value for second number:");
	scanf("%d", &h);
	
	i = g + h;
	
	return i;
}


/* 11. Functions TYPE IV  */
#include <stdio.h>
#include <conio.h>

int sum();

int main()
{
	
	
	 sum();
	
	
	
printf("\n\n ****Coded By: naam***");
	getch ();
}

int sum()
{
	int j,k,l;
	printf("Enter the value for first number:");
	scanf("%d", &j);
	printf("Enter the value for second number:");
	scanf("%d", &k);
	
	l = j + k;
	
	printf("The sum is:%d",l);
}


/* 12.  Recurssion function for factorial   */
#include <stdio.h>
#include <conio.h>
int fact(int n);
void main ()
{
    int i,f;
    printf ("Enter the value :");
    scanf ("%d",&i);
    f= fact(i);
    printf ("The factorial is: %d",f);
    
    printf("\n\n ***Coded By: ASHIM NEPAL***");
    getch ();
}

int fact(int n)
{
    if (n<=0)
    {
        return (1);
    }
    else
    {
        return (n*fact(n-1));
    }
}


/*
13. Recursion for fibonacci series...
{
availability = false; 
} 
/* Kripaya yeslaai aafno Computer kitab ko Pg. 180/181 herera gaarnu holaa. Dhanyabad */ 





/* 14. WAP using structure to store id, name, address , phone no. and salary of 3 employess using structure. */

#include <stdio.h>
#include <conio.h>
struct employee 
{
int id;
char name[100]; 
char add[100];
int phone;
float salary; 
} e1[3]; 
void main ()
{

int i;
for (i = 0; i < 2; i++) 
{
printf ("Enter The Employee id:"); 
scanf ("%d", &e1[i].id); 
printf ("Enter Employee's Name:");
scanf ("%s", e1[i].name); 
printf ("Enter Employee's Address:");
scanf ("%s", e1[i].add);
printf ("Enter The Employee's Phone No.:");
scanf ("%d", &e1[i].phone);
printf ("Enter The Employee's Salary:");
scanf ("%f", &e1[i].salary); 


}


for (i = 0; i < 3; i++) 
{
printf ("\n %d\t\t%s\t\t%s\t\t%d\t\t%f", e1[i].id, e1[i].name, e1[i].add, e1[i].phone, e1[i].salary); 
}

printf("\n ***Coded By:namee***");
getch();
}


/* 15. C program to illustrattte ubnion */

#include <stdio.h>
#include <conio.h>
union test 
{
int a; 
char b; 
float c;

}u; 
void main()
{
u.a=10; 
u.b='p';
u.c=30.5;
printf("Storage for integer a is:%d",u.a); 
printf("\nStorage for character b is:%s",u.b);
printf("\nStorage for float c is:%f",u.c);
printf("\n\n ***Coded By: name***");
getch ();

}




/* 16. WAP to store Roll Number, Name and class of 5 student in a file "student.txt". */
#include <stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char name[50];
int rollnumber, class,i;
fp=fopen("student.txt ","w");
for(i=0;i<5;i++)
{
printf("Enter roll number of students: ");
scanf("%d",&rollnumber);
printf("Enter name of students: ");
scanf("%s",name);
printf("Enter class of students: ");
scanf("%d",&class);
fprintf(fp,"\nRoll Number:%d\nName: %s \nclass:%d \n",rollnumber,name,class);
}
fclose(fp);

printf("\n ***Coded by :name***");
getch();
}



/* 17. WAP to store employee id, name and salary of N employees in data file �emp.txt�. And display in file.*/
#include <stdio.h>
#include<conio.h>
void main() {
FILE *fp;
int empid,i,n;
float empsalary;
char empname[80];
fp=fopen("emp.txt ","w");
printf("Enter the number of records to store:");

scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter emp id: ");
scanf("%d",&empid);
printf("Enter emp name: ");
scanf("%s",empname);
printf("Enter emp salary: ");
scanf("%f",&empsalary);
fprintf(fp,"I.d\t\tName\t\tSalary ");
fprintf(fp,"\n%d\t\t%s\t\t%f\n" ,empid,empname,empsalary);
}
fclose(fp);

printf("\n\n ***Coded by:name***");
getch();
}




















