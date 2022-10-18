/**
 * @file variables.c
 * @author Adil Kampoo(Adil.Kampoo@HeuristicAcademy.in)
 * @brief In this Session We will Learn About the Variable in C and Quiz Related to them.
 * @version 0.1
 * @date 2022-10-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    int number; // No value set
    int num = 0; // 2 or 4 bytes
    printf("Size of int: %ld\n", sizeof(int)); // sizeof() outputs storage size for the object in bytes. Outputs 4
    char h = 'h'; // 1 byte '' is for character
    short n = 0; // 2 bytes
    long l = 0; // 8 bytes

    float f = 0.4f; // 4 bytes
    double d = 0.1f; // 8 bytes
    long double ld = 0.22f; //10 bytes

    // No boolean, can use 1 or 0 instead

    return 0;
}


//What is a Variable?
//Ans :: A variable is a Container used to store a Data Value.
// Different Way of Naming a Variable ?
// Ans ::


// Ref :: https://stackoverflow.com/questions/1410563/what-is-the-difference-between-a-definition-and-a-declaration

//Declaration of a Variable ?
// (A declaration introduces an identifier and describes its type)
// It tells the Compiler what the Variable name is 
// It Specifies What type of Data the Variable will hold. 
// No space is reserved in memory for any variable in case of declaration.
// A declaration is what the compiler needs to accept references to that identifier.
// Example :
// extern int a;  
// int myFunc (int a, int b);

//Definition of a variable ?
// (A definition actually instantiates/implements this identifier.)
// However, it must be defined exactly once. If you forget to define something that's been declared and referenced somewhere, 
// then the linker doesn't know what to link references to and complains about a missing symbols. If you define something more than once, 
// then the linker doesn't know which of the definitions to link references to and complains about duplicated symbols.
// Definition on the other hand means that in additions to all the things that declaration does, space is also reserved in memory.  
// You can say "DEFINITION = DECLARATION + SPACE RESERVATION"
// Example : 
// int a; 
// int b = 0; 
// int myFunc (int a, int b) { 
// return a + b; 
// } 