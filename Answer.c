#include <stdio.h>

void delay(int milliseconds) {
    for (int i = 0; i < milliseconds * 1000000; i++) {
        // Introducing a delay by performing empty computations
    }
}

int main() {
    float x = 2763;
    int yn;
    printf("Are you ready to know the next number?\n");
    printf("Yes = 1\nNo = 0\n");
    scanf("%d", &yn);

    if (yn == 1) {
        // Print the output of x/7 with 10000 numbers behind the decimal point and store it
        delay(500);
        float output = x / 7;
        printf("The following number is the next number devided by 7:\n");
        delay(1000);
        printf("%.10f\n", output);

        delay(2000); // Delay for 1000 milliseconds (1 second)

        printf("Do you know what the next number is?\n");
        printf("Yes = 1\nNo = 0\n");
        int ny;
        scanf("%d", &ny);

        switch (ny) {
        case 1:
            printf("You said yes. What is the next number?\n");
            printf("Enter the next number: ");
            float mystery;
            scanf("%f", &mystery);
            if (mystery == x) {
                printf("Drumroll please...\n");
                printf(".......");
                delay(2000);
                printf("You are correct! The next number  indeed is %.2f!\n", x);
            } else {
                printf("Drumroll please...\n");
                printf(".......");
                delay(2000);
                printf("You are wrong. Try again.\n");
            
            }
            break;

        default:
            printf("You said no. Do you still want to know it?\n");
            int want;
            printf("Yes = 1\nNo = 0\n");
            scanf("%d", &want);
            if (want == 1) {
                printf("okay, here it comes\n");
                printf(".......");
                delay(5000);
        
                printf("The next number is %.2f\n", x);
            } else {
                printf("OK, bye.\n");
                return 0;
            }
            break;
        }
    } else {
        printf("OK, bye.\n");
    }

    return 0;
}

