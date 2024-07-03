
#include <stdio.h>

int main(void) {

    double cost = 0.00;
    printf("\n%s", "Enter historical cost of the assets: ");
    scanf("%lf", &cost);

    int periods = 0;
    printf("%s", "Enter the number of periods: ");
    scanf("%d", &periods);

    double depreciation = 0.00;
    printf("\n%8s\t%12s\t%12s\n", "Periods", "Depreciation", "Cost");
    printf("%8d\t%12.2f\t%12.2f\n", periods-periods, depreciation, cost);
    depreciation = cost / periods;

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

