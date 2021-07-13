#include<stdio.h>
void  main()
{
  
   char str[200];
   int line=1, word=1, ch=0;
   printf("Enter string terminated with $ :\n");
   scanf("%[^$]", str);
   for(int i=0; str[i]!='\0'; i++)
   {
      if(str[i]=='\n')
      {
         line++;
         word++;
      }
      else 
      {
         if(str[i]==' '||str[i]=='\t')
         {
            word++;
            ch++;
         }
         else {
            ch++;
         }
      }
   }
   printf("\nCharacter counts = %d\n", ch);
   printf("Word counts = %d\n", word);
   printf("Line counts = %d\n", line);
}
