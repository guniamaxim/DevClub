#include <stdio.h>

#define MAX_PRICE 1001

int main() {
    int farmerQuantity;
    unsigned long long amountNeeded;
    int farmersHave = 0;
    unsigned long long minPrice = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int milkPrices[MAX_PRICE];
    
    fscanf(in, "%d %llu", &farmerQuantity, &amountNeeded);
    
    for ( int i = 0; i < MAX_PRICE; i++ ) {
        milkPrices[i] = 0;
    }
    for ( int i = 0; i < farmerQuantity; i++ ) {
        int index;
        int amount;
        
        fscanf(in, "%d %d", &amount, &index);
        milkPrices[index] += amount;
        farmersHave += amount;
    }
    
    if ( farmersHave >= amountNeeded ) {
        for ( int i = 0; i < MAX_PRICE; i++ ) {
            if ( milkPrices[i] != 0 ) {
                if ( amountNeeded > milkPrices[i] ) {
                    amountNeeded -= milkPrices[i];
                    minPrice += milkPrices[i] * i;
                } else {
                    minPrice += amountNeeded * i;
                    amountNeeded = 0;
                }
            }
        }
    }
    fprintf(out, "%llu\n", minPrice);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
