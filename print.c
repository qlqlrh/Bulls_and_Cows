#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
        int input_num;
        int random_num;
        int user[3];
        int computer[3];
        int ball = 0, strike = 0, nothing = 0;
        srand(time(NULL));
        random_num = rand() % 1000;

        printf("Input 3 digits number : ");
        scanf("%d", &input_num);

        printf("Your number is %d\n", input_num);
        printf("Random num is %d\n", random_num);

        int n = 100, m = 100;
        for (int i = 0; i < 3; i++) {
            user[i] = input_num / n % 10;
            computer[i] = random_num / m % 10;
            n /= 10;
            m /= 10;
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (user[i] == computer[j]) {
                    if (i == j)
                        strike += 1;
                    else
                        ball += 1;
                }
            }
        }
        nothing = 3 - strike - ball;
        printf("strike: %d, ball: %d, nothing = %d\n", strike, ball, nothing);
        return 0;
}
