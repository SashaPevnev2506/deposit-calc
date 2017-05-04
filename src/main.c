#include <stdio.h>
#include "deposit.h"

int main(void) {
    int duration;
    int investment;
    
    printf("Enter investment duration: ");
    scanf("%d", &duration);
    printf("Enter investent amount: ");
    scanf("%d", &investment);

    if (inputCheck(duration, investment)) return 0;
    investment = perform(duration, investment);

    printf("Duration: %d \nInvestment: %d", duration, investment);
    printf("\n");
    
    return 0;
}
