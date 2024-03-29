#include<stdio.h>
#include<stdbool.h>

int main(){
    printf("%d\n", 10 == 10);  // Return 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15);  // Return 0 (false), because 10 is not equal to 15
    printf("%d", 5 == 15);     // Return 0 (false), because 5 is not equal to 55

    return 0;

}
