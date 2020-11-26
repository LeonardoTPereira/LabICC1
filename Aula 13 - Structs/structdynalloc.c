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

    struct manga_t *pmanga;

    pmanga = (struct manga_t*) malloc(sizeof(struct manga_t)*1);

    printf("Sizeof struct: %u\n", sizeof(struct manga_t));

    strcpy(pmanga->title, "Kubera");
    pmanga->year = 2010;

    printManga(pmanga);

    free(pmanga);
}

void printManga (struct manga_t *manga)
{
    printf("\nManga Title:\n%s", manga->title);
    printf("\nManga Year of Release:\n%d\n", manga->year);
}
