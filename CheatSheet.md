⁡⁣⁣⁢// 𝗜𝗢𝗦𝗧𝗥𝗘𝗔𝗠⁡

Iostream is Istream and Ostream which is I/O.
A stream is a sequence of characters read from or written to an IO device.
The term stream is intended to suggest that the charc are generated or consumed sequentially over time.

1) cin
2) cout
3) cerr ( C error )
4) clog ( C logs )




⁡⁣⁣⁢// ⁡⁣⁣⁢Variable and Constant ⁡

Variable is like container which has store value ( single value at a time )
Constant is the value assigned to variable 




⁡⁣⁣⁢// 𝗗𝗲𝗳𝗶𝗻𝗲 𝗗𝗲𝗰𝗹𝗮𝗿𝗲 𝗮𝗻𝗱 𝗜𝗻𝗶𝘁𝗶𝗮𝗹𝗶𝘇𝗮𝘁𝗶𝗼𝗻⁡

Define - memory allocation - whenever variable is defined memory is allocated 
example:  x  

Declare - giving information to compiler about the datatype of varible 
example: int x (here int is the datatype and this is called declare)

Initilization - Initizing the value to variable
example : int x = 5;

⁡⁣⁢⁣𝗡𝗼𝘁𝗲⁡: when you define a variable it will contain garbage value already [ and its wrong to say garbage value assigned rather it is already present ]




// ⁡⁣⁣⁢𝗥𝗮𝗻𝗴𝗲 ⁡

int - 4 bytes - 32 bits 
float - 4 bytes - 32 bits 
double - 8 bytes - 64 bits 
char - 1 byte - 8 bits 
bool - 1 byte - 8 bits 
void - null

⁡⁣⁢⁣𝗡𝗼𝘁𝗲⁡ : First bit is called MSB (Most significant Bit ) which is also sign bit hence the range of the bit will be 

int: -2^31 to 2^31 - 1 [-1 because one poisition can be taken by 0 which has no sign]

⁡⁣⁢⁣𝗡𝗼𝘁𝗲⁡: when we assign a value outside of this range. CPP compiler wont throw any error at the runtime instead it will overflow and underflow 

overflow is like when you hit the max value it wont assign garbage value instead it will assign negative min value number 

underflow is like when you hit the min ( negative ) value it wont assign garbage value instead it will assign positive max value number 

its like clock 




⁡⁣⁣⁢// 𝗠𝗔𝗜𝗡 ⁡

#include<iostream>
int main()
{
    return 0;

}




⁡⁣⁣⁢// 𝗪𝗵𝗶𝗹𝗲 𝗟𝗼𝗼𝗽⁡

#include<iostream>
int main()
{
    while(){

    }

}




⁡⁣⁣⁢// 𝗙𝗼𝗿 𝗟𝗼𝗼𝗽⁡


#include<iostream>
int main()
{
    for( ; ; ){

    }
}




⁡⁣⁣⁢// 𝗜𝗙 𝗘𝗹𝘀𝗲⁡

#include<iostream>
int main()
{
    if( )
    {

    }
    else
    {

    }

}



// ⁡⁣⁣⁢𝘀𝗵𝗼𝗿𝘁𝗲𝗻𝗱 𝗶𝗳 𝗲𝗹𝘀𝗲 ( 𝗧𝗲𝗿𝗻𝗮𝗿𝘆 𝗢𝗽𝗲𝗿𝗮𝘁𝗼𝗿 )⁡

(condition) ? expression1 : expression2;





// ⁡⁣⁣⁢𝗙𝘂𝗻𝗰𝘁𝗶𝗼𝗻𝘀⁡

#include <iostream>
using namespace std;
 
void hello();     // Declaring
 
int main()
{     
    hello();    // Calling
}
 
void hello() 
{ 
    cout << "Hello World!! \n";
}




// ⁡⁣⁣⁢𝗔𝗿𝗿𝗮𝘆⁡ 

datatype array_name[size];


⁡⁣⁢⁣𝗗𝗲𝗰𝗹𝗮𝗿𝗲 𝗮𝗻𝗱 𝗜𝗻𝗶𝘁𝗶𝗹𝗶𝘇𝗲 ⁡

string fruits[] = {"apple", "Banana", "Grapes "};



⁡⁣⁢⁣𝗧𝗼 𝗳𝗶𝗻𝗱 𝘁𝗵𝗲 𝘀𝗶𝘇𝗲 𝗼𝗳 𝗮𝗿𝗿𝗮𝘆⁡

n = sizeof(fruits) / sizeof(fruits[0]);



⁡⁣⁢⁣𝗜𝘁𝗲𝗿𝗮𝘁𝗶𝗻𝗴 𝗮𝗻𝗱 𝗽𝗿𝗶𝗻𝘁 𝗲𝗮𝗰𝗵 𝗲𝗹𝗲𝗺𝗲𝗻𝘁𝘀 𝗼𝗳 𝘁𝗵𝗲 𝗮𝗿𝗿𝗮𝘆⁡

for(int i =0; i<n; i++)
{
    cout<<fruits[i];
}



// ⁡⁣⁣⁢2D Array ⁡


dataype array_name [row size] [column size];




⁡⁣⁢⁣Note⁡: 2D is array is special 1D array only, It is stored in 1D array row fashion itself [ Row major fashion it will ]

example: 

    int 2d_array[2][3]

        0 1 3
        2 4 6

    Because its a row major fashion it will get stored like this 

        0 1 3 | 2 4 6 
    
    It has 2 elements and each element is 1D array having 3 elements 




⁡⁣⁢⁣Declaration and initilization of 2d Array ⁡

int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
    
}

⁡⁣⁢⁣Note⁡: 

How it get stored

1 2 3 4 | 5 6 7 8 | 9 10 11 12

it has 3 elements and each element in itself is a 1D array of 4 elements




⁡⁣⁢⁣To find the sizeof 2d array row ⁡

x = sizeof(arr) / sizeof(arr[0]) 




⁡⁣⁢⁣To find the sizeof 2d array colomn⁡

y = sizeof(arr[0]) / sizeof(arr[0][0])




⁡⁣⁢⁣Iterating thru 2D array ⁡


for(int i = 0; i<x; i++)
{
    for(int y = 0; i<y; i++)
    {

    }
}



// ⁡⁣⁣⁢STRING⁡

In string we have to initlize the last char as null " \0" in CPP 

String is always NULL terminated 

⁡


// ⁡⁣⁣⁢𝗣𝗢𝗜𝗡𝗧𝗘𝗥𝗦⁡


