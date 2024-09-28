// This file is when you have a parabola and want to determine the x intercepts
// Author: Javier Cuevas
// gcc determine_x_intercepts.c -o out
// ./out

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double array[100];

void input_data(double *array) {
    
    printf("Please provide a, b, and c based on ax^2 + bx + c = 0: ");
    for (int i = 0; i < 3; i++){
        scanf(" %lf", &array[i]);
    } 

    printf("Perfect, here are the values you provided:\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c: %.2f\n", 97 + i, array[i]);
    }
}

void processValues(double *array) {

    double x1 = (-array[1] + sqrt(pow(array[1], 2) - 4*array[0]*array[2]))/(2*array[0]);
    double x2 = (-array[1] - sqrt(pow(array[1], 2) - 4*array[0]*array[2]))/(2*array[0]);
    double x3 = -array[1]/array[2];

    if (array[0] == 0) {
        printf("Your only x intercept is at x: %.2f", x3);
    }

    else if (!(x1 >= 0) && !(x1 < 0) || !(x2 >= 0) && !(x2 < 0)) {
        printf("There are no intercepts based on the values you've given");
    }

    else if (x1 = x2) {
        printf("Your intercept is is at one point: %.2f", x1);
    }

    else {
        printf("Your x1 is %.2f and your x2 is %.2f", x1, x2);
    }

    printf("\n");
}

void yValues(double *array) {
    double a = array[0];
    double b = array[1];
    double c = array[2];
    double x;
    double y;

    printf("\nAt what x is the y value that you are looking for?\n x: ");
    scanf("%lf", &x);
    printf(" You just typed %.2f\nCalculating y value...\n", x);

    y = a*pow(x, 2) + b*x + c;
    printf("The y value for %.2f is %.2f\n", x, y);
}

int main() {

    printf("\n");

    input_data(array);

    processValues(array);

    yValues(array);

    printf("\n");

    return 0;
}

