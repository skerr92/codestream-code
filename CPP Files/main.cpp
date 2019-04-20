//this is our project file for CodeStream C++ project. 

#include <iostream>
#include <math.h> //use this to use the pow(base, exponent) function in the operators section

using namespace std;

int main() {
  //single line comment
  /*
   * multiline comment
   */

  //The console

  /*
   * The console is where we can print program outputs too. It's really important for code debugging and seeing actual
   * outputs. use "endl" to to end the current output line and to start a new line.
   *
   * we print out using cout
   * we can set variables to console inputs.
   * */

  cout << "hello world" << endl;
  string inputvariable;
  cin >> inputvariable;

  cout << inputvariable << endl;

  //Data types: Primatives which we covered first:


  int my_number = 100; //Integer data type non-decimal number
  double my_double = 3.14159; //Double data type double precision number. accurate to 14 decimal places
  float my_float = 1.0234567; //float data type accurate to 7 decimal places
  string my_string = "hello world"; //string data type. Holds a string of words like "hello world, my name is Seth!"
  char my_char = 'A'; //character data type holds a single character like 'S'
  bool my_bool = true; //bool data type holds a value of either 0 or 1... 1 equals true | 0 equals false;

  //output variables

  cout << my_number << " " << my_bool << endl;

  //create string variable and initialize it using cin

  string string1;
  cin >> string1;
  cout << string1 << endl;

  // Simple Arrays
  int n = 100; // this is an integer that we will use to initialize the array arr below...
  int arr [n]; // this is how to create an array of type int which will store n number of integers
  // Arrays store data at an index. The index starts at location 0 which is the first item in the array.
  // The last item index is always going to be n-1 so in this case 99 which is 100 - 1;

  // This array is filled with random numbers related to the memory location of each indexed value.

  //Loops

  // For Loops

  int i;
  for (i = 0; i < n; i++) {
    arr[i] = i; //this for loop sets the item at each location to the value of i; so 0 and arr[0] and 99 and arr[99]
    cout << arr[i] << endl; // Prints out the indexed value..
  }

  i = 0;
  while (i < n) {
    //this while loop will run as long as i is less than 100. Once it reaches 100, the loop will break.
    cout << arr[i] << " ";
    i++; //It's important to increment and reduce the size of your index value so you don't have an infinite loop.
    //You can also set the while loop to break which it reaches a specific argument like if a number in an array is less than 0.
  }

  cout << endl;


  // Operators: Covered in the later part of the stream
  int a = 10;
  int b = 5;
  int c = 3;

  // + - * / % pow(num,exp)

  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;
  cout << "a % b = " << a % b << endl;
  cout << "c to the b = " << pow(c, b) << endl;

  // Follow me @thesethkerr on twitter or instagram adventurekerrs

  return 0;
}
