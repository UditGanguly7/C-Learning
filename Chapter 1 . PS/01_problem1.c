// Write a C program to calculate area of a rectangle:
//   a. Using hard coded insights 
//   b. Also, make sure that users can input numbers

# include <stdio.h>

int main() {
    int lenght, breadth;
    printf("Enter lenght: \n");
    scanf("%d", &lenght); 

    printf("Enter breadth: \n");
    scanf("%d", &breadth);

    printf("The area of this rectangle is %d", lenght*breadth);
    return 0; 
}