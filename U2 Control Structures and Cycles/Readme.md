<h1 align="center">
WELCOME TO UNIT 2: CONTROL STRUCTURES AND CYCLES

### This unit is about control structures and cycles.
This unit is about cycles and control structures (i.e: if, if else, for...). During this unit we actually had to make use of our creativity and brain to solve problems (Unlike previous unit which really was just an introduction to programming and using github). Hope you enjoy.
<br /><br />
<div align ="center">
<img alt="Credits:DeeKay" height="300" src="Imagenes/cover.gif"/>
</div> 
<br />

## Index:  

- [Exercise 1](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#-exercise-1--annual-rent-program-for-calculating-taxes-for-an-anual-rent-based-on-a-value-the-user-inputs)  
- [Exercise 2](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#exercise-2--benefits-program-for-calculating-a-bonus-based-on-an-employee-evaluation)  
- [Exercise 3](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#exercise-3--game-center-customer-price)  
- [Exercise 4](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#exercise-4--vegetarian-pizza-ingredient-selection)  
- [Exercise 5](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#-exercise-5--average-temperature-maxium-and-minium-value)
- [Exercise 6](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#-exercise-6--products-selling-totals)
- [Exercise 7](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#-exercise-7--decimal-number-to-binary-value)
- [Exercise 8](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#-exercise-8--product-of-a-number-done-x-times-in-a-table-format)
- [Exercise 9](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#-exercise-9--find-the-root-in-a-graph-using-the-bisection-method)
<br />
<h1 align="center">
    <img alt="Exercise1" height="30" src="Imagenes/exercise1.gif"/>
 Exercise 1.- Annual Rent [Program for calculating taxes for an anual rent based on a value the user inputs]
</h1>

### Input
```c++
    cout << "Input your annual rent:" << endl;  
    cin >> Renta;  
```

### Process
 ``` c++  
    if (Renta > 0 )  
    {  
        if (Renta >= 60000)  
        {  
            Impuesto = Renta*.45;  
        }  
        else if (Renta >= 35000)  
        {  
            Impuesto = Renta*.30;  
        }  
        else if (Renta >= 20000)  
        {  
            Impuesto = Renta*.20;  
        }  
        else if (Renta >= 10000)  
        {  
            Impuesto = Renta*.15;  
        }  
        else if (Renta >= 0)  
        {  
            Impuesto = Renta*.05;  
        } 
```

### Output
```c++
        cout << endl << "Your annual rent is: $" << Renta << endl;//Rent value inputted
        cout << "You have a tax of " << (Impuesto/Renta)*100 << "%: $" << Impuesto << endl; //Print out tax percentage followed by money value
        cout << "The total amount to pay is: $" << Renta + Impuesto << endl << "\nVisualización en tabla:\n"; //Table visualization (Alternative view)
        cout << "RENT      TAX(%)     TAX($)     TOTAL($)"<< endl;
        cout << "$ " << Renta << "      " << (Impuesto/Renta)*100 << "% 
    }
```
### Explanation
This program is about applying a tax to an annual rent based on the rent value:  
RENT VALUE | TAX(%)  
60000 | 45%  
35000 | 30%  
20000 | 20%  
10000 | 15%  
+0    | 5%  
The program works this way:  
1. Ask the user to write their annual rent.
2. The user types in their annual rent.
3. Through the use of _if_ , verify that the user typed in a valid number in the rent.
4. If the user types in a wrong number, don't run the program.
5. If the user types in a valid number proceed with the main _if_ function:  
5.1. Check the data value and run it through a bunch of _if_ and _if else_ in descending order.  
5.2. If the value is bigger than 60000, multiply the tax value by .45 to symbolise that the tax is 45%. If the value is bigger than 35000, apply a tax of 30% by multiplying it by .30 and so on.  
6. Print out the rent the user initially pays, the tax percentage, the tax value and print out the total of rent the user must pay.
7. Use Return 0 to check if the program is running correctly.
### Tests
One for each case:  
**a)** +60000  
<div align ="center">
<img alt="45" height="150" src="Imagenes/45percent.png"/>
</div>  

**b)** 35000-59999  
<div align ="center">
<img alt="30" height="150" src="Imagenes/30percent.png"/>
</div> 

**c)** 20000-34999  
<div align ="center">
<img alt="20" height="150" src="Imagenes/20percent.png"/>
</div>

**d)** 10000-1999  
<div align ="center">
<img alt="15" height="150" src="Imagenes/15percent.png"/>
</div>

**e)** 1-9999  
<div align ="center">
<img alt="5" height="150" src="Imagenes/5Percent.png"/>
</div>  

<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />
<h1 align="center">
<img alt="Exercise2" height="30" src="Imagenes/exercise2.png"/>Exercise 2.- Benefits [Program for calculating a bonus based on an employee evaluation]
</h4>

### Input
```c++
    cout << "Input the employee qualification\n";
    cin >> calificacion;
```

### Process
``` c++
    if ((calificacion == 0.0) || (calificacion == 0.4) || (calificacion >= 0.6) && calificacion<=1){//Multiple If conditions, the number must be 0,0.4 or greater than 0.6 and being lower than 1.
        if (calificacion == 0.0){//Print out evaluation level of the employee
            cout << "An Unacceptable employee.";
        }
        else if (calificacion == 0.4){
            cout << "An Acceptable employee.";
        }   
        else if (calificacion >= 0.6){
            cout << "A Meritorous employee.";
        }
```

### Output
```c++
        cout << "\nWith an evaluation of " << calificacion << " , the employee will receive " << (calificacion*100) << "%: $" << (bono*calificacion) << "\n";//Print out percentage and value of the bonus
    } 
    else {
        cout << "\nThe value you inputted is invalid, try again.\n";//In case the number is invalid
    }
```

### Explanation
Employees are rated based on their work perfomance; this program is about giving the employees their deserved bonus based on their performance on different scalings; however, the rating must be 0.0, 0.4 or greater than 0.6, any other value is invalid. The bonus is a percentage equal to their performance where 100% percent is $2400 and 0% is $0.
The program works this way:  
1. Ask the user about their qualification on a scale on 0 to 1 (Where 1 is 100% and 0 is 0%)
2. If the user types a value other than 0, 0.4 or a number bigger than 0.6, the program does not run and it says that the qualification is invalid.
3. If the user types in a valid value, print out what level the employee has followed up by the bonus percentage and value.
4. Return 0 to check that the program is executing correctly.

### Tests
**a)** Unacceptable

<div align ="center">
<img alt="unacceptable" height="100" src="Imagenes/unacceptable.png"/>
</div> 

**b)** Acceptable

<div align ="center">
<img alt="acceptable" height="100" src="Imagenes/acceptable.png"/>
</div> 

**c)** Meritorious

<div align ="center">
<img alt="meritorious" height="100" src="Imagenes/merit.PNG"/>
</div> 

**d)** Invalid

<div align ="center">
<img alt="invalid" height="100" src="Imagenes/invalid.PNG"/>
</div> 

<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />
<h1 align="center">
<img alt="Exercise3" height="45" src="Imagenes/exercise3.gif"/>Exercise 3.- Game center customer price
</h4>

### Input
```c++
    cout << "Customer age: \n";//Ask for the customer age
    cin >> age;
```

### Process
```c++
    if (age >= 0){
        if (age >= 0 && age <4){
            price = 0;
        }
        else if (age >= 4 && age <= 18){
            price = 5;
        }
        else if (age > 18){
            price = 10;
        }
```

### Output
```c++
        cout << "\nCustomer Age: " << age << "\nPrice to pay: $" << price << endl;//Output customer age and price to pay
    }
    else {
        cout << "\nThe age you've inputted is invalid, try again.\n";//In case the age value is invalid
    }
```
### Explanation
The program is about pricing the entrance for the customer at a game center base on their age:  
+0 years | FREE ENTRANCE  
4-18 years | $5  
+18 years | $10  
It works the following way:  
1. Ask the for the customer age
2. Based on the inputted value, declare a value for the price
3. Print out the customer data and price to pay  
3.1. If the user typed in an invalid response, print out a error message.
4. Return 0 to check that the program ran succesfully.  

### Tests
**a)** <3  
<div align ="center">
<img alt="age0" height="120" src="Imagenes/0age.PNG"/>
</div> 

**b)** 4-18  
<div align ="center">
<img alt="age4-18" height="120" src="Imagenes/4age.PNG"/>
</div> 

**c)** +18  
<div align ="center">
<img alt="age+18" height="120" src="Imagenes/18age.PNG"/>
</div> 

**d)** Invalid response  
<div align ="center">
<img alt="noage" height="100" src="Imagenes/notage.PNG"/>
</div> 
<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />
<h1 align="center">
<img alt="Exercise4" height="30" src="Imagenes/exercise4.gif"/>Exercise 4.- Vegetarian pizza ingredient selection
</h4>

### Input
```c++
    cout << "Welcome customer to Bella Napoli Pizzeria!\nAll our pizzas have mozzarella and tomato\nWould you like a vegetarian pizza? (Y/N)\n";
    cin >> response;
```
### Process
```c++
    if (response == 'Y' || response == 'N' || response == 'y' || response == 'n')//Check if the user typed in a valid response
    {
        if (response == 'Y' || response == 'y')//Vegetarian options
        {
            do
            {
                cout << "Select an ingredient: \n 1. Pepper\n 2. Tofu\n";//Loop the ingredient selection until a valid response (vegetarian)
                cin >> ingredient;
            } while (ingredient < 1 || ingredient > 2);
        }
        else if (response == 'N' || response == 'n')//Non-vegetarian options
        {
            do
            {
                cout << "Select an ingredient: \n 1. Pepperoni\n 2. Ham\n 3. Salmon\n";//Loop the ingredient selection (meat)
                cin >> ingredient;
            } while (ingredient < 1 || ingredient > 3);
            index = 1;//Locate the ingredient on the "meat section"
            selector = 1;//Display a nonvegetarian pizza type
        }
```

### Output
```c++
        cout << "Your " << pizzatype[selector] << " pizza has the following ingredients:\n Mozarella \n Tomato\n " << extraingredient[ingredient + index] << endl;//Print out all the ingredients and print out the extra ingredient based on the value inputted by the user
    }
    else
    {
        cout << "You've inputted an invalid response, try again\n";
    }
```

### Explanation
The program asks the user if they'd like a vegetarian pizza at Bella Napoli. Every pizza has the same base ingredients: Mozarrela and Tomate, but an extra ingredient based on if its a vegetarian pizza or not. The extra ingredients are the following :  
Tofu and Pepper (Vegetarian), Pepperoni, Ham or Salmon (Non-vegetarian).  
The program works the following way:  
1. Declare a list of extra ingredients.
2. Ask the user if they would like a vegetarian pizza or not.  
2.1. If the user inputs an invalid response, exit the program.
3. If they chose vegetarian, show a list of the possible extra ingredients and let the user input a number to choose.
4. If they chose non-vegetarian, move the declared list of extra ingredients to the "meat section" and let the user input a number to choose the extra ingredient.
5. Print out the selection of extra ingredients with the default ingredients (Mozarrella and Tomato)
6. Return 0 to check that the program ran succesfully.
### Tests <br /><br />
#### Vegetarian Pizzas 
<div align ="center">
<img alt="age0" height="200" src="Imagenes/pizzapepper.PNG"/>
<img alt="age0" height="200" src="Imagenes/pizzatofu.PNG"/>
</div> 
<br /><br />

#### Non-Vegetarian Pizzas
<div align ="center">
<img alt="age0" height="200" src="Imagenes/pizzapepperoni.PNG"/>
<img alt="age0" height="200" src="Imagenes/pizzaham.PNG"/>
<img alt="age0" height="200" src="Imagenes/pizzasalmon.PNG"/>
</div> 
<br />

#### Invalid Response
<div align ="center">
<img alt="age0" height="100" src="Imagenes/pizzaerror1.PNG"/>
</div> 
<br />

#### Invalid Extra ingredient loop  
<div align ="center">
<img alt="age0" height="400" src="Imagenes/pizzaerror2.PNG"/>
</div> 
<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />
<h1 align="center">
<img alt="Exercise5" height="30" src="Imagenes/exercise5.gif"/> Exercise 5.- Average temperature, maxium and minium value
</h4>

### Input
```c++
    do
    {
        cout << "Give me the temperature: ";
        cin >> temperature;
```
### Process
```c++
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
```
### Output
```c++
    cout << "The average of all the temperatures is " << average << " C° \nThe lowest temperature is " << mintemperature << " C° \nThe highest temperature is " << maxtemperature << " C° \n";

```
### Explanation
The program is about calculating 6 inputs of a temperature value. Each input gains a new etiquette, either max temperature or minium temperature using the previous value as reference. Because of this the default max and minium values use very extreme numbers in order for the first value to aquire the maxium and minium etiquette and keep comparing the following numbers to that initial value.
1. Ask for user input about current temperature 6 times. The value can be a float value.
2. Assign the inputted value as maxium temperature or minium temperature comparing it to the previous value inputted by the user.
3. Calculate the average of the values inputted by the user.
4. Output the average, minium and maxium value of the 6 inputs.
5. Return 0 to check that the program ran correctly.

### Tests <br /><br />
#### Temperatures
<div align ="center">
<img alt="temperaturestest" height="100" src="Imagenes/temperaturestest.png"/>
</div> 
<br /><br />
<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />
<h1 align="center">
<img alt="Exercise6" height="45" src="Imagenes/exercise6.gif"/> Exercise 6.- Products selling totals
</h4>

### Input
```c++
    do
    {
        cout << "Product " << numproducto << "\nAmount: ";
        cin >> amount;
```
### Process
```c++
        if (amount <= 0)
        {
            cout << "\n------Invalid amount, exiting program-----\n";
            numproducto--;
            break;
        }
        cout << "Price: ";
        cin >> price;
        if (price < 0)
        {
            cout << "\n------Invalid amount, exiting program-----\n";
            numproducto--;
            break;
        }
        numproducto++;
        total += (price * amount);
    } while (price != 0);
```
### Output
```c++
    cout << "\nYou've inputted a total of " << numproducto - 2 << " different products. ";
    cout << "\nYour total is: " << total << "$ \n\n";
```
### Explanation
This program is used to calculate the selling profits of a user. The user inputs and indefinite number of products, the amount that was selled of each product and the price the product was sold at individually. To exit the program the user must input a price of 0. The program also exits when the user writes an invalid product number (0  or less) or an invalid price value (less than 0).
1. Ask the user to write the amount sold of Product X (where X is the times the user has inputted a value)
2. Ask the user to write the price that each individual piece of Product X was sold
3. If the user writes a 0 in the price value, exit the program
4. If the user writes 0 or less in the price or amount value, exit the program
5. Print out the number of products that were inputted
6. Print out the total sum of money profitted.
7. Return 0 to check that the program ran correctly.
### Tests <br /><br />
#### Valid run
<div align ="center">
<img alt="validproduct" height="180" src="Imagenes/exercise6_1.png"/>
</div> 
<br /><br />

#### Invalid run (invalid product numbers)
<div align ="center">
<img alt="invalidproduct" height="250" src="Imagenes/exercise6_2.png"/>
</div> 
<br /><br />

#### Invalid run (Invalid price numbers)
<div align ="center">
<img alt="invalid price" height="150" src="Imagenes/exercise6_3.png"/>
</div> 
<br /><br />
<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />
<h1 align="center">
<img alt="Exercise7" height="30" src="Imagenes/exercise7.gif"/> Exercise 7.- Decimal number to binary value
</h4>

### Input
```c++
    do
    {
        cout << "Input a decimal number \n";
        cin >> num;
```
### Process
```c++
        if (num > 0)
        {
            while (num > 0)
            {
                if (num % 2 == 0)
                {
                    binary = '0' + binary;
                }
                else
                {
                    binary = '1' + binary;
                }
                num /= 2;
            }
```
### Output
```c++
            cout << "The number you've inputted is " << binary;
            cout << endl;
        }
        else if (num == 0)
        {
            cout << "You've inputted a 0\n";
        }
        else
        {
            cout << "The number must be greater than 0\n";
        }
    } while (num < 0);
```
### Explanation
The user writes a normal decimal value (it must be a whole number) and the program outputs the number but written in binary.
1. Ask the user to input a value
2. In case the user writes a 0, exit the program
3. In case the user writes a negative number, loop the program
4. If the number written is valid, keep dividing the number by two and keep writing the residue of the division until the number is equal to 0.
5. Print out the string of values done by the formula.
6. Return 0 to check that the program ran correctly
### Tests <br /><br />
#### Valid Run
<div align ="center">
<img alt="invalid price" height="65" src="Imagenes/exercise7_1.png"/>
</div> 
<br /><br />

#### Invalid Run (0 input)
<div align ="center">
<img alt="invalid price" height="70" src="Imagenes/exercise7_2.png"/>
</div> 
<br /><br />

#### Invalid Run loop (negative number input)
<div align ="center">
<img alt="invalid price" height="200" src="Imagenes/exercise7_3.png"/>
</div> 
<br /><br />
<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />
<h1 align="center">
<img alt="Exercise8" height="45" src="Imagenes/exercise8.gif"/> Exercise 8.- Product of a number done X times in a table format
</h4>

### Input
```c++
    do
    {
    cout << "Write a number to multiply by ";//Multiplicative
    cin >> numberinput;
    cout << "How many times do you want it multiplied ";//How many times
    cin >> counter;
```
### Process
```c++
        if (counter <= 0)
        {
            cout << "\nInvalid written number, try again please\n\n"; // If the number is invalid, repeat the process
        }
        else
        {
            for (int i = 0; i < 65; i++)
            {
                cout << "="; // Header
            }
            cout << "\n";
            for (int i = 1; i <= counter; i++)
            {
```
### Output
```c++
                cout << "|\t" << i << "\tX\t" << numberinput << "\t\t=\t" << (numberinput * i) << "\t\t|\n|"; // Table format using \t for tab
                for (int i = 0; i < 63; i++)
                {
                    cout << "-";
                }
                cout << "|\n";
            }
        }
    } while (counter <= 0); // Loop if the times multiplied is invalid
```
### Explanation
The program asks the user to input a number to be the multiplying factor of the table, it then asks how many times should it do the multiplication scaling 1 to 1 (i.e 1 * X, 2 * X, 3 * X...).
1. Ask the user for the number to multiply the values by.
2. Ask the user how many times should the program run.
3. Using For and /t, make a table format to visualize the results.
4. Return 0 to check that the program ran succesfully.

### Tests <br /><br />
#### Valid Run
<div align ="center">
<img alt="invalid price" height="305" src="Imagenes/exercise8_1.png"/>
</div> 
<br /><br />

#### Negative numbers
<div align ="center">
<img alt="invalid price" height="400" src="Imagenes/exercise8_2.png"/>
</div> 
<br /><br />

#### Invalid Run loop (negative number input in the X times multiplied)
<div align ="center">
<img alt="invalid price" height="300" src="Imagenes/exercise8_3.png"/>
</div> 
<br /><br />
<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />
<h1 align="center">
<img alt="Exercise9" height="60" src="Imagenes/exercise9.gif"/> Exercise 9.- Find the root in a graph using the bisection method
</h4>

### Input
```c++
    cout << "This graph is using the formula x²+x-12 \n";
    cout << "Give me the value of (a)";
    cin >> a;
    cout << "Give me the value of (b)";
    cin >> b;
```
### Process
```c++
    c = (a+b)/2;
    ya = bisection(a);
    yb = bisection(b);
    yc = bisection(c);
    if ((yb > 0 && ya < 0) || (ya > 0 && yb < 0)){//Check to see if there is a root between the numbers before making anything
    cout << "| Exercise \t|\t A \t\t|\t B\t\t|\t C \t\t|\t f(A) \t\t\t|\t f(B) \t\t\t|\t f(C) \t\t\t| \n";//Table Header
    for (int i = 0; i < 185; i++)
    {
        cout << "-";
    }
    cout << "\n";
    cout << "| \t" << counter << "\t|\t" << fixed << setprecision(3) << a << "\t\t|\t" << b << "\t\t|\t" << c << "\t\t|\t" << ya << "\t\t\t|\t" << yb << "\t\t\t|\t" << yc << "\t\t\t|\n"; //First data before anything
    for (int i = 0; i < 185; i++)
    {
        cout << "-";
    }
    cout << "\n";

        while (yc >= 0.01 || yc <= -0.01)
        {
            if ((yc > 0 && ya < 0) || (ya > 0 && yc < 0))//Set up b as the new limit (c) and then c would be the half of the previous value
            {
                b = c;
            }
            else//Same thing but if yb is the opposite sign of yc
            {
                a = c;
            }
            if (a == b)//If point b ends being point b, the cycle would loop infinately, this prevents that
            {
                break;
            }
            
            c = (a+b)/2;
            ya = bisection(a);
            yb = bisection(b);
            yc = bisection(c);
            counter++;
            cout << "| \t" << counter << "\t|\t" << fixed << setprecision(3) << a << "\t\t|\t" << b << "\t\t|\t" << c << "\t\t|\t" << ya << "\t\t\t|\t" << yb << "\t\t\t|\t" << yc << "\t\t\t|\n";
            for (int i = 0; i < 185; i++)
            {
                cout << "-";
            }
            cout << "\n";
        }
```

### Output
```c++
    cout << "The root is approximately " << setprecision(1) <<  c;
    }
    else //If yb and ya were both the same sign
    {
        cout << "There's no root between the numbers";
    }
```
### Explanation
The program uses a default formula for calculating the root between two numbers; in this case its _y=x²+x-12_. It first asks the user to input two location in the X axis in the graph, it then determines wheter theres a root between them or not. Afterwards it applies the formula to said inputs and if the results are opposite signs (one is negative and the other positive), there is a root in between them; It then cuts in half the distance between the two points and compares signs with both extremes following the same principle to find out where the root is. Finally, it prints out a table listing all the process it did to find the root and prints out an approximation of where the root is.
1. Ask the user to input a number in the X axis of the graph.
2. Apply the formula to the numbers.
3. If the signs are opposites, there is a root in between.
4. If the signs are the same, there is no root between them.
5. Cut the distance in between the locations in half, check both extremes to see if the signs are opposites again
6. Repeat the process until the formula reaches an approximation to 0-+0.01).
7. Print out the table listing all the process behind calculating the root
8. Print out the root
9. Return an integer (0) because the main function is an integer to check that the program ran succesfully.

### Tests <br />
### First Root
<div align ="center">
<img alt="FirstRoot" height="305" src="Imagenes/exercise9_1.png"/>
</div> 
<br /><br />

### Second Root
<div align ="center">
<img alt="SecondRoot" height="355" src="Imagenes/exercise9_2.png"/>
</div> 
<br /><br />

### No root between the numbers
<div align ="center">
<img alt="NoRoot" height="85" src="Imagenes/exercise9_3.png"/>
</div> 
<br /><br />
<br /><h3 align="center">

[Return to Index](https://github.com/UP210878/UP210878_CPP/tree/main/U2%20Control%20Structures%20and%20Cycles#index)

<br /><br /><br /><br /><br />