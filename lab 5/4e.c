#include <stdio.h>

int Area(int side) {
    int area = side * side;
    return area;
}

int main() {
    int side, area;

    printf("Enter the side of the square: ");
    scanf("%d", &side);

    area = Area(side);

    printf("Area of the square with side %d is %d.\n", side, area);

    return 0;
}

