#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
    int a_squared = 0,
    b_squared = 0;
    
    system("chcp 65001");
    printf("\nFormula: a² + b² = c²\n");

    printf("Enter a²: ");
    scanf("%d", &a_squared);
    
    printf("Enter b²: ");
    scanf("%d", &b_squared);

    system("cls");

    int a_expanded = a_squared * a_squared,
    b_expanded = b_squared * b_squared,
    a_plus_b = a_expanded + b_expanded;

    float a_plus_b_squared = sqrt(a_plus_b);

    printf("%d² + %d² = c²\n", a_squared, b_squared);
    printf("%d² = %d\n", a_squared, a_expanded);
    printf("%d² = %d\n", b_squared, b_expanded);
    printf("%d + %d = %d\n", a_expanded, b_expanded, a_plus_b);
    printf("√%d = %f\n", a_plus_b, a_plus_b_squared);
    
    printf("\nc² = %f\n", a_plus_b_squared);

    system("pause");
    return 0;
}
