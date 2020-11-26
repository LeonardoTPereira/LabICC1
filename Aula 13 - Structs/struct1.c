#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct manga_t {
    char title[30];
    int year;
} mine, yours;

void printManga (struct manga_t manga);

int main ()
{

    strcpy(mine.title, "One Piece");
    mine.year = 1997;

    struct manga_t other = {"Yu Yu Hakusho", 1990};

    scanf("%s", yours.title);
    scanf("%d", &yours.year);

    printManga(mine);
    printManga(yours);
    printManga(other);

    return 0;
}

void printManga (struct manga_t manga)
{
    printf("\nManga Title:\n%s", manga.title);
    printf("\nManga Year of Release:\n%d\n", manga.year);
}
