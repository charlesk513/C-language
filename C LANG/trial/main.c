#include <stdio.h>
#include <stdbool.h>

int main()
{
while(1) {
    int value;
    printf("Enter the value ");
    scanf("%d", &value);
    printf("value = %d\n");

    if (value < 0 && (value%2 == 1)){
        printf("Value is a negative odd number; %d\n", value);

    } else if(value > 0){
        printf("Value is positive\n");
    } else if((value < 0) && (value%2 == 0)) {
        printf("Negative even\n");
    } 
   }
    return 0;
}
