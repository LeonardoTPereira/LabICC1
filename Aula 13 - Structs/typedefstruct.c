#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[30];
    int year;
} manga_t;

void printManga (manga_t manga);

int main ()
{
    manga_t manga;

    strcpy(manga.title, "Boku no Hero Academia");
    manga.year = 2014;

    printManga(manga);

    return 0;
}

void printManga (manga_t manga)
{
    printf("\nManga Title:\n%s", manga.title);
    printf("\nManga Year of Release:\n%d\n", manga.year);
}
