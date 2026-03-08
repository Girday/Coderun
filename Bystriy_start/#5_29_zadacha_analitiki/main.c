#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double d = b * b - 4 * a * c;

    if (d < 0)
        printf("0\n");
    else if (d == 0) {
        double x = -b / 2.0 / a;
        printf("1\n%lf\n", x);
    } else {
        double x1 = (-b - sqrt(d)) / 2.0 / a;
        double x2 = (-b + sqrt(d)) / 2.0 / a;
        printf("2\n%f %lf\n", x1, x2);
    }

	return 0;
}
