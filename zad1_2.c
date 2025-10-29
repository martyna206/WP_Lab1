#include <stdio.h>
#include <stdbool.h>


float celcius(float celcius) {
    return celcius * 1.8 + 32;
}
float farenheit(float farenheit){
    return (farenheit - 32) / 1.8;
}

int main() {
    printf("Jaka jest wartosć temperatury? ");
    float temp;
    scanf("%f",&temp);
    printf("Jaki masz myp temperatury? ");
    char type;
    scanf(" %c",&type);
    if(type == 'c' || type == 'C'){
        temp = celcius(temp);
    }
    else if (type == 'f'|| type == 'F'){
        temp = farenheit(temp);
    }
    else{
        printf("zly typ danych");
        return 0;
    }

    printf("Temperatura po konwersji wynosi: %f", temp);
    printf(" stopni %c",type);
    return 0;
}