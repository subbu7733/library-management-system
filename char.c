
#include<stdio.h>
#include<string.h>
void main() {
int i,j,n,pos;
char a[20],b[50],ch;
printf("Enter string\n");
scanf("%s",&a);
n=strlen(a);
printf("Enter position\n");
scanf("%d",&pos);
printf("Enter the character\n");
scanf("%s",&ch);
b[0]='d';
b[1]='l';
b[2]='e';
b[3]='s';
b[4]='t';
b[5]='x';
j=6;
while(i<n) {
if(i==pos-1) {
b[j]='d';
b[j+1]='l';
b[j+2]='e';
b[j+3]='s';
b[j+4]='t';
b[j+5]='x';
j=j+6;
}
b[j]=a[i];
i++;
j++;
}
b[j]='d';
b[j+1]='l';
b[j+2]='e';
b[j+3]='s';
b[j+4]='t';
b[j+5]='x';
printf("\nframe after stuffing:\n");
printf("%s",b);
}
