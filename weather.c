#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    float yearlyTotal;
    float overallTotal = 0;  
    float monthlyTotal[12] = {0}; 
    float monthlyAverage;

    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    float amount[5][12] = {
        {6.23, 4.14, 2.17, 6.34, 2.28, 6.46, 2.06, 1.89, 0.76, 3.59, 2.68, 5.14},
        {8.01, 10.58, 7.45, 4.61, 4.19, 2.64, 2.60, 7.04, 5.67, 8.23, 2.93, 2.29},
        {3.62, 3.71, 3.77, 3.74, 5.15, 6.36, 5.98, 6.96, 3.60, 3.52, 1.16, 6.08},
        {3.37, 5.29, 6.06, 4.37, 2.43, 5.30, 4.17, 6.79, 0.99, 1.71, 4.23, 3.44},
        {7.23, 2.32, 5.44, 4.37, 1.57, 4.38, 1.73, 5.24, 1.29, 1.78, 2.01, 3.68}
    };

    for (i = 0; i < 5; i++) {
        yearlyTotal = 0;  
        for (j = 0; j < 12; j++) {
            yearlyTotal += amount[i][j];  
            monthlyTotal[j] += amount[i][j];  
        }
        overallTotal += yearlyTotal;  
        printf("Year %d    Rainfall (inches): %.2f\n", 2019 + i , yearlyTotal);
        printf("\n");
    }

    float overallAverage = overallTotal / 5;  
    printf("The yearly average is: %.2f\n", overallAverage);
    printf("\n");

    for (j = 0; j < 12; j++) {
        monthlyAverage = monthlyTotal[j] / 5;  
        printf("Monthly Average for %s: %.2f\n", months[j], monthlyAverage);
    }
    return 0;
}
