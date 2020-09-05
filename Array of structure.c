#include <stdio.h>
#include<string.h>

struct details
{
  char name[10];
  char id[10];
  int experience,salary;
}
int main()
{
  int i;
  struct details a[5];
  printf("Enter Employee details :\n");
  for(i=0;i<5;i++)
  {
    printf("\nEnter Name :");
    scanf("%s",&a[i].name);
    printf("\nEnter Id :");
    scanf("%s",&a[i].id);
    printf("\nEnter Experience :");
    scanf("%d",&a[i].experience);
    printf("\nEnter Salary :");
    scanf("%d",&a[i].salary);
  }
  printf("\nEmployee Details are :");
  for(i=0;i<5;i++)
  {
    printf("\nName : %s\nId : %s",a[i].name,a[i].id);
    printf("\nExperience : %d\nSalary : %d",a[i].experience,a[i].salary);
   } 
  return 0;
}