// WAP to implement program 5 using 'for' and 'do-while' loop. 
# include <stdio.h>

int main()
{
    // USING DO WHILE LOOP:
    // int i = 1;
    int sum = 0;
    // do{
    //     sum += 1;
    //     i++;
    //  } while (i <= 10);
    for (int i = 1; i <= 10; i++)
    {
        sum += 1; 
    }
    printf("The sum of first natural numbers is %d", sum);
    return 0; 
}