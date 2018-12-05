//
// Created by vegar on 04.12.2018.
//

#include <stdio.h>
#include <stdlib.h>
#include "ingridienser.h"

void recipe(){

    while (1) {
        MenuChoice = 0;
        puts("press one to read the recipe list\n"
             "press two for typing in the recipe name\n"
             "press three to go back to main menu");
        scanf("%i",&MenuChoice);

        if (MenuChoice == 1) {
            char* buffer = 0;
            long length;
            FILE * f = fopen ("BeerList.txt", "r");

            if (f)
            {
                fseek (f, 0, SEEK_END);
                length = ftell (f);
                fseek (f, 0, SEEK_SET);
                buffer = (char*)malloc ((length+1)*sizeof(char));
                if (buffer)
                {
                    fread (buffer, sizeof(char), (size_t) length, f);
                }
                fclose (f);
            }

            printf("\n%s\n", buffer);
            printf("5 for back");

            scanf("%i",&MenuChoice);
            if (MenuChoice == 5){

            }
        }

        if (MenuChoice == 2) {
            puts("skriv in navn her");
        }

        if (MenuChoice == 3) {
            MenuChoice = 0;
            break;
        }


    }
}



