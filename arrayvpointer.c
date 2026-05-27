#include <stdio.h>
int main(){
    char *canbechanged = "AARYAN";
    puts(canbechanged);
    canbechanged = "LOL IS TS TUFF?? SEE I COULD CHANGE LITERALLY EVEYTIME IN POINTERS, DREAM FOR []";
    puts(canbechanged);

    char cannotbechanged[] = "AARYAN";
    puts(cannotbechanged);
//    cannotbechanged = "YOU CANT MODIFY";
    puts(cannotbechanged);
}