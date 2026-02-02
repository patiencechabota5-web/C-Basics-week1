
#include <stdio.h>

int main(){
    char name[30];
    int age;
    char hobby[30];
    printf("enter your name: ");
    scanf("%s", name);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("What's your favourite hobby: ");
    scanf("%s", hobby);
    printf("Hello %s, You are %d years old your favourite hobby is %s.\n", name, age, hobby);
return 0;
}
