#include <stdio.h>
#include <cs50.h>
#include <math.h>

void SmallChange(float f);

int main(void){
    printf("O hai! How much change is owed?\n");
    int f = (int)round (get_float() * 100);
    
    while(f < 0){
        
        printf("Retry\n");
    f = (int)round (get_float() * 100);
    
    }

    SmallChange(f);

}

void SmallChange(float f){
    int m = 25, n = 10, b = 5, v = 1;
    int count = 0;
    
    while(true){
        if (f >= m ){
                f = f - m;
                count++;
            }else if (f >= n){
                f = f - n;
                count++;
            }else if (f >= b){
                f = f - b;
                count++;
            }else if (f >= v){
                f = f-v;
                count++;
            }else {
                break;
            }
            
    }
    printf("%i\n", count);
    
}
