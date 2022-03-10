#include<stdio.h>
struct _triangle
{
    float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input()
{
    Triangle t;
    printf("Enter base = ");
    scanf("%f",&t.base);
    printf("Enter altitude = ");
    scanf("%f",&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
    (*t).area = 0.5*(*t).base*(*t).altitude;
}
void output(Triangle t)
{
    printf("Area of triangle of base %f and altitude %f is %f\n",t.base,t.altitude,t.area);
}
int main()
{
    Triangle t;
    t = input();
    find_area(&t);
    output(t);

}