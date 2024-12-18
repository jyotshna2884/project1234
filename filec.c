#include<stdio.h>
void main() {
FILE *fp;
char fname [50],ch;
printf("ENter the file name: ");
gets(fname,"r");
fp=open(fname,"r");
if(fp!=NULL)
{
while((ch=fgets(fp))!=EOF)
printf("%c",ch);
}
else
printf("FIle does not exist");
}

