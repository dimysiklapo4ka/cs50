#include <stdio.h>
#include <cs50.h>
#include <string.h>

string getStringName();
string checkRegister();
string getInitials();

int main(){
    
    getInitials();
}

string getStringName(){
    
   string name = get_string();
   
   return name; 
}

string checkRegister(){
    
    string s = getStringName();
    
    for (int i = 0, n = strlen(s); i < n; i++){
        if(s[i] >= (char) 97 && s[i] <= (char) 122 ) {
         
        s[i] = (char) s[i] - 32;
        }  
    }
    
    return s;
}

string getInitials(){
    
    string s = checkRegister();
    printf("%c", s[0]);
    for (int i = 1, n = strlen(s); i < n; i++){
        if(s[i] == (char)32) {
         
        printf("%c", s[i+1]);
        
        }  
    }
    printf("\n");
    return s;
}