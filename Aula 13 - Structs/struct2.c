#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct manga_t {
    char title[30];
    int year;
} manga[2];

void printManga (struct manga_t manga);

int main ()
{

    strcpy(manga[0].title, "Hunter x Hunter");
    manga[0].year = 1998;

    scanf("%s", manga[1].title);
    scanf("%d", &manga[1].year);

    for(int i = 0; i < 2; ++i)
        printManga(manga[i]);
    return 0;
}

void printManga (struct manga_t manga)
{
    printf("\nManga Title:\n%s", manga.title);
    if(!strcmp(manga.title, "Hunter x Hunter"))
        printf("\nVoce quis dizer: Hiato x Hiato");
    printf("\nManga Year of Release:\n%d\n", manga.year);
}
