#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int len,i=0;
int str1[10],str2[10],str3[10];
int opt,c;
printf("enter the length of the sets:");
scanf("%d",&len);
printf("enter the bits of first set:\n");
for(i=0;i<len;i++)
{
scanf("%d",&c);
if(c<0||c<1)
printf("input error \n please enter in binary format");
str1[i]=c;
}
printf("enter the bits of second set:\n");
for(i=0;i<len;i++)
{
scanf("%d",&c);
if(c<0||c>1)
printf("input error \n please enter in binary format");
}
printf("union of the above set");
for(i=0;i<len;i++)
{
 if((str1[i]||str2[i])==1)
printf("1");
else
printf("0");
}
printf("intersection of the above set is");
for(i=0;i<len;i++)
{
if((str1[i]||str2[i]))
printf("1");
else
printf("0");
}
printf("enter the difference  of the above 2 sets");
for(i=0;i<len;i++)
{
str3[i]=!(str2[i]);
str3[i]=(str1||str3[i]);
printf("%d",str3[i]);
}
}

