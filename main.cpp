/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Gerardo Espinoza
//While loops and File I/O
//March 7, 2022
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Opening the file where the output will be displayed
    ofstream outfile;
    outfile.open("Output.txt");
    
    //Declaring and assigning variables that will be used
    int n;
    unsigned int i=1;
    unsigned int number=12;
    int sum=0;
    int product=0;
    
    //Prompting user to enter a number
    cout<<"Please Enter a number: ";
    cin>>n;
    
    //while loop for the multiplication table to print from 1-12 times the number entered by user
    while(i<=number){
        product = n * i;
        sum += product;
        outfile<<n<<" x "<<i<<" = "<<product<<endl;
        i++;
    }
    
    //Output the total sum of all the products
    outfile<<"The sum of the products : "<<sum;
    
    //close out output file
    outfile.close();
    
    return 0;
}



