// Read one line at a time from file and print on acreen

#include <stdio.h>

int main()

{
    int line_cnt = 0, sp_cnt=0, ch_cnt=0, wrd_cnt=0;
    FILE *fp;
    int ch;
    fp = fopen("axit.txt", "r");
    if (fp == NULL)
        printf("\nError: file not found");
    printf("\nFile Contents are:");
    printf("\n-------------------\n");
    ch = fgetc(fp);
    while (ch != EOF)
    {
        printf("%c",ch);
        if (ch == '\n')
            line_cnt++;
        if (ch == ' ')
            sp_cnt++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            wrd_cnt++;
        ch = fgetc(fp);
        ch_cnt++;
    }
    printf("\n\n");
    printf("Line count: %d\n", line_cnt);
    printf("Space count: %d\n", sp_cnt);
    printf("Words count: %d\n", wrd_cnt);
}