#include <stdio.h> // Correct header file for input/output
// if-else

#include<stdio.h>
int main() {
    int age = 19;
    if(age >= 18) {
        printf("you are an adult");
}
else {
    printf("you are not an adult");
}
return 0;
}

//check if a number is odd or even
#include<stdio.h>

int main() {

    int number;
    scanf("%d", &number);

    if (number%2==0) {
        printf("even");
    }
    else {
        printf("odd");
    }

    return 0;
}

// useof else-if

#include<stdio.h>

int main() {
    int age;
    printf("enter age :");
    scanf("%d", &age);

    if(age < 12) {

        printf("child");

    }
    else if(age < 18) {

        printf("teenager"); 

    }
    else {

        printf("adult");

    }
    return 0;
}

// ternary operators
#include<stdio.h>

int main() {

    int age;

    printf("enter age :");
    scanf("%d", &age);

    age > 18 ? printf("adult\n") : printf("not adult\n");

    return 0;
}


// switch (integer)
#include<stdio.h>
#include<math.h>
int main() {
    int day = 5;
    switch(day) {
        case 1 : printf("monday \n");
                break;
        case 2 : printf("tuesday \n");
                break;
        case 3 : printf("wednesday \n");
                break;
        case 4 : printf("thursday \n");
                break;
        case 5 : printf("friday \n");
                break;
        case 6 : printf("saturday \n");
                break;
        case 7 : printf("sunday \n");
                break;
    }
return 0;
}


// switch (character)
#include<stdio.h>

#include<math.h>

#include<stdio.h>

int main() {
    char day = 'f';
    switch(day) {
        case 'm' : 
            printf("monday \n");
            break;  // Semicolon added here
        case 't' : 
            printf("tuesday \n");
            break;
        case 'w' : 
            printf("wednesday \n");
            break;
        case 'T' : 
            printf("thursday \n");
            break;
        case 'f' : 
            printf("friday \n");
            break;
        case 's' : 
            printf("saturday \n");
            break;
        case 'S' : 
            printf("sunday \n");
            break;
        default: 
            printf("Invalid day \n"); // Optional default case for handling unexpected inputs
    }
    return 0;
}



//q.1 write a program to check if a student passed or failed.
 int main() {
     int marks;
     printf("enter your marks:");
     scanf("%d",&marks);

     if (marks >= 30) {
         printf("pass \n");
     } else{
         printf("fail \n");
     }

     return 0;
 }
      //# and

 int main() {
     int marks;
     printf("enter marks (0-100)");
     scanf("%d", &marks);

     if(marks >= 0 && marks <= 30) {
         printf("FAIL \n");
     } else if (marks > 30 && marks <= 100){
         printf("PASS \n");
     } else {
         printf("wrong marks \n");
     }

     return 0;
    
    
 }

// ternary
//marks <= 30(question marks) printf("fail \n") : printf("pass \n");


//q.2 write a program to give grades to a student
// marks < 30 is c grade
// 30 <= marks < 70 is b
// 70 <= marks < 90 is a
// 90 <= marks <= 100 is a+

 int main() {
     int marks;
     printf("enter your number (0-100)");
     scanf("%d", &marks);

     if(marks < 30) {
       printf("grade c \n");
     } else if (marks >= 30 && marks < 70 ) {
       printf("grade b \n");
     } else if (marks >= 70 && marks < 90) {
             printf("grade a \n");
     }
     else{
       printf("grade a+ \n");
     }

     return 0;
      
 }




