#include<stdio.h>
#include <string.h>
int main()                       /*Since Its our 1st hackath so we are learning and trying different things but for now this is all we know so we still request you to consider this*/
{
    int i=1,j,k;                 /*In here We are making a back-end step to write the content in a file which can be accessed to us at the time needed*/
    char data[1000];             /*but before this we have to give an app which takes input from user through a known interface*/
    printf("Please Put Underscore(_) In name and a Space bar for Phone number\n");
    gets(data);
    FILE *filePointer;
    filePointer = fopen("Prototype.txt", "a") ;
    fputs(data, filePointer) ;
    fputs("\n", filePointer) ;
    fclose(filePointer);
    return 0;
}
