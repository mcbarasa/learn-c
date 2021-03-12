#include<stdio.h>
#include<string.h> 
int main()
{
  int marks;
  char grade [15];
  printf (" Enter the students marks  \n"); 
  scanf("%d",&marks ); 
  if ( marks >=75  &&  marks <=100)
  {
     strcpy(grade, "Distinction-A\n");	/* Copy the string to the grade */
     printf("The grade is %s" , grade);
  }
  else if( marks >= 60 &&  marks < 75 )
  {
  	strcpy(grade, "Credit-B\n");
     printf("The grade is %s" , grade );
  }
  else if(marks>=50  &&  marks<60)
  {            
    strcpy(grade, "Pass-C\n");
    printf("The grade is %s" , grade );       
  }
  else if (marks>=0 && marks<50)
  {
  	strcpy(grade, "Fail-E\n");
     printf ("The grade is %s" , grade)  ; 
   }
   else 
     printf("The mark is impossible!\n");
    return 0;	
}