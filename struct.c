#include<stdio.h>
struct {
    char*engine;
} car1,car2;
int main(){

    car1.engine ="BMW SERIES 4";
    car2.engine ="BMW SERIES 3";
    printf("%s\n",car1.engine);
    printf("%s",car2.engine);
}