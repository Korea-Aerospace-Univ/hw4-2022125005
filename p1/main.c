#include <stdio.h>


/*
정답 하나를 먼저 입력한 후, 다음 예시와 같이 정답을 맞힐 때까지 정수를
입력 받아 대소 관계를 출력하는 숫자 맞추기 게임 프로그램을 작성하시오.

*/

int main(void)
{
    int answer;   // 정답을 저장하는 변수
    int guess;    // 사용자가 입력한 추정값을 저장하는 변수
    int count = 0; // 시도 횟수를 저장하는 변수

    // 정답 값을 입력받아 answer 변수에 저장
    scanf("%d", &answer);


    
    do
    {

        // 반복해서 값을 입력받음
        scanf("%d", &guess);
        
        count += 1; // 시도 횟수 증가

        // 추정값이 정답보다 클 때
        if (guess > answer)
        {
            printf("%d>?\n", guess);
        }

        // 추정값이 정답보다 작을 때
        else if (guess < answer)
        {
            printf("%d<?\n", guess);
        }

        // 정답을 맞췄을 때 
        else
        {
            printf("%d==?\n", guess);
        }

    } while (guess != answer); // 사용자가 답을 계속 못 맞추고 있는 동안 반복, 답을 맞추면 반복 종료

    printf("%d\n", count); // 시도 횟수 출력

    return 0;
}
