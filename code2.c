#include <stdio.h>

float celsius_to_farenheit(float value){       /*converts from celsius to farenheit*/
    float convert;
    convert = (((9.0/5.0)*value)+32);       /*uses the formula and returns it*/
    return convert;
}

float farenheit_to_celsius(float value){    /*converts from farenheit to celsius*/
    float convert;
    convert = (((5.0/9.0)*value)-32.0);     /*uses the formula and returns it*/
    return convert;
}

float farenheit_to_kelvin(float value){    /*converts from farenheit to kelvin*/
    float convert;
    convert = ((value-32.0)*(5.0/9.0)+273.15);  /*uses the formula and returns it*/
    return convert;
}

float kelvin_to_farenheit(float value){     /*converts from kelvin to farenheit*/
    float convert;
    convert = ((value-273.15)*(9.0/5.0)+32);        /*uses the formula and returns it*/
    return convert;
}

float celsius_to_kelvin(float value){          /*converts from celsius to kelvin*/
    float convert;
    convert = (value+273.15);       /*uses the formula and returns it*/
    return convert;
}

float kelvin_to_celsius(float value){       /*converts from kelvin to celsius*/
    float convert;
    convert = (value-273.15);       /*uses the formula and returns it*/
    return convert;
}

void print_celsius(float temp){         /*If the temperature is celsius, this prints the result*/
    printf("Converted Temperature:%8.2f C\n",temp);   /*prints the converted temperature*/
    if (temp < 0){             /*if the temp is less than 0*/
        printf("Temperature Category: Freezing\n");   /* print freezing*/
        printf("Weater Advisory: Bundle Up!\n");
    }
    else if (temp < 10){      /*if the temp is 0-10*/
        printf("Temperature Category: Cold\n");    /* print freezing*/
        printf("Weater Advisory: Wear a Jacket.\n");
    }
    else if (temp < 25){ /*if the temp is 10-25*/
        printf("Temperature Category: Comfortable\n");  /* print freezing*/
        printf("Weater Advisory: Enjoy the day!\n");
    }
    else if (temp < 35){        /*if the temp is 25-30*/
        printf("Temperature Category: Hot\n");  /* print freezing*/
        printf("Weater Advisory: Stay Hydrated!\n");
    }
    else if (temp > 35){        /*if the temp is 30+*/
        printf("Temperature Category: Extreme Heat\n"); /* print freezing*/
        printf("Weater Advisory: Stay Indoors!\n");
    }
} 

void print_farenheit(float temp){     /*If the temperature is farenheit, this prints the result*/
    printf("Converted Temperature:%8.2f F\n",temp);    /*prints the converted temperature*/
    if (temp < 32){    /*if the temp is less than 32*/
        printf("Temperature Category: Freezing\n");
        printf("Weater Advisory: Bundle Up!\n");
    }
    else if (temp < 50){    /*if the temp is 32-50*/
        printf("Temperature Category: Cold\n");
        printf("Weater Advisory: Wear a Jacket.\n");
    }
    else if (temp < 77){     /*if the temp is 50-77*/
        printf("Temperature Category: Comfortable\n");
        printf("Weater Advisory: Enjoy the day!\n");
    }
    else if (temp < 95){     /*if the temp is 77-95*/
        printf("Temperature Category: Hot\n");
        printf("Weater Advisory: Stay Hydrated!\n");
    }
    else if (temp > 95){     /*if the temp is 95+*/
        printf("Temperature Category: Extreme Heat\n");
        printf("Weater Advisory: Stay Indoors!\n");
    }
} 

void print_kelvin(float temp){/*If the temperature is Kelvin, this prints the result*/
    printf("Converted Temperature:%8.2f K\n",temp);   /*prints the converted temperature*/
    if (temp < 273.15){    /*if the temp is less than 273.15*/
        printf("Temperature Category: Freezing\n");
        printf("Weater Advisory: Bundle Up!\n");
    }
    else if (temp < 283.15){     /*if the temp is 273.15-283.15*/
        printf("Temperature Category: Cold\n");
        printf("Weater Advisory: Wear a Jacket.\n");
    }
    else if (temp < 298.15){    /*if the temp is 283.15-298.15*/
        printf("Temperature Category: Comfortable\n");
        printf("Weater Advisory: Enjoy the day!\n");
    }
    else if (temp < 308.15){    /*if the temp is 298.15-308.15*/
        printf("Temperature Category: Hot\n");
        printf("Weater Advisory: Stay Hydrated!\n");
    }
    else if (temp > 308.15){    /*if the temp is 308.15+*/
        printf("Temperature Category: Extreme Heat\n");
        printf("Weater Advisory: Stay Indoors!\n");
    }
} 

int main(){
    
    while(1){
        float value;
        int first_scale;        /*Initalizes all the variables*/
        int second_scale;
        float conv;
        printf("Enter the temperature:\n");      /*gets the temperature from the user*/
        if (scanf("%f", &value) != 1) {   /*checks that the user entered a float*/
            
            printf("Invalid temperature! Please enter a valid number.\n");
            while (getchar() != '\n');     /*if not a float, clear it*/
        }
        printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin:\n");
        if (scanf("%i", &first_scale) != 1) {   /*checks that the user entered an int*/
            
            printf("Invalid scale! Please enter a valid number.\n");
            while (getchar() != '\n');     /*if not a float, clear it*/ 
        }       
        printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin:\n");
        if (scanf("%i", &second_scale) != 1) {   /*checks that the user entered an int*/
            
            printf("Invalid scale! Please enter a valid number.\n");
            while (getchar() != '\n');     /*if not a float, clear it*/
        }
        if (first_scale == second_scale){    /*makes sure you dont covert to the same scale*/
            printf("Invalid Input");
            }
        else if (first_scale == 1 && second_scale == 2){        
            conv = celsius_to_farenheit(value);             /*calls the desired conversion conversion function*/
            print_farenheit(conv);      /*calls the desired print function*/
            break;
            }
        else if (first_scale == 1 && second_scale == 3){     
            conv = celsius_to_kelvin(value);    /*calls the desired conversion conversion function*/
            print_kelvin(conv); /*calls the desired print function*/
            break;
            }
        else if (first_scale == 2 && second_scale == 1){
            conv = farenheit_to_celsius(value); /*calls the desired conversion conversion function*/
            print_celsius(conv);    /*calls the desired print function*/
            break;
            }
        else if (first_scale == 2 && second_scale == 3){
            conv = farenheit_to_kelvin(value);  /*calls the desired conversion conversion function*/
            print_kelvin(conv);     /*calls the desired print function*/
            break;
            }
        else if (first_scale == 3 && second_scale == 1){
            if (value <= 0){
                printf("Cannot use negative kelvin value!");       /*makes sure the user does not enter a negative kelvin*/
            }
            else{
            conv = kelvin_to_celsius(value);     /*calls the desired conversion conversion function*/
            print_celsius(conv);      /*calls the desired print function*/
            break;
            }
            }
        else if (first_scale == 3 && second_scale == 2){
            if (value <= 0){
                printf("Cannot use negative kelvin value!");      /*makes sure the user does not enter a negative kelvin*/
            }
            else{
            conv = kelvin_to_farenheit(value);    /*calls the desired conversion conversion function*/
            print_farenheit(conv);     /*calls the desired print function*/
            break;
            }
            }
        
        else{
            printf("Invalid Input\n");    /*if user enters a int not in the scale, tell them its invalid.*/
        }
    }   
}