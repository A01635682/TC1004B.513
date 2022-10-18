#include <stdio.h>

int main(){
    FILE*sort;
    char *cadenas[10];
    cadenas[0] = "hola";
    cadenas[1] = "como";
    cadenas[2] = "estas";
    cadenas[3] = "bye";
    sort = popen("sort","w");
    for(int i=0;i<4;i++){
        fprintf(sort,"%s\n",cadenas[i]);
    }
    pclose(sort);
    return 0;
}