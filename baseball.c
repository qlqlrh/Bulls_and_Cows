// Bulls and Cows (aka.Number baseball)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
    srand(time(NULL));
    
    int input_num = 0;
    int user[3], computer[3];
    int ball = 0, strike = 0, nothing = 0;
        
     for (int i = 0; i < 3; i++) {
        int random_num;
        int isUnique;
        
        do {
            isUnique = 1;
            random_num = rand() % 10;
            
            for (int j = 0; j < i; j++) {
                if (computer[j] == random_num) {
                    isUnique = 0;
                    break;
                }
            }
        } while (!isUnique); // isNotUniq이면 계속 랜덤 생성 해야 함
        
        computer[i] = random_num;
    
     }

        
    printf("Input 3 digits number : ");
    scanf("%d", &input_num);

    printf("Your number is %d\n", input_num);

    int n = 100;
    for (int i = 0; i < 3; i++) {
        user[i] = input_num / n % 10;
        n /= 10;
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
    
    printf("Strike: %d, Ball: %d, Nothing = %d\n", strike, ball, nothing);
    printf("Random num is %d%d%d\n", computer[0], computer[1], computer[2]);
        
    return 0;
}
