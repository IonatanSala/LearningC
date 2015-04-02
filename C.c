// Comments are the same as java

#include <stdio.h>
#include <string.h>

#define MYNAME "Jonatan Sala" // makes a constant

int globalVar = 100; // makes a global variable

// The main function where the code will start
int main() {

  char firstLetter = 'J';
  
  int age = 38;  // int a hold the value of 32000 to -32000
  
  long int superBigNum = -327670000;
  
  float piValue = 3.141159;
  
  double reallyBigDouble = 3.3912759179;
  
  printf("\n");  // new line \t = tab
  
  printf("This will print to the screen\n\n");
  
  printf("I am %d years old\n\n", age);

  // conversion charcters : 
  // %d = int, %ld = long int, %.5f = floatto 5 decimal places
  // %.15f = double to 15 decimal places, %c = chars
  // %s = String
  
  // To create a string you have to create a character array
  // You always have to give an extra value when you make 
  // your string so it can hold the \0 character

  char myName[13] = "Jonatan Sala"; 
  
  // If you don't give your char array a value it will do it automaticaly
  char myName1[] = "Jonatan Sala";

  printf("%s \n\n", myName1);

  // If you want to change the value of your char array
  // your have to use:

  strcpy(myName, "Solomon"); // this is in the string.h import

  char middleInitial;

  printf("What is your middle initial? ");

  scanf(" %c" ,&middleInitial);  // 

  printf("%c\n",middleInitial); 

  char firstName[30],lastName[30];

  printf("What is your name");

  scanf("%s %s", firstName, lastName);

  printf("%s %c %s\n",firstName, middleInitial, lastName );

  int day, month , year;

  printf("When is your birthday?\n");

  scanf("%d %d %d", &day, &month, &year);

  printf("%d/%d/%d\n",day, month, year );

  // Math is the same as java

  // Casting is the same as java


  
  

}
