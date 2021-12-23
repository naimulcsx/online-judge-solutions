#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897

void print_output(double, double, double);
double get_incircle_area(double, double);
double get_circumcircle_area(double, double, double);
double get_triangle_area(double, double, double, double);

int main(void) {
    double a, b, c;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        double triangle_area, p, circumcircle_area, incircle_area;

        p = (a + b + c) / 2.0;
        triangle_area = get_triangle_area(a, b, c, p);
        circumcircle_area = get_circumcircle_area(a, b, c);
        incircle_area = get_incircle_area(triangle_area, p);

        print_output(triangle_area, circumcircle_area, incircle_area);
    }

    return 0;
}

double get_triangle_area(double a, double b, double c, double p) {
    return sqrt( p * (p - a) * (p - b) * (p - c));
}

double get_circumcircle_area(double a, double b, double c) {
    double radius = (a * b * c) / (sqrt((a + b + c) * (b + c -a) * (c + a -b) * (a + b -c)));

    return PI * radius * radius;
}

double get_incircle_area(double area, double perimeter) {
    double radius = area / perimeter;
    return PI * radius * radius;
}

void print_output(double triangle_area, double circumcircle_area, double incircle_area) {
    double sunflowers_area, violets_area, roses_area;
    
    sunflowers_area = circumcircle_area - triangle_area;
    violets_area = triangle_area - incircle_area;
    roses_area = incircle_area;

    printf("%.4f %.4f %.4f\n", sunflowers_area, violets_area, roses_area);
}