#include <stdio.h>
#include "ingridienser.h"
//
// Created by vegar on 04.12.2018.
//

void edit()
    {
        void BeerList();
        while (1) {
            MenuChoice = 0;
            puts("press one to read the recipe list\n"
                 "press two for typing in the recipe name\n"
                 "press three for new recipe\n"
                 "press fore to go back to main menu");
            scanf("%i",&MenuChoice);

            if (MenuChoice == 1) {
                BeerList();
            }
            if (MenuChoice == 2) {
                puts("skriv in navn her");
            }
            if (MenuChoice == 3) {
                puts("ny oppskrift");
            }
            if (MenuChoice == 4) {
                break;
            }

        }
}

