
#include <stdio.h>
#define PI 3.14159

int main() {
    // Write C code here
    float radius, height, volume, surfaceArea;
    
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("enter the height of the cylinder: ");
    scanf("%f", &height);
    
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;
    
    printf("\nVolume of the cylinder = %.2f\n", volume);
    printf("surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}