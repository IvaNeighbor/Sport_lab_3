#include <iostream>
#include <math.h>
#include <ctype.h>
#include <time.h>

int main()
{
    printf("1 exercise");
    printf("\n");
    float meters = 0, centimeters = 0, millimeters = 0;
    printf("Enter meteres:");
    scanf_s("%f", &meters);
    centimeters = meters * 10;
    millimeters = centimeters * 10;
    printf("meters = %.1f; centimeters = %.0f; millimeters = %.0f", meters, centimeters, millimeters);
    printf("\n\n");

    printf("2 exercise");
    printf("\n");
    float r = 0, S = 0, pi = 3.14;
    printf("Enter radius:");
    scanf_s("%f", &r);
    S = pi * pow(r, 2);
    printf("S = %.2f", S);
    printf("\n\n");

    printf("3 exercise");
    printf("\n");
    float hours = 0, seconds = 0, minutes = 0;
    printf("Enter seconds:");
    scanf_s("%f", &seconds); 
    minutes = seconds / 60; 
    hours = minutes / 60;
    printf("hours = %.2f; minutes = %.0f; seconds = %.0f", hours, minutes, seconds); 
    printf("\n\n");

    printf("4 exercise");
    printf("\n");
    int number;
    printf("Enter number:");
    scanf_s("%d", &number);
    if (number % 2 == 0) {
        printf("This number is even number");
    }
    else {
        printf("This number is odd number");
    }
    printf("\n\n");

    printf("5 exercise");
    printf("\n");
    char lower_char, upper_char; 
    printf("Enter any char:");
    scanf_s("%c", &lower_char);
    if (islower(lower_char)) {
        upper_char = toupper(lower_char);
        printf("Capital letter: %c", upper_char);
    }
    else {
        printf("You already have capital letter");
    }
    printf("\n\n");

    printf("Creative task:");
    printf("\n");
    int choose = 0, key = 0;
    bool find = false;
    srand(time(NULL));
    key = 1 + rand() % 5;
    printf("key = %d\n", key);
    printf("Welcome to the game 'Close room'\n");
    printf("Rules: you have some places where hidden key and your goal to find this key\n");
    printf("Choose where we will find the key:\n");
    printf("1.The shelves\n");
    printf("2.The bed\n");
    printf("3.Under the carpet\n");
    printf("4.In the book\n");
    printf("5.In the jug\n");
    printf("Enter number from 1 to 5:");
    scanf_s("%d", &choose);

    while (find == false) {

        switch (choose) {
        case 1:
            if (key == 1) {
                printf("Congratulation, you find the key and you can escape the room");
                find = true;
            }
            else {
                printf("Sadly, but there is no key here. Try find in another place\n");
                printf("Enter number:");
                scanf_s("%d", &choose);
            }
            break;
        case 2:
            if (key == 2) {
                printf("Congratulation, you find the key and you can escape the room");
                find = true;
            }
            else {
                printf("Sadly, but there is no key here. Try find in another place\n");
                printf("Enter number:");
                scanf_s("%d", &choose);
            }
            break;
        case 3:
            if (key == 3) {
                printf("Congratulation, you find the key and you can escape the room");
                find = true;
            }
            else {
                printf("Sadly, but there is no key here. Try find in another place\n");
                printf("Enter number:");
                scanf_s("%d", &choose);
            }
            break;
        case 4:
            if (key == 4) {
                printf("Congratulation, you find the key and you can escape the room");
                find = true;
            }
            else {
                printf("Sadly, but there is no key here. Try find in another place\n");
                printf("Enter number:");
                scanf_s("%d", &choose);
            }
            break;
        case 5:
            if (key == 5) {
                printf("Congratulation, you find the key and you can escape the room");
                find = true;
            }
            else {
                printf("Sadly, but there is no key here. Try find in another place\n");
                printf("Enter number:");
                scanf_s("%d", &choose);
            }
            break;
        }
    }
    return 0;
}