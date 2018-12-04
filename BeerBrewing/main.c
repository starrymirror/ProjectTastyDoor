#include <stdio.h>
#include "ingridienser.h"

int main()
{
    void edit();
    void recipe();

    while (1) {
        MenuChoice = 0;
        puts("greetings and welcome to Egeland's beer brewing terminal");
        puts("you are in the menu\nto navigate in this menu use numbers 1-3");
        puts("1. recipe\n2. edit recipe\n3. exit");


        scanf("%i", &MenuChoice);

        if (MenuChoice == 1) {
            recipe();

        }
        if (MenuChoice == 2) {
            edit();

        }
        if (MenuChoice == 3) {
            printf("thee\n");
            break;
        }

    }


    return(0);

}