//********************************************************
// fracturing.c
// Author: Praanadah Mudam
// Date: 9/08/24
// Class: COP 3223C, Professor Parra
// Purpose: This program allows the user to input coordinate
// points into the code to get the area, perimeter, height and width.
// The goal was to be able to fracture your code and reducance redundacies within it.
// Input: The user is required to inout two coordinate points on the
//x-y plane to be calculated.
// Output: (to the command line) A brief message the displays the distance between the two
// coordinates and the perimeter, area, width, and height of the city 
// //********************************************************
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to input coordinates
void inputCoordinates(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter coordinates for Point #1 (x1 y1):");
    printf("Enter a value: ");
    scanf("%lf", x1);
    printf("Enter a value: ");
    scanf("%lf", y1);
    printf("Enter coordinates for Point #2 (x2 y2):");
    printf("Enter a value: ");
    scanf("%lf", x2); 
    printf("Enter a value: ");
    scanf("%lf", y2);  
}

// Function to calculate distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate radius
double calculateRadius(double distance) {
    return distance / 2;
}

// Function to calculate circle perimeter
double calculatePerimeter(double radius) {
    return 2 * PI * radius;
}

// Function to calculate circle area
double calculateArea(double radius) {
    return PI * pow(radius, 2);
}

// Function to calculate circle diameter (width/height)
double calculateDiameter(double radius) {
    return 2 * radius;
}

// Function to print results
void printResults(double value, const char msg[], double x1, double y1, double x2, double y2) {
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The %s of the city encompassed by your request is %.2f\n", msg, value);
}

int main() {
    double x1, y1, x2, y2;
    double distance, radius, perimeter, area, diameter;

    // Input coordinates
    inputCoordinates(&x1, &y1, &x2, &y2);

    // Calculate distance
    distance = calculateDistance(x1, y1, x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    // Calculate radius
    radius = calculateRadius(distance);
    // Print results
    printResults(radius, "radius", x1, y1, x2, y2);

    // Calculate perimeter
    perimeter = calculatePerimeter(radius);
    // Print results
    printResults(perimeter, "perimeter", x1, y1, x2, y2);

    // Calculate area
    area = calculateArea(radius);
    // Print results
    printResults(area, "area", x1, y1, x2, y2);

    // Calculate diameter (width/height)
    diameter = calculateDiameter(radius);
    // Print results
    printResults(diameter, "width", x1, y1, x2, y2);
    printResults(diameter, "height", x1, y1, x2, y2);

    return 0;
}
