/*Defina la función copyString que recibe un puntero, que apuntará a una cadena de
caracteres. Al ejecutarse la función, la misma deberá retornar una copia, en una
nueva porción de memoria */

#include<stdio.h>
char copystring(char*, char);
int main(){
    char text[1000], *textptr, newtext, *newptr;
    printf("Ingrese un texto:\n");
    gets(text);
    textptr = &text;
    newtext=copystring(textptr, newtext);
    newptr = &newtext;
    printf("El texto regenerado en una nueva posicion de memora la cual es %p, es %s", newptr, newtext);
    return 0;

}
char copystring(char *textptr, char newtext){
    newtext = *textptr;
    return newtext;
}