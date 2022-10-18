#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int main(){
    char c;
    char may;
    int n = 0;
    int totalvowels = 0;
    do{
        n = read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if (may == 'A' ||
        may == 'E' ||
        may == 'I' ||
        may == 'O' ||
        may == 'U'){
            totalvowels += 1;
        }
    } while(n != 0);
    printf("El total de vocales es %d\n", totalvowels);
    return 0;
}