#include<stdio.h>
// Recursion >> when a function calls itself, its called recursion

void printhello(int count);

int main() {

    printhello(5);
    return 0;
}

  // recursive function
void printhello(int count) {
    if (count == 0) {
        return;
    }
     printf("hello world\n");
     printhello(count -3);

}  

//q.1 sum of first n numbers.


int sum(int n);

int main() {

    printf("sum is : %d\n", sum(5));
    return 0;
}
// recursive function
int sum(int n) {
    if(n == 1) {
        return 1;
    }
    int sumnm1 = sum(n-1);
    int sumn = sumnm1 + n;
    return sumn;
}

//q.3 factorial of n.

int factorial(int n);

int main() {

    printf("factorial is : %d\n", factorial(5));
    return 0;
}
int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    int factnm1 = factorial(n-1);
    int factn = factnm1*n;
    return factn;

}

//q.4 write a function to convert celsius to fahrenheit.

#include <stdio.h> // Include this for printf

float convertTemp(float celsius);

int main() {
    float far = convertTemp(0); // Corrected function call
    printf("Fahrenheit: %f\n", far); // Improved output formatting

    return 0;
}

float convertTemp(float celsius) {
    float far = celsius * (9.0 / 5.0) + 32; // Fixed floating-point division
    return far;
}


//q.6 write a function to calculate percentage of a student from marks in science , math & sanskrit
int calcpercentage(int science, int math, int sanskrit);

int main() {
    int sc = 98;
    int math = 95;
    int sanskrit = 99;

    printf("percentage is :%d\n", calcpercentage(sc, math, sanskrit));

    return 0;
}

int calcpercentage(int science, int math, int sanskrit) {
    return ((science + math + sanskrit) / 3);
}