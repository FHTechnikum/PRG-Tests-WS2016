// Sebastian Dichler
// <el16b032@technikum-wien.at>

#ifndef dichler_h
#define dichler_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXCHAR 50

// (1) - Task 1
struct towns
{
    char town[MAXCHAR];
    double longitude;
    double latitude;
    struct towns *pNext;
    struct towns *pPrev;
};

// (3) - Task 3
int add_dll(struct towns **pH, struct towns **pT)
{
    char town[MAXCHAR];
    double longitude;
    double latitude;
    
    struct towns *pAct;
    
    pAct = (struct towns *)malloc(sizeof(struct towns));
    if (pAct == NULL)
    {
        printf("Error: Couldn't allocate memory.\n");
        return -1;
    }
    
/* ---- Input City ---- */
    
    printf("Name of City: ");
    fseek(stdin,0,SEEK_END);
    scanf("%s", town);
    
    town[strlen(town)] = '\0';
    strncpy(pAct->town, town, strlen(town));
    
/* ---- Input Longitude and Latitude ---- */
    
    printf("Longitude: ");
    fseek(stdin,0,SEEK_END);
    scanf("%lf", &longitude);
    
    pAct->longitude = longitude;
    
    printf("Latitude: ");
    fseek(stdin,0,SEEK_END);
    scanf("%lf", &latitude);
    
    pAct->latitude = latitude;
    
    getchar();
    
    if (*pH == NULL)
    {
        pAct->pNext = NULL;
        pAct->pPrev = NULL;
        *pH = pAct;
        *pT = pAct;
    }
    else
    {
        pAct->pNext = *pH;
        pAct->pPrev = NULL;
        (*pH)->pPrev = pAct;
        *pH = pAct;
    }
    
    return 0;
}

// (4) - Task 4
void show_dll(struct towns *pH, struct towns *pT)
{
    struct towns *pAct;
    
    if (pT == NULL)
    {
        printf("List is empty, nothing to print.\n");
        return;
    }
    
    pAct = pT;
    
    printf("Town\t\tLongitude\tLatitude\n");
    
    while(1)
    {
        if (pAct->pPrev != NULL)
        {
            printf("\"%s,\t%f,\t%f\"\n", pAct->town, pAct->longitude, pAct->latitude);
        }
        if (pAct == pH)
        {
            break;
        }
        else
        {
            pAct = pAct->pPrev;
        }
    }
}

// (5) - Task 5
void free_dll(struct towns **pH, struct towns **pT)
{
    struct towns *pAct;
    
    if (*pH == NULL && *pT == NULL)
    {
        printf("List is empty, nothing to free.\n");
        return;
    }
    
    while (1)
    {
        pAct = *pH;
        
        if (pAct->pNext == NULL)
        {
            free(pAct);
            *pH = NULL;
            *pT = NULL;
            break;
        }
        else
        {
            *pH = pAct->pNext;
            free(pAct);
        }
    }
}

// (6) - Task 6

int add_array_dll(struct towns **pH, struct towns **pT, char town[MAXCHAR], double longitude, double latitude)
{
    struct towns *pAct;
    
    pAct = (struct towns *)malloc(sizeof(struct towns));
    if (pAct == NULL)
    {
        printf("Error: Couldn't allocate memory.\n");
        return -1;
    }
    
    /* ---- Input City ---- */
    
    strncpy(pAct->town, town, strlen(town));
    
    /* ---- Input Longitude and Latitude ---- */
    
    pAct->longitude = longitude;
    
    pAct->latitude = latitude;
    
    if (*pH == NULL)
    {
        pAct->pNext = NULL;
        pAct->pPrev = NULL;
        *pH = pAct;
        *pT = pAct;
    }
    else
    {
        pAct->pNext = *pH;
        pAct->pPrev = NULL;
        (*pH)->pPrev = pAct;
        *pH = pAct;
    }
    
    return 0;
}

void show_array_dll(struct towns *pH, struct towns *pT)
{
    struct towns *pAct;
    
    if (pT == NULL)
    {
        printf("List is empty, nothing to print.\n");
        return;
    }
    
    pAct = pT;
    
    printf("Town\t\tLongitude\tLatitude\n");
    
    while(1)
    {
        if (pAct->latitude > 0)
        {
            printf("\"%s,\t%f,\t%f\"\n", pAct->town, pAct->longitude, pAct->latitude);
        }
        if (pAct == pH)
        {
            break;
        }
        else
        {
            pAct = pAct->pPrev;
        }
    }
}

#endif /* dichler_h */
