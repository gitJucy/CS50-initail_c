#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
    //get string from user
    printf("What's your name? ");
    
    string s =get_string();
   
   //confirm input is string

if (s!=NULL)

printf("Your initials are: ");
    
    //prints the first letter of user string in uppercase
   
   printf("%c", toupper(s[0]));
   
   //iterate through user string one char at a time
       
       for (int i=0, n=strlen(s); i < n; i++)
        
        {
          //finds spaces in user string
           if(s[i]==' ')
           {
               //prints the next character after a space in uppercase
              
              printf("%c", toupper(s[i+1]));
           }
        
        }
        printf("\n");
        return 0;
    
}
