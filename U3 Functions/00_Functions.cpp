/*
Date: 20/10/2022
Author: Vinc3nt
Email: up210878@alumnos.upa.edu.mx
Description: Program for seeing what functions do
Last Modification: 20/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

int maxVal(int num1, int num2);//Prototype Function
//---------------------ISSUE---------------------------
/*
No issue. Test file.
*/
//------------------ MAIN FUNCTION ---------------------

int main(){
   int a,b;
   int MaxNum;

   cout << "Write a number\n";
   cin >> a;
   cout << "Write another number \n";
   cin >> b;
   cout << "\n=========================== \n";
   MaxNum = maxVal(a,b);
   cout << "The max value is " << MaxNum << "\n";
   return 0;
}
//Get Max value function
int maxVal(int num1, int num2){
    return (num1>num2)?num1:num2;
}