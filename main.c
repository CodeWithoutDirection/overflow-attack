#include <stdio.h>
#include <string.h>

int main(){
    char password[2];
    char passcheck = 'x';
    printf("\ntype password: \n");
    gets(password);
    if (strcmp(password, "12")==0){
       passcheck = 'l'; 
    }
    else{
        printf("\nincorrect password\n");
    }
    if (passcheck=='l'){
        printf("\nyou logged\n");
    }
    
    return 0;
}