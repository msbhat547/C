#include<stdio.h>

/**
 * Fahrenheit to celsius conversion program
 * Author: Ajay P S (email:- ajayps547@gmail.com)
 **/
int main(){
	float lower = 0;
	float upper = 200;
	printf("Fahrenheit\tCelsius\n");
	for(float  fahrenheit = lower; fahrenheit <= upper;  fahrenheit+= 20){
		float celsius = (5*(fahrenheit-32))/9;
		printf("%f\t%f\n",fahrenheit,celsius);
	}
}

