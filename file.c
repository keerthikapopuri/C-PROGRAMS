#include<stdio.h>
main()
{
        FILE *fp;
        char ch;
        fp=fopen("stud.txt","w+");
        if(fp==NULL)
        {
                printf("\n Unable to open file:");
                exit(0); 
        }
        printf("\n Enter the text into file (end with ctrl+d):");
        ch=getchar();
        while(ch!=EOF)
        {
                fputc(ch,fp);
                ch=getchar();
        }
        fseek(fp,5,SEEK_SET);                                                //place the cursor at the position 5
        printf("\n The cursor is at %d position",ftell(fp));   //tells the cursor position as 5
        printf("\n Enter the character to insert:");
        scanf("\n%c",&ch);
        fputc(ch,fp);                                                   //inserts the character at specified position
        ch=fgetc(fp);
        while(ch!=EOF)                //prints all the characters from specified position
        {
                printf("%c",ch);
                ch=fgetc(fp);
        }
        rewind(fp);  //places the cursor to the beginning of file
        printf("\n The cursor is at %d position",ftell(fp));
        fclose(fp);

}
