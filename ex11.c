#include<stdio.h>
  
int main()
{
    float Celsius;
    float Fahrenheit, Kelvin;
    printf("inserisci totale gradi celsius ");
    scanf("%f", &Celsius);
    Kelvin = Celsius + 273.15;
    Fahrenheit = Celsius * (9/5) + 32;
    if (Celsius >= -273.15) {
        printf("La temperatura in Fahrenheit è di %f e in kelvin è di %f\n", Fahrenheit, Kelvin);
    }
    else {
        printf("Errore\n");
    }    
}
