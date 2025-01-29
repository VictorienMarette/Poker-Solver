#include <stdio.h>
#include "../src/poker-env/Cards.h"

int main() {
    Rank r1 = THREE;
    Rank r2 = TWO;

    if(r1 > r2){
        printf("Yup\n");
    }else{
        printf("Nop\n");
    }
    return 0;
}