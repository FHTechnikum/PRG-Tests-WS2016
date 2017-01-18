//
//  dichler.c
//  
//
//  Created by Sebastian Dichler on 29.11.16.
//
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DEBUG 0
#define PROTOTYPE 1
#define RANGE 1

int main (int argc, char *argv[])
{
    char symbol[1];
    int counter;
    int counter_up;
    int counter_original;
    int i, i_up;
    
    
    if (argc != 3)
    {
        printf("ERROR: ARGUMENTS NOT ALLOWED\n");
        printf("EXAMPLE OF USE ./a.out \"#\" 5\n");
        return -1;
    }
    
    if (argc == 3)
    {
        memset(symbol, 0, sizeof(symbol));
        
        symbol[0] = argv[1][0];
        counter = atoi(&argv[2][0]);
        
        counter_original = counter;
        counter_up = 0;
        
#if DEBUG
        printf("Symbol argv = %s\n", argv[1]);
        printf("Symbol symb = %c\n", symbol[0]);
        
        printf("Counter argv = %s\n", argv[2]);
        printf("Counter coun = %d\n", counter);
#endif
        
#if PROTOTYPE
        
        //printf("Without Range:\n\n");

        
        while (counter_up < counter)
        {
            
            for (i_up = 0; i_up < counter_up; i_up++)
            {
                printf("%c", symbol[0]);
            }
            
            counter_up++;
            printf("\n");
        }
        
        
        while (counter > 0)
        {
            
            for (i = counter; i > 0; i--)
            {
                printf("%c", symbol[0]);
            }
        
            counter--;
            printf("\n");
        }
#endif
        
#if RANGE
        
        printf("With Range:\n\n");
        
        switch (counter_original)
        {
            case 1:
                printf("%c\n", symbol[0]);
                break;
            
            case 2:
                printf("%c\n", symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c\n", symbol[0]);
                break;
                
            case 3:
                printf("%c\n", symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c\n", symbol[0]);
                break;
                
            case 4:
                printf("%c\n", symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c\n", symbol[0]);
                break;
                
            case 5:
                printf("%c\n", symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c\n", symbol[0]);
                break;
                
            case 6:
                printf("%c\n", symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c\n", symbol[0]);
                break;
                
            case 7:
                printf("%c\n", symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c\n", symbol[0]);
                break;
            
            case 8:
                printf("%c\n", symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c\n", symbol[0]);
                break;
                
            case 9:
                printf("%c\n", symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c%c\n", symbol[0], symbol[0], symbol[0], symbol[0]);
                printf("%c%c%c\n", symbol[0], symbol[0], symbol[0]);
                printf("%c%c\n", symbol[0], symbol[0]);
                printf("%c\n", symbol[0]);
                break;
                
            default:
                printf("ERROR: UNKNOWN COUNTER (RANGE 1 - 9)\n");
                return -1;
                break;
        }
        
#endif
        
    }
    
    return 0;
}
