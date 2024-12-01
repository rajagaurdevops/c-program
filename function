# include<stdio.h>
// function and recursion
   // function >> block of code that performs particular task
// syntax 1
        // function prototype
        // void printhello();

// syntax 2
        // function Definotion
        // void printhello() {
           // print("hello")
       // }

// syntax 3
        // function call
        // int main() {
             //   printhello();
             //   return 0;
        // }


// declaration/prototype
void printhello();       

int main() {
    printhello(); // function call
    printhello();
    return 0;

}
//function definition
void printhello() {
    printf("hello raja \n");
    printf("i am king of tantpur\n");
}


    //q.1 write 2 function-one to print"hello" & second to print"good bye"

void printhello();  // function declaration 
void goodbye();     // function declaration

int main() {
    printhello(); // function call
    goodbye();    // function call

    return 0;
}

void printhello() {   // function definition
    printf("Hello:\n");
}

void goodbye() {     //function definition
    printf("Good bye:\n");
}



//q.2 write a function that print Namaste if user is indian & Bonjour if the user is french

void printnamaste();
void printbonjour();

int main() {
    printf("enter f for french & i for indian:");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i') {
        printnamaste();
    } else {
        printbonjour();
    }


    return 0;
}

 void printnamaste() {
    printf("NAMASTE\n");

}

void printbonjour() {
    printf("BONJOUR\n");
}


// passing arguments

int sum(int a , int b);

int main() {
    int a , b;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);


    int s = sum(a , b);
    printf("sum is %d\n", s);
    return 0;
}

int sum(int x , int y) {
    return x+y;
}


// print the table of n number

void printTable(int n);
 
int main() {
    int n;
    printf("enter number :");
    scanf("%d", &n);

    printTable(n);  // argument/actual parameter                

    return 0;
}
void printTable(int n) {      // parameter/ formal parameter
    for (int i=1; i<=10;i++) {
        printf("%d\n",i*n);
    }
}


void calculateprice(float value);

int main() {

    float value = 100.0;
    calculateprice(value);   

    return 0;
}

void calculateprice(float value) {
    value = value + (0.18 * value);
    printf("final price is : %f\n", value);
}


//q.1 use library function to calculate the square of a number given by user
# include <math.h>
int main() {
    int n = 4;
    printf("%f\n", pow(n,2));

    return 0;
}

//q.2 write function to calculate area of a square, a circle & a rectangle
float squarearea(float side);
float circlearea(float rad);
float rectangalarea(float a,  float b);


int main() {
    float a = 5.0;
    float b = 10.0;
    

    printf("area is : %f\n", rectangalarea(a, b));
    return 0;
}

float squarearea(float side) {
    return side * side;
}

float circlearea(float rad) {
    return 3.14 * rad * rad;
}
float rectangalarea(float a, float b) {
    return a*b;
}