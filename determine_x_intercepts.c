// This file is when you have a parabola and want to determine the x intercepts
// Author: Javier Cuevas
// gcc determine_x_intercepts.c -o out
// ./out

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double processIntercepts(double x1, double x2) {

    if (!(x1 >= 0) && !(x1 < 0) || !(x2 >= 0) && !(x2 < 0)) {
        printf("There are no intercepts based on the values you've given");
    }

    else if (x1 = x2) {
        printf("Your intercept is is at one point: %.2f", x1);
    }

    else {
        printf("Your x1 is %.2f and your x2 is %.2f", x1, x2);
    }

    return 0.0;
}

double processValues(double *array) {

    double x1 = (-array[1] + sqrt(pow(array[1], 2) - 4*array[0]*array[2]))/(2*array[0]);
    double x2 = (-array[1] - sqrt(pow(array[1], 2) - 4*array[0]*array[2]))/(2*array[0]);

    processIntercepts(x1, x2);

    return x1, x2;
}

int main() {

    double array[100];

    printf("Please provide a, b, and c based on ax^2 + bx + c = 0: ");
    for (int i = 0; i < 3; i++){
        scanf(" %lf", &array[i]);
    } 

    printf("Perfect, here are the values you provided:\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c: %.2f\n", 97 + i, array[i]);
    }

    processValues(array);

    return 0;
}

