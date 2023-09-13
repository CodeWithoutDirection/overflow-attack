#include <stdio.h>
#include <string.h>

int main(){
    char password[3];
    char passcheck = 'x';
    printf("\ntype password: \n");
    gets(password);
    if (strcmp(password, "123")==0){
       passcheck = 'a'; 
    }
    else{
        printf("\nincorrect password\n");
    }
    if (passcheck=='a'){
        printf("\nyou logged\n");
    }

printf("Press anything to close");
getchar();
    
    return 0;
}