#include<stdio.h>
#include<conio.h>
main()
{
   
    FILE *fp;

    int ft,i=0;

    fp= fopen("fresh.txt","w");
    fprintf(fp,"My captain");
    fclose(fp);

    fp=fopen("fresh.txt","r");
    fseek(fp,0,SEEK_END);
    ft=ftell(fp);
    while (i<ft)
    {
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",getc(fp));
    }
    fclose(fp);



}
