/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/

/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 - 100 => A
80 - 90 => B
70 - 80 => C
60 - 70 => D
50 - 60 => E
<50     => F
*/

#include <stdio.h>

int main(){
    char ch = 'A';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97, 122
    if(ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
         printf("This character not lowecase \n");
    }
    return 0;
}