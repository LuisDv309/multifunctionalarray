// ArraysPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Go through the code for finding the maximum that we have done just now and close the project.
//Open a new project called minimumArrayFunctionand do the following :
//a) declare an array with 5 values
//b) call a function with the arrayand size of array as actual parameters
//c) Find the minimum value in the functionand return it to the main program
//d) Output the minimum grade in the array

#include <iostream>
using namespace std;

int main()
{//declare the array with data type and the size of the array
    //initializing the array with values
    int Grade[3] = { 67,83,45 };
    //accessing the array values with the index
    Grade[0] = 95;//array index start with 0//
    cout << "\nthe value at grade[0]=" << Grade[0] << endl;
    cout << "\nthe value at grade[1]=" << Grade[1] << endl;
    //automate the access- accesses all the values in the array
    int i;
    //for (i = 0; i < 3; i++); {
    //    //will not be executed when you have semicolon at the end of for loop
    //}
    for (i = 0; i < 3; i++) {
        cout << "\nthe value of i=" << i << endl;
        cout << Grade[i] << endl;
    }
    //call a function to find the highest grade in the array
    int Maximum = Maxim(Grade, 3); //name of array and size of array is passed as actual parameters
    cout << "\nThe highest grade in the class: " << Maximum << endl;
}
//Maximum grade function
//MyGrade and n are dummy parameters / arguments
int Maxim(int MyGrade[], int n) {
	int i;
	int max = 0;//assuming the lowest to be the highest to initialize
	for (i = 0; i < n; i++) {
		if (MyGrade[i] > max) {
			max = MyGrade[i];
		}
	}
	return max;
}
#include <iostream>
using namespace std;


//function prototype
int Maxim(int MyGrade[], int n);



//int main()
//{//declare the array with data type and the size of the array
//    //initializing the array with values
//    int Grade[3] = { 67,83,45 };
//    //accessing the array values with the index
//    Grade[0] = 95;//array index start with 0
//    //cout << "\nthe value at grade[0]=" << Grade[0] << endl;
//    //cout << "\nthe value at grade[1]=" << Grade[1] << endl;
//    //automate the access- accesses all the values in the array
//    int i = 10;
//    //for (i = 0; i < 3; i++); {
//    //    //will not be executed when you have semicolon at the end of for loop
//    //}
//   /* for (i = 0; i < 3; i++) {
//        cout << "\nthe value of i=" << i << endl;
//        cout << Grade[i] << endl;
//    }*/
//
//    //while structure check the condition in the begining and decide whether to run the block or not
//   /* while (i < 3) {
//        cout << "\nthe value of i=" << i << endl;
//        cout << Grade[i] << endl;
//        i++;
//    }*/
//
//    //here at least one time the code gets executed before checking the condition
//    //do - while
//    //do {
//    //    cout << "\nthe value of i=" << i << endl;
//    //    cout << Grade[i] << endl;
//    //    i++;
//    //} while (i < 3);
//
//    //call a function to find the highest grade in the array
//  //  int Maximum = Maxim(Grade, 3); //name of array and size of array is passed as actual parameters
//  //  cout << "\nThe highest grade in the class: " << Maximum << endl;
//}
//
////Maximum grade function
////MyGrade and n are dummy parameters / arguments
//int Maxim(int MyGrade[], int n) {
//    int i;
//    int max = 0;//assuming the lowest to be the highest to initialize
//    for (i = 0; i < n; i++) {
//        if (MyGrade[i] > max) {
//            max = MyGrade[i];
//        }
//    }
//    return max;
//}
