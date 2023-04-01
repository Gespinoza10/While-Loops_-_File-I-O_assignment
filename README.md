# While-Loops & Output to a file

Created a C++ program that uses a WHILE loop to write the multiplication table of an integer value entered by the user to a file.  Created the first 12 entries in the table and the sum the all of the products to a file named Output.txt.

The Output.txt file contains the following if the user entered 11.
```
11 x 1 = 11
11 x 2 = 22
11 x 3 = 33
11 x 4 = 44
11 x 5 = 55
11 x 6 = 66
11 x 7 = 77
11 x 8 = 88
11 x 9 = 99
11 x 10 = 110
11 x 11 = 121
11 x 12 = 132
The Sum of the products : 858
```

# Opening and Writing to a file

```
#include <fstream>
```

Creating and opening a file to display our output.
```
Opening the file where the output will be displayed
    ofstream outfile;
    outfile.open("Output.txt");
```

Output that will be displayed on the file.
```
outfile<<n<<" x "<<i<<" = "<<product<<endl;
outfile<<"The sum of the products : "<<sum;
```

Closing the file.

```
outfile.close();
```
