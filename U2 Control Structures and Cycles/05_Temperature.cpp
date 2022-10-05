/*
Date: 3/10/2022
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Temperatures.
Last Modification: 5/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

//---------------------ISSUE---------------------------
/*Make a program that allows 6 entries and outputs the average, lowest and highest value*/

//------------------ MAIN FUNCTION ---------------------

int main()
{
    float temperature, average, summatorytemperature = 0, mintemperature = 99999, maxtemperature = -9999;
    int contador = 1;
    do
    {
        cout << "Give me the temperature: ";
        cin >> temperature;
        if (temperature >= maxtemperature)
        {
            maxtemperature = temperature;
        }
        if (temperature <= mintemperature)
        {
            mintemperature = temperature;
        }
        summatorytemperature += temperature;
        contador++;
    } while (contador <= 6);
    average = summatorytemperature / 6;
    cout << "The average of all the temperatures is " << average << " C° \nThe lowest temperature is " << mintemperature << " C° \nThe highest temperature is " << maxtemperature << " C° \n";
    return 0;
}