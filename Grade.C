include<stdio.h>
void main()
{
 int m;
printf("Enter the marks:");
scanf("%d",&m);
if(m>90)
printf("A+ GRADE");
else if(m>80)
printf("A GRADE");
else if(m>70)
printf("B+ GRADE");
else if(m>60)
printf("B GRADE");
else if(m>50)
printf("C GRADE");
else if(m>40)
printf("D GRADE");
else
printf("FAILED");
}
