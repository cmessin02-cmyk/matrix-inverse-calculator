#include <stdio.h>
void calculate2x2() {
    double a, b, c, d;
    double det;
    double inv_a, inv_b, inv_c, inv_d;

    printf("\n--- 2x2 Matrix Inverse Calculator---\n");
    printf("Enter elements row by row:\n");
    printf("Enter element a (Row 1, Col 1): "); 
scanf("%lf", &a);
    printf("Enter element b (Row 1, Col 2): "); 
scanf("%lf", &b);
    printf("Enter element c (Row 2, Col 1): "); 
scanf("%lf", &c);
    printf("Enter element d (Row 2, Col 2): "); 
scanf("%lf", &d);

    printf("\nYour Input Matrix:\n");
    printf("[ %.2f  %.2f ]\n", a, b);
    printf("[ %.2f  %.2f ]\n", c, d);

    det = (a * d) - (b * c);

    if (det == 0.0) {
        printf("Mathematical Error: The determinant is 0. This matrix is singular and has NO inverse.\n");
    } 
else {
        inv_a =  d / det;
        inv_b = -b / det;
        inv_c = -c / det;
        inv_d =  a / det;

        printf("\nCalculated Inverse Matrix:\n");
        printf("[ %.2f  %.2f ]\n", inv_a, inv_b);
        printf("[ %.2f  %.2f ]\n", inv_c, inv_d);
    }
}

void calculate3x3() {
    double a, b, c, d, e, f, g, h, i;
    double det;
    double inv_a, inv_b, inv_c, inv_d, inv_e, inv_f, inv_g, inv_h, inv_i;

    printf("\n--- 3x3 Matrix Inverse Calculator ---\n");
    printf("Enter elements row by row:\n");
    printf("Enter element a (Row 1, Col 1): "); 
scanf("%lf", &a);
    printf("Enter element b (Row 1, Col 2): "); 
scanf("%lf", &b);
    printf("Enter element c (Row 1, Col 3): "); 
scanf("%lf", &c);
    printf("Enter element d (Row 2, Col 1): "); 
scanf("%lf", &d);
    printf("Enter element e (Row 2, Col 2): "); 
scanf("%lf", &e);
    printf("Enter element f (Row 2, Col 3): "); 
scanf("%lf", &f);
    printf("Enter element g (Row 3, Col 1): "); 
scanf("%lf", &g);
    printf("Enter element h (Row 3, Col 2): "); 
scanf("%lf", &h);
    printf("Enter element i (Row 3, Col 3): "); 
scanf("%lf", &i);

    printf("\nYour Input Matrix:\n");
    printf("[ %.2f  %.2f  %.2f ]\n", a, b, c);
    printf("[ %.2f  %.2f  %.2f ]\n", d, e, f);
    printf("[ %.2f  %.2f  %.2f ]\n\n", g, h, i);

    det = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);

    if (det == 0.0) {
        printf("Mathematical Error: The determinant is 0. This matrix is singular and has NO inverse.\n");
    } else {
        inv_a =  (e * i - f * h) / det;
        inv_b = -(b * i - c * h) / det;
        inv_c =  (b * f - c * e) / det;

        inv_d = -(d * i - f * g) / det;
        inv_e =  (a * i - c * g) / det;
        inv_f = -(a * f - c * d) / det;

        inv_g =  (d * h - e * g) / det;
        inv_h = -(a * h - b * g) / det;
        inv_i =  (a * e - b * d) / det;

        printf("Calculated 3x3 Inverse Matrix:\n");
        printf("[ %.2f  %.2f  %.2f ]\n", inv_a, inv_b, inv_c);
        printf("[ %.2f  %.2f  %.2f ]\n", inv_d, inv_e, inv_f);
        printf("[ %.2f  %.2f  %.2f ]\n", inv_g, inv_h, inv_i);
    }
}

int main() {
    int choice;

    printf("=========================================\n");
    printf("    Matrix Inverse Calculator (2x2/3x3)   \n");
    printf("=========================================\n\n");
    
    printf("Select Matrix Dimension:\n");
    printf("1. 2x2 Matrix\n");
    printf("2. 3x3 Matrix\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            calculate2x2();
            break;
        case 2:
            calculate3x3();
            break;
        default:
            printf("\nInvalid Choice! Please restart the program and select 1 or 2.\n");
    }

    return 0;
}
