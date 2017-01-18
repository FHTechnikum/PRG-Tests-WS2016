// Sebastian Dichler
// <el16b032@technikum-wien.at>

#include "dichler.h"

extern int add_dll(struct towns **pH, struct towns **pT);
extern void show_dll(struct towns *pH, struct towns *pT);
extern void free_dll(struct towns **pH, struct towns **pT);
extern int add_array_dll(struct towns **pH, struct towns **pT, char town[MAXCHAR], double longitude, double latitude);
extern void show_array_dll(struct towns *pH, struct towns *pT);

int main (void)
{
    struct towns *pHead = NULL;
    struct towns *pTail = NULL;
    
    int i;
    
// (2) - Task 2
    printf("\n-TASK 2:\n");
    printf("Sizeof Struct: %lu\n", sizeof(struct towns));
    
// (6) - Task 6
    
    char town[5][MAXCHAR] = {"Vienna", "Capetown", "Auckland", "New York", "London"};
    double longitude[5] = {16.372778, 18.423300, 174.763336, -73.935242, -0.11832};
    double latitude[5] = {48.209206, -33.918861, -36.848461, 40.730610, 51.50939};
    
    for (i = 0; i <= 5; i++)
    {
        add_array_dll(&pHead, &pTail, &town[i-1][MAXCHAR], longitude[i], latitude[i]);
    }
    
    printf("\n-TASK 6:\n");
    printf("Full List:\n");
    show_dll(pHead, pTail);
    
    printf("\nNorthern Hemisphere:\n");
    show_array_dll(pHead, pTail);
    
    
    free_dll(&pHead, &pTail);
    
    return 0;
}
