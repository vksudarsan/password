#include <stdio.h>
#include <string.h>
#include <conio.h>


int main()
{
    char username[15];
    char password[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"sudarsan")==0){
        if(strcmp(password,"123")==0){

        printf("\nWelcome.Login Success!");


        }else{
    printf("\nwrong password");
}
    }else{
    printf("\nUser doesn't exist");
}





    return 0;

}
