#include <stdio.h>
//#include <conio.h>

int main(){
    float rad;
    double area;
    //clear();
    printf("\n Enter the radius of the circle : ");
    scanf("%f",&rad);
    area = 3.14 * rad * rad;
    printf("\n Area = %.21f",area);
    return 0;
}
