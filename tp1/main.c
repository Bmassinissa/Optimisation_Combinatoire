#include <stdio.h>
#include <stdlib.h>
typedef struct int Tval;
{
    int nbSom;
    int **mat;
    Tval **mat;
}
matAdjacence;

typedef struct
{
    int nbSom;
    int nbArcs;
    int **mat;
    Tval **val;
} matIncidences;

typedef struct
{
    int nbSoms;
    int nbArcs;
    int *FS;
    int *APS;
    Tval *val;
} FileSucc;

typedef struct
{
    int nbSom;
    Liste *tab;
} listeAdjacence;

typedef struct cellule
{
    int SomAdj;
    Tval val;
    struct cellule *suiv;
}*liste;

typedef struct
{
    int nbSom;
    listeSuccPred *tab;
} listeAdjSuccPred;

typedef struct
{
    liste lsucc;
    liste lpred;
} listeSuccPred;

int main()
{
    printf("Hello world!\n");
    return 0;
}
