#include <stdio.h>


/*
정답 하나를 먼저 입력한 후, 
다음 예시와 같이 정답을 맞힐 때까지 
정수를 입력 받아 대소 관계를 출력하는 숫자 맞추기 게임 프로그램을 작성하시오.
*/




int main(void) {

    int answer; // 정답 값을 저장하는 변수
    int guess; // 사용자가 추정하는 값을 저장하는 변수
    int count = 0; // 시도 횟수 저장하는 변수

    
    // 정답 입력 받음 
    scanf("%d", &answer);

    do {

        count += 1;  // 시도 횟수 카운트 증가시키기

        scanf("%d", &guess);    // 반복해서 사용자로부터 추정값을 입력받음

        
        // 추정값이 정답보다 클 때
        
        if ( guess > answer ) {
            printf("%d>?/n", guess);
        }


        // 추정값이 정답보다 작을 때
            
        else if ( guess < answer ) {
            printf("%d<?/n", guess);
        }

        // 정답일 때
            
        else {
            printf("%d==?/n", guess);
        }
        
        
    } while ( guess == answer);    // 답이랑 추정이랑 동일하면 반복 종료


    printf("%d", count);  // 시도 횟수 출력

    
    return 0;
}
