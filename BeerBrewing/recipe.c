//
// Created by vegar on 04.12.2018.
//

#include <stdio.h>
#include <stdlib.h>
#include "ingridienser.h"

void recipe(){
void BeerList();
    while (1) {
        MenuChoice = 0;
        puts("press one to read the recipe list\n"
             "press two for typing in the recipe name\n"
             "press three to go back to main menu");
        scanf("%i",&MenuChoice);

        if (MenuChoice == 1) {
            BeerList();
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
void BeerList(){
    puts("les fil");
    /*FILE *fp;
    char buff[255];
    fp = fopen("BeerList.txt", "r");
    fscanf(fp,"%s",buff);
    printf("2: %s\n", buff );
    fclose(fp);
*/
}


