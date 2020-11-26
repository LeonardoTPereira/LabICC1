#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct manga_t
{
    char title[40];
    int year;
} manga;

struct anime_t
{
    struct manga_t manga;
    char studio[30];
    int year;
} anime;

void printManga (struct manga_t manga);
void printAnime (struct anime_t anime);

int main ()
{
    strcpy(manga.title, "Kono Subarashii Sekai ni Shukufuku o!");
    manga.year = 2012;

    strcpy(anime.studio, "Studio Deen");
    anime.year = 2016;
    anime.manga = manga;

    printf("Sizeof manga struct: %u\n", sizeof(struct manga_t));
    printf("Sizeof anime struct: %u\n", sizeof(struct anime_t));


    //printf("Ano: %d\n\n", anime.manga.year);

    printAnime(anime);

    return 0;
}

void printManga (struct manga_t manga)
{
    printf("\nManga Title:\n%s\n", manga.title);
    printf("\nManga Year of Release:\n%d\n", manga.year);
}

void printAnime (struct anime_t anime)
{
    printManga(anime.manga);
    printf("\nAnime Studio:\n%s\n", anime.studio);
    printf("\nAnime Year of Release:\n%d\n", anime.year);
}
