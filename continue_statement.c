     // continue statement >> skip to next iteration

int main() {
    for (int i=1;i<=5;i++) {
        if(i == 3) {
            continue;
        }
         printf("%d\n", i);
    }
    return 0;
}



//q.1 print all numbers from 1 to 10 except for 6
int main() {
    for (int i = 1;i <= 10; i++) {
        if(i == 6) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

// q.2 print all the odd numbers from 5 to 50
int main() {
    for (int i=5;i<=50;i++) {
        if(i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}