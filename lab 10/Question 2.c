#include <stdio.h>
#include <math.h>

// Struct to represent a point
typedef struct {
    double x; 
    double y; 
} Point;
// Function to calculate the distance between two points
double distance(Point p1, Point p2) {
    // distance formula
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

// Function to check if a point is inside a rectangle
int isInsideRectangle(Point p, double x1, double y1, double x2, double y2) {
    // Checking if the point is inside the rectangle
    if (p.x >= x1 && p.x <= x2 && p.y >= y1 && p.y <= y2) {
        return 1; // Return 1 if inside the rectangle
    }
    return 0; // Return 0 if outside the rectangle
}
int main() {
    
    Point p1 = {3.0, 4.0};  
    Point p2 = {7.0, 1.0};  

    // Calculate and print the distance between p1 and p2
    double dist = distance(p1, p2);
    printf("Distance between p1 and p2: %.2f\n", dist);

    // Define a rectangle with top-left corner at (1, 1) and bottom-right corner at (6, 5)
    double x1 = 1.0, y1 = 1.0, x2 = 6.0, y2 = 5.0;

    // Checking if p1 is inside the rectangle
    if (isInsideRectangle(p1, x1, y1, x2, y2)) {
        printf("Point p1 is inside the rectangle.\n");
    } else {
        printf("Point p1 is outside the rectangle.\n");
    }

    // Checking if p2 is inside the rectangle
    if (isInsideRectangle(p2, x1, y1, x2, y2)) {
        printf("Point p2 is inside the rectangle.\n");
    } else {
        printf("Point p2 is outside the rectangle.\n");
    }
    return 0;
}

