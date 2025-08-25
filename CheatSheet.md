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



// ⁡⁣⁣⁢𝗦𝗧𝗥𝗜𝗡𝗚⁡

In string we have to initlize the last char as null " \0" in CPP 

String is always NULL terminated 

⁡
// ⁡⁣⁣⁢𝗥𝗲𝗳𝗲𝗿𝗻𝗲𝗰𝗲⁡ 

Refernce is just the reference or alias to the variable, It doesnt has its own memory or is not a variable like pointer 
It is used so that we dont create extra variable or memory space or copies 

int main ()
{
    int x = 5;
    int &ref = x;
    cout<< ref + 1;
      
}

output: 6

Note: & is value of address and refernce it depends on the context - if we pass it with datatype then its a refernce or its a value at 


// ⁡⁣⁣⁢𝗣𝗢𝗜𝗡𝗧𝗘𝗥𝗦⁡

Pointers are special types of variable which are used to store another variable 

Whatever value you will store in it, it will be treated as address 



⁡⁣⁢⁣Define Pointer ⁡

int *p;        P is pointing to int 
float *p1;     p1 is pointing to float
double *p2;    p2 is pointing to double 

Note: Reading how to read pointer is important 



⁡⁣⁢⁣Why Datatype to pointer?? ⁡

when we define data type with pointer, it isnt the datatype of that pointer. Its pointing to that type 

datatype of pointer itself is unsigned int 



⁡⁣⁢⁣How Pointers works?⁡

int x, *p;
float y, *p1;
double z, *p2;

x = 5;
y = 5.2;
z = 6.8;

p = &x;   p is storing address of x 
p1 = &y;  p1 is storing address of y
p2 = &z;  p2 is storing address of z


Pictorically:

---x---     ----y----    ---z---
   5           5.2         6.8
  2000         4000        6000

----p---     ---p1----    ---p2---
  2000         4000        6000
  10000        10001       10005



  cout<< p;
  output: 2000

  cout<< *p;   Value at address p
  output: 5;

  ⁡⁣⁢⁣Note⁡: star " * " is called deference pointer. To get the value 



⁡⁣⁢⁣why do we specify datatype with pointer?? ⁡

when we do this : cout<< *p;

The compiler first see what type of datatype it is pointing to, if its int it will take 4 bytes club and then deference the pointer 



⁡⁣⁢⁣Pointer to pointer⁡

int x, *p, **p1;

x = 5;
p = &x;
p1 = &p;

cout<< *p1;
output: 5




⁡⁣⁢⁣Pointer Arithmatic ⁡

1) p - p 
[ only works w the pointer pointing to same datatype ]

⁡⁢⁢⁢𝗙𝗼𝗿𝘂𝗺𝘂𝗹𝗮⁡: p - p = p - p / size of datatype

2) P + I / P - I 
   
   int *p = 2000;
   cout<< P+1;
   output: 2000 + 2 = 20002 ( why 2? because int takes 2 bytes )

⁡⁢⁢⁢𝗙𝗼𝗿𝗺𝘂𝗹𝗮⁡: P + I * size of Datatype


⁡⁣⁢⁣Note⁡: if its **P++ or ( **P + 10 ) then we have to just increse it by 2 which is size of int coz pointer's datatype is unsigned int which takes 2 byte




⁡⁣⁢⁣Void pointer / Generic pointer ⁡

void *p;
int x=5;
float y=5.2;

we can storre the address of any variable 

p = &x;
p = &y;

but for deference you have to typecast it 

cout<< *(int*)p;



⁡⁣⁢⁣Complex Pointers ( Reading Tricks )⁡

1) () , [] ---> Same precidence ( left to right )
2) *, id ( name of the pointer ) ------> Same precidemnce ( right to left )
3) data type ----> least precidence 

Example:

int *p[10];      =    P is an array of 10 elements of pointer to int type
 4   3 2  1


int (*p)[10];     = P is a pointer to an array of 10 elemets to int type
  3    1    2

int *(*p)();       = P is a pointer to a function, returing a pointer to int type 




// ⁡⁣⁣⁢Pointer to Functions⁡

void main()
{
    int x =5, y =7;
    void swap(int, int)
    swap(x,y)
    cout<< x , y;
}

void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}


Note : This is call by value it wont change the value it will just change the formal parameters and not the actual parameters 


void main()
{
    int x =5, y =7;
    void swap(int*, int*)
    swap(&x,&y)
    cout<< x , y;
}

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

Note: This is call by refernce 



// ⁡⁣⁢⁣Pointers in 1D Array ⁡


Note: Name of the array is the constant pointer to 1st element of 1d array 


int *a ;
int x[5];

a = x 

cout<< *a+1;


// ⁡⁣⁢⁣Pointers in 2D array ⁡

int x [3][4] = 
{
    {5,9,1,2},
    {3,7,8,1},
    {6,8,9,3}
};

    x[0]       x[1]     x[3]
  5 9 1 2 | 3 7 8 1 | 6 8 9 3 
  2000  6   8     14  16    22
  
output:

x = 2000
x + 1 = 2008
x + 2 = 2016
*x = 2000
*x + 1 = 2008
*(*(x+1) + 2 ) = 8
**x = 5
    





