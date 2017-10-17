#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//TODO: write a register-login-logout program
//if you type in register print out "Registration..." or "You are already registered." if you are registered.
//you are able to log in, if you are already registered, otherwise not. In that case print out "You are not registered.".
//if you type in login print out "Logging in..." or "Already logged in." if are logged in.
//if you type in logout print out "Logging out..." or "Already logged out." if are logged out.


int main()
{
    char command[256];
    char logged_in = 0;
    char registered = 0;

    while(strcmp(command, "exit") != 0){
    puts("Enter one of the following commands:\t\t\t type 'exit' to exit\n'register'/'login'/'logout'");
    gets(command);
    printf("\n");

        if(strcmp(command, "register") == 0){
                if(registered == 0){
                    puts("Registration completed.\n");
                    registered = 1;
                }
                else
                    puts("You are already registered.\n");

        }
         else if(strcmp(command, "login") == 0){
                if(registered == 0)
                    puts("You are not registered.\n");
                else if(registered != 0 && logged_in == 0){
                    puts("Login completed\n");
                    logged_in = 1;
                }
                else
                    puts("You are logged in\n");

        }
         else if(strcmp(command, "logout") == 0){
                if(logged_in != 0){
                    puts("Logout completed.\n");
                    logged_in = 0;
                }
                else
                    puts("You are not logged in\n");

        }else
           puts("invalid input\n");

    }
   puts("You have exited");
}
