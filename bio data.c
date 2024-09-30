#include <stdio.h>
int main()
{
char name[10],dept[10],bloodgroup[10],college[20];
printf("Enter your name:");
scanf("%s",&name);
printf("Enter your dept:");
scanf("%s",&dept);
printf("Enter your bloodgroup:");
scanf("%s",&bloodgroup);
printf("Enter your college:");
scanf("%s",&college);
{
printf("***BIO DATA***\n");
printf(" NAME:%s\n",name);
printf(" DEPT:%s\n",dept);
printf(" BLOOD GROUP:%s\n",bloodgroup);
printf(" COLLEGE:%s\n",college);
}
}
