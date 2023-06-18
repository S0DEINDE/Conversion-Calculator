#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const double PI = 3.1415926535897;


void Celfahrenheit(){
    while(1){
        printf("(CF) for Celsius to Fahrenheit or (FC) for Fahrenheit to Celsius\n");
        printf("Enter Q to quit: \n");

        char choice[100];
        printf("Would you like to convert Celsius to Fahrenheit or Fahrenheit to Celsius? \n");
        strtof("%s",(char **) &choice);

        if(strcmp(choice,"CF")==0){
            float celsius;
            printf("Enter temperature in Celsius: \n");
            strtof("%f",(char **) &celsius);

            double fahrenheit = (celsius * 9/5) + 32;
            printf("The temperature in Fahrenheit is: %f\n",fahrenheit);
        }

        else if(strcmp(choice,"FC")==0){
            float fahrenheit;
            printf("Enter temperature in Fahrenheit: \n");
            strtof("%f",(char **) &fahrenheit);

            double celsius = (fahrenheit - 32) * 5/9;
            printf("The temperature in Celsius is: %f\n",celsius);
        }
        else{
            break;
        }
    }
}


void Cosecant(){
    while(1){
        printf("(CSC) for Cosecant to Secant or (SC) for Secant to Cosecant\n");
        printf("Enter Q to quit\n");

        char choice[100];
        printf("Would you like to convert Cosecant to Secant or Secant to Cosecant?\n");
        strtof("%s", (char **) &choice);


        if(strcmp(choice, "CSC") == 0){
            float cosecant;
            printf("Enter the value of cosecant: \n");
            strtof("%s", (char **) &cosecant);

            float theta;
            printf("Enter the value of theta: \n");
            strtof("%s", (char **) &theta);

            double secant = (double) (cosecant * (PI/2 - theta));
            printf("The Secant of %f is %f\n", cosecant, secant);
        }

        else if(strcmp(choice, "SC") == 0){
            float secant;
            printf("Enter the value of secant: \n");
            strtof("%s", (char **) &secant);

            float theta;
            printf("Enter the value of theta: \n");
            strtof("%s", (char **) &theta);

            double cosecant = (double) (secant * (PI/2 - theta));
            printf("The Cosecant of %f is %f\n", secant, cosecant);
        }

        else {
            break;
        }
    }
}

void Cotangent() {
    while(1){
        printf("(CT) for Cotangent to Tangent or (TC) for Tangent to Cotangent\n");
        printf("Enter Q to quit\n");

        char choice[100];
        printf("Would you like to convert Cotangent to Tangent or Tangent to Cotangent?\n");
        scanf("%s", choice);

        if(strcmp(choice, "CT") == 0){
            float cotangent;
            printf("Enter value of cotangent: \n");
            strtof("%f", (char **) &cotangent);

            float theta;
            printf("Enter value of theta: \n");
            strtof("%f", (char **) &theta);

            double tangent = (double) (cotangent *(PI/2 - theta));
            printf("Tangent of %f is %f\n", cotangent, tangent);
        }

        else if(strcmp(choice, "TC") == 0){
            float tangent;
            printf("Enter value of tangent: \n");
            strtof("%f", (char **) &tangent);

            float theta;
            printf("Enter value of theta: \n");
            strtof("%f", (char **) &theta);

            double cotangent = (double) (tangent /(PI/2 - theta));
            printf("Cotangent of %f is %f\n", tangent, cotangent);
        }
        else{
            break;
        }
    }
}


void Cosine(){
    while(1){
        printf("(SC) for Sine to Cosine or (CS) Cosine to Sine\n");
        printf("Enter Q to quit\n");

        char choice[100];
        printf("Would you like to convert Sine to Cosine or Cosine to Sine?\n");
        scanf("%s", choice);

        if (strcmp(choice, "SC") == 0) {
            float sine;
            printf("Enter the value of sine: \n");
            strtof(choice,(char **) &sine);

            float theta;
            printf("Enter the value of theta: \n");
            strtof(choice,(char **) &theta);


            double cosine = (double) (sine*(PI/2 - theta));
            printf("Cosine of %f is %f\n", sine, cosine);
        }
        else if (strcmp(choice, "CS") == 0) {
            float cosine;
            printf("Enter the value of cosine: \n");
            strtof(choice,(char **) &cosine);

            float theta;
            printf("Enter the value of theta: \n");
            strtof(choice,(char **) &theta);


            double sine = (double) (cosine*(PI/2 - theta));
            printf("Sine of %f is %f\n", cosine, sine);
        }
        else{
            break;
        }
    }
}


void Millimeter(){
    while(1){
        printf("(MM) for Meter to Millimeter, (M) for Millimeter to Meter\n");
        printf("Enter Q to quit\n");

        char choice[100];
        printf("Would you like to convert Meter to Millimeter or Millimeter to Meter?\n");
        scanf("%s", choice);

        if (strcmp(choice, "MM") == 0){
            float meter;
            printf("Enter the meter value: \n");
            strtof("%f", (char **) &meter);

            double millimeter = (double) (meter * 1000);
            printf("The Millimeter value is: %.2f\n", millimeter);
        }

        else if (strcmp(choice, "M") == 0){
            float millimeter;
            printf("Enter the millimeter value: \n");
            strtof("%f", (char **) &millimeter);

            double meter = (double) (millimeter / 1000);
            printf("The Meter value is: %.2f\n", meter);
        }
        else{
            break;
        }
    }
}


void kiloNautical(){
    while(1){
        printf("(KN) for Kilometer to Nautical Meter, (NK) for Nautical Meter to Kilometer\n");
        printf("Enter Q to quit\n");

        char choice[100];
        printf("Would you like to convert Kilometer to Nautical Meter or Nautical Meter to Kilometer?\n");
        scanf("%s", choice);

        if(strcmp(choice, "KN") == 0){
            float kilometers;
            printf("Enter number in kilometers: \n");
            strtof("%f", (char **) &kilometers);

            double nauticalMeters = (double) (kilometers * 1.852);
            printf("Nautical Meters: %.2f\n", nauticalMeters);
        }

        else if (strcmp(choice, "NK") == 0){
            float nauticalMeter;
            printf("Enter number in Nautical Meters: ");
            strtof("%f", (char **) &nauticalMeter);

            double kilometers = (double) (nauticalMeter / 1.852);
            printf("Kilometers: %.2f\n", kilometers);
        }
        else{
            break;
        }
    }
}


void Kilometer(){
    while(1){
        printf("(KM) for Kilometer to Meter, (MK) for Meter to Kilometer\n");
        printf("Enter Q to quit\n");

        char choice[100];
        printf("Would you like to convert Kilometer to Meter or Meter to Kilometer? ");
        scanf("%s", choice);

        if (strcmp(choice, "KM") == 0){
            float kilometers;
            printf("Enter the number of Kilometers: ");
            strtof("%f", (char **) &kilometers);

            double meters = (double) (kilometers * 1000);
            printf("The number of Meters is: %.2f\n", meters);
        }

        else if (strcmp(choice, "MK") == 0){
            float meters;
            printf("Enter the number of Meters: ");
            strtof("%f", (char **) &meters);

            double kilometers = (double) (meters / 1000);
            printf("The number of Kilometers is: %.2f\n", kilometers);
        }
        else {
            break;
        }
    }

}

void Feetmile(){
    while(1){
        printf("(FM for Feet to Mile, (MF) for Mile to Feet)\n");
        printf("Enter Q to quit\n");

        char choice[100];
        printf("Would you like to convert Feet to Mile or Mile to Feet?\n");
        scanf("%s", choice);

        if(strcmp(choice, "FM") == 0){
            float feet;
            printf("Enter number in feet:\n");
            strtof("%f",(char **) &feet);

            double mile = (double) (feet/5280);
            printf("The equivalent mile is: %.2f\n", mile);
        }

        else if (strcmp(choice, "MF") == 0){
            float mile;
            printf("Enter number in miles:\n");
            strtof("%f",(char **) &mile);

            double feet = (double) (mile*5280);
            printf("The equivalent feet is: %.2f\n", feet);
        }
        else {
            break;
        }
    }
}


void raDegree(){
    while(1){
        printf("(RD) for Radians to Degrees, (DR) for Degrees to Radians\n");
        printf("Enter Q to quit\n");
        char choice[100];
        printf("Would you like to convert radians to degrees or degrees to radians?\n");
        scanf("%s",choice);

        if (strcmp(choice,"RD") == 0){
            float rad;
            printf("Enter number in radians:\n");
            strtof("%f", (char **) &rad);

            double deg = (double) (rad * 180 / PI);
            printf("The equivalent degrees are: %f\n",deg);
        }
        else if (strcmp(choice,"DR") == 0){
            float deg;
            printf("Enter number in degrees:\n");
            strtof("%f", (char **) &deg);

            double rad =  (double) (deg * PI / 180);
            printf("The equivalent radians are: %f\n",rad);
        }
        else{
            break;
        }
    }


}

void menu(){
    printf("(RD) for Radians/Degrees Conversion, (FM) Feet/Mile Conversion, (M) Kilometer/Meter Conversion,\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("(KM) Kilometer/Nautical Mile Conversion, (MM) Meter/Millimeter Conversion, (SC) Sine/Cosine Conversion,\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("(TC) Tangent/Cotangent Conversion, (CSC) Cosecant/Secant Conversion, (CF) Celsius/Fahrenheit Conversion!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    while(1){
        char choice[100];
        printf("Which conversion would you like to do:\n");
        scanf("%s", choice);

        printf("Enter Q to quit!\n");

        if (strcmp(choice, "RD") == 0) {
            raDegree();
        }
        else if (strcmp(choice, "FM") == 0) {
            Feetmile();
        }
        else if (strcmp(choice, "M") == 0) {
            Kilometer();
        }
        else if (strcmp(choice, "KM") == 0) {
            kiloNautical();
        }
        else if (strcmp(choice, "MM") == 0) {
            Millimeter();
        }
        else if (strcmp(choice, "SC") == 0) {
            Cosine();
        }
        else if (strcmp(choice, "TC") == 0) {
            Cotangent();
        }
        else if (strcmp(choice, "CSC") == 0) {
            Cosecant();
        }
        else if (strcmp(choice, "CF") == 0) {
            Celfahrenheit();
        }
        else{
            break;
        }

    }


}


int main(){
    printf("This is the math conversion and calculation program.\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONVERSION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CALCULATOR~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("You will determine which task you would like to do based on your input.\n");

    char namer[100];
    printf("What is your name? \n");
    scanf("%s", namer);
    printf("It's nice to meet you %s!\n", namer);

    menu();

    printf("Thanks for using my program %s!\n have a great rest of your day!\n", namer);

}
