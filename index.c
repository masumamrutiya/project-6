
#include<stdio.h>
#include<string.h>

int main() {
    
    // question-1/
    
  char string1[10] = "ram";
  char string2[10] = "sita";
 
  int name = strcmp(string1,string2);

  if (name == 0)
  {
    printf("same");
 } else
 {
    printf("not same");
 }


  // question-2
    
    char s[]="zabcxy";
    for(int i=5; i>=0; i--)
    {
        printf("%c\n",s[i]);
    }


        // question-3
    char str4[100]="xyz";
    char str5[100]="abc";
    printf("%s", strcat(str4,str5));


        // question-4


char str6[100];

printf("enter your name  ");

scanf("%s",&str6);
for(int i=0; str6[i]>0;i++)
{
printf("%c\n",str6[i]);
}
  return 0;
}
