#include <stdio.h>
#include <cs50.h>

void Treangle(int n);
void TestingPositivValue(int n);


int main(void){
    printf("Height : ");
    int n = get_int();
   TestingPositivValue(n);
}

void Treangle(int n){
    
    int a = 2, b = 0;
    
    for (int i = 0; i < n; i++){
        
        while (b < n - 1){
            printf(" ");
            b++;
        }
        
        b = i+1;
        
        for (int j = 0; j < a; j++){
            printf("#");
        }
        a++;
        printf("\n");
    }
}

void TestingPositivValue(int n){
    while(true){
        if (n >= 0 && n <= 23){
            Treangle(n);
            break;
        }
        printf("Retry : ");
        n = get_int();
    }
}

