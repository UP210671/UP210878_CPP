<h1 align="center">
WELCOME TO UNIT 2: CONTROL STRUCTURES AND CYCLES

### This unit is about control structures and cycles.
This unit is about cycles and control structures (i.e: if, if else, for...). During this unit we actually had to make use of our creativity and brain to solve problems (Unlike previous unit which really was just an introduction to programming and using github). Hope you enjoy.

<p align="center">
    <img src="https://mozwebdev.in/wp-content/uploads/2021/11/software-development.png">


<h1 align="center">
Practice 1.- Renta [Program for calculating taxes for an anual rent based on a value the user inputs]
</h4>

### Preview Main Function  
 >  cout << "Ingrese su renta anual:" << endl;  
    cin >> Renta;  
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



### Explanation
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
a) +60000  
<div align ="center">
<img alt="45" height="150" src="Imagenes/45percent.png"/>
</div>  
b) 35000-59999  
<div align ="center">
<img alt="30" height="150" src="Imagenes/30percent.png"/>
</div>  
c) 20000-34999  
<div align ="center">
<img alt="20" height="150" src="Imagenes/20percent.png"/>
</div>  
d) 10000-1999  
<div align ="center">
<img alt="15" height="150" src="Imagenes/15percent.png"/>
</div>  
e) 1-9999  
<div align ="center">
<img alt="5" height="150" src="Imagenes/5Percent.png"/>
</div>  
  
<h1 align="center">
Practice 2.- Benefits [Program for calculating a bonus based on an employee evaluation]
</h4>

### Preview Main Function
> if ((calificacion == 0.0) || (calificacion == 0.4) || (calificacion >= 0.6) && calificacion<=1){  
        if (calificacion == 0.0){  
            cout << "Su calificacion es Inaceptable.";  
        }  
        else if (calificacion == 0.4){  
            cout << "Su calificacion es Aceptable.";  
        }     
        else if (calificacion >= 0.6){  
            cout << "Su calificacion es Meritoria.";  
        }  
        cout << "\nSu calificacion es de " << calificacion << " por lo que recibira un bono del " << (calificacion*100) << "%: $" << (bono*calificacion) << "\n";  
    }  
    else {  
        cout << "\nSu calificacion es invalida para la evaluación.  \n";    
    }    

### Explanation
1. Ask the user about their qualification on a scale on 0 to 1 (Where 1 is 100% and 0 is 0%)
2. If the user types a value other than 0, 0.4 or a number bigger than 0.6, the program does not run and it says that the qualification is invalid.
3. If the user types in a valid value, print out what level the employee has followed up by the bonus percentage and value.
4. Return 0 to check that the program is executing correctly.

### Tests
a) Unacceptable

<div align ="center">
<img alt="unacceptable" height="150" src="Imagenes/unacceptable.png"/>
</div> 

b) Acceptable

<div align ="center">
<img alt="acceptable" height="150" src="Imagenes/acceptable.png"/>
</div> 

c) Meritorious

<div align ="center">
<img alt="meritorious" height="150" src="Imagenes/merit.PNG"/>
</div> 

d) Invalid

<div align ="center">
<img alt="invalid" height="150" src="Imagenes/invalid.PNG"/>
</div> 

<h1 align="center">
Practice 3.-
</h4>