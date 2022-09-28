/*
Date: 28/09/2022 
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Game store prices.
Last Modification: 28/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE (IN SPANISH) -------------------------
/*
La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los
ingredientes para cada tipo de pizza aparecen a continuación.
 Ingredientes vegetarianos: Pimiento y tofu.
 Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.
Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en
función de su respuesta le muestre un menú con los ingredientes disponibles para que elija.
Solo se puede eligir un ingrediente además de la mozzarella y el tomate que están en todas la
pizzas.
Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva.
*/

//------------------ MAIN FUNCTION ---------------------

int main(){
    int ingredient;
    char response;
    cout << "Welcome customer to Bella Napoli Pizzeria!\nAll our pizzas have mozzarella and tomato\nWould you like a vegetarian pizza? (Y/N)\n";
    cin >> response;
    if (response == 'Y' || response == 'N'){
        if (response == 'Y'){
            cout << "Select an ingredient: \n 1. Pepper\n 2. Tofu\n";
            cin >> ingredient;
            if (ingredient == 1){
                cout << "Your pizza has the following ingredients:\n Pepper \n Mozarella \n Tomato\n";
            }
            if (ingredient == 2){
                cout << "Your pizza has the following ingredients:\n Pepper \n Mozarella \n Tomato\n";
            }
        }
        else if (response == 'N'){
            cout << "Select an ingredient: \n 1. Pepperoni\n 2. Ham\n 3. Salmon\n";
            cin >> ingredient;
        }
    }
    else{
        cout << "You've inputted an invalid response, try again";
    }
    return 0;
}
