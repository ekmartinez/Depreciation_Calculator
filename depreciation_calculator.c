#include <stdio.h>

int main(void) {

    double cost = 0.00;
    printf("\n%s", "Enter historical cost of the asset: ");
    scanf("%lf", &cost);

    int periods = 0;
    printf("%s", "Enter the number of periods: ");
    scanf("%d", &periods);

    double depreciation = cost / periods;

    printf("\n%8s\t%12s\t%12s\n", "Periods", "Depreciation", "Cost");
    printf("%8d\t%12.2f\t%12.2f\n", periods-periods, depreciation-depreciation, cost);

    int counter = 1;

    do {
        cost -= depreciation;

        if (cost < 0) {
            cost = 0;
        }
        printf("%8d\t%12.2f\t%12.2f\n", counter++, depreciation, cost);

    } while (counter <= periods);

    puts("");

    return 0;
}

/*
Example:

Enter historical cost of the asset: 1000.00
Enter the number of periods: 12

 Periods        Depreciation            Cost
       0                0.00         1000.00
       1               83.33          916.67
       2               83.33          833.33
       3               83.33          750.00
       4               83.33          666.67
       5               83.33          583.33
       6               83.33          500.00
       7               83.33          416.67
       8               83.33          333.33
       9               83.33          250.00
      10               83.33          166.67
      11               83.33           83.33
      12               83.33            0.00

*/
