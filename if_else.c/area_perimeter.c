#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Compare area and perimeter
    if (area > perimeter)
    {
        printf("Area (%d) is greater than Perimeter (%d).\n", area, perimeter);
    }
    else if (area < perimeter)
    {
        printf("Area (%d) is less than Perimeter (%d).\n", area, perimeter);
    }
    else
    {
        printf("Area (%d) is equal to Perimeter (%d).\n", area, perimeter);
    }

    return 0;
}
