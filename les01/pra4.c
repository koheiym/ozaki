#include <stdio.h>
#include <math.h>

void cor(int n, double x[10], double y[10]);

void main()
{
    int n = 10;
    double x[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    double y[10] = {21.0, 24.0, 27.0, 30.0, 33.0, 36.0, 39.0, 42.0, 45.0, 48.0};
    cor(n, x, y);
}

void cor(int n, double x[10], double y[10])
{
    double sx = 0, sy = 0, sxy = 0, xave = 0, yave = 0, a;
    for (int i = 0; i < n; i++)
    {
        // printf("%f:", x[i]);
        // printf("%f\n", y[i]);
        xave += x[i];
        yave += y[i];
    }

    xave = xave / n;
    yave = yave / n;
    // printf("xave:%f", xave);
    // printf("yave:%f", yave);
    for (int i = 0; i < n; i++)
    {
        printf("sx:%f ", sx);
        printf("sy:%f\n", sy);

        sx += sqrt(fabs(x[i] - xave));
        sy += sqrt(fabs(y[i] - yave));
        sxy += ((x[i] - xave) * (y[i] - yave));
    }
    printf("sx:%f ", sx / n);
    printf("sy:%f ", sy / n);
    printf("sxy:%f ", sxy);
    sx = sx / n;
    sy = sy / n;
    sxy = sxy / n;
    a = sxy / (sx * sy);
    printf("a:%f", a);
}