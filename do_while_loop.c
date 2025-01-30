       // do while loop
         //syntax
             // do{
             // do something
             //}while(condition);
int main() {
    int i = 5;
    do {
        printf("%d\n", i);
        i --;
    }while(i >=1);

    return 0;
    
}


//q.2 keep takling numbers as input from user until user enters an odd number
int main() {
    int n;
    do {
        printf("enter number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n %2 != 0){
            break;
        }
        
    } while (1);
    

}



//q.3 keep talking numbers as input from user until user enters a number which is multiple of 7
int main() {
    int n;
    do{
        printf("enter number :");
        scanf("%d",&n);
        printf("%d\n", n);

        if(n % 7 == 0) {
            break;
        }
    } while(1);
    printf("thanku you");

    return 0;
}
    
