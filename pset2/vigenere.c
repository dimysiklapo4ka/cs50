#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]){
    
    if (argc != 2){
        
        printf("./vigenere (text key)");
        return 1;
    }
    
    for (int i = 0, n = strlen(argv[1]); i < n; i++){
        
        if (!isalpha(argv[1][i])){
            
            printf("text key = text not integer");
            return 1;
        }
    }
    
    string text = get_string();
    string key = argv[1];

    int keylen = strlen(key);
    int n = strlen(text);
    int s = 0;
    
    int key1 = 0;
    
    for (int i = 0; i < n; i++){
        
        key[i] = key[(s % keylen)];
        
         if (isupper(key[i])){
             
            key1 = (int) (key[i] - 65);
         }
            
        if (islower(key[i])){
            
            key1 = (int) (key[i] - 97);
        }
           
        if(isalpha(text[i]) && isupper(text[i])){
          
            text[i] = (text[i] - 65 + key1) % 26 + 65;
            s++;
            }
            
        if (isalpha(text[i])  && islower(text[i]) ){
                
            text[i] = (text[i] - 97 + key1) % 26 + 97;
            s++;
            }
            
            printf("%c", text[i]);
    }
    
    printf("\n");
}