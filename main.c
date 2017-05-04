#include <stdio.h>

int inputCheck(int, int);
int perform(int, int);

int main()
{
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

int inputCheck(int dur, int amount) {
    if (dur <= 0 || dur > 365 || amount <= 0) return 1;
    return 0;
}

int perform(int dur, int amount) {
    if (dur >= 0 && dur <= 30) {
        amount *= 0.9;
    }
    
    if (amount < 100000) {
        if (dur >= 31 && dur <= 120) {
            amount *= 1.02;
        }

        if (dur >= 121 && dur <= 240) {
            amount *= 1.06;
        }
        
        if (dur >= 241 && dur <= 365) {
            amount *= 1.12;
        }
    }
    
    if (amount > 100000) {
        if (dur >= 31 && dur <= 120) {
            amount *= 1.03;
        }

        if (dur >= 121 && dur <= 240) {
            amount *= 1.08;
        }
        
        if (dur >= 241 && dur <= 365) {
            amount *= 1.15;
        }
    }
    return amount;
}
