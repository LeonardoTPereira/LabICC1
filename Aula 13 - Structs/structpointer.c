#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct manga_t {
    char title[30];
    int year;
};

void printManga (struct manga_t *manga);

int main ()
{

    struct manga_t amanga;
    struct manga_t *pmanga;
    pmanga = &amanga;

    strcpy(pmanga->title, "Bleach");
    //pmanga->year = 2001;
    //strcpy((*pmanga).title, "Bleach");
    (*pmanga).year = 2001;

    printManga(pmanga);
}

void printManga (struct manga_t *manga)
{
    printf("\nManga Title:\n%s", manga->title);
    printf("\nManga Year of Release:\n%d\n", manga->year);
}
