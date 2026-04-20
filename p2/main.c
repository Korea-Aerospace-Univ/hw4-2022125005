#include <stdio.h>


/*
정답 하나를 먼저 입력한 후, 다음 예시와 같이 정답을 맞힐 때까지 정수를
입력 받아 대소 관계를 출력하는 숫자 맞추기 게임 프로그램을 작성하시오.

*/


int main(void) {

    int num; // 최대 입력 횟수 저장하는 변수
    char target; // 입력받는 값을 저장하는 변수
    int count = 0; // 반복횟수 카운트하는 변수

    // 각각 문자와 숫자가 반복된 횟수를 카운트해서 저장하는 변수
    int mmmcount = 0;
    int intcount = 0;

    // 각각 숫자, 문자가 최대한으로 반복된 횟수.
    // 처음 값은 0 으로 초기화해서,
    // 처음 연속되는 문자 or 숫자가 들어왔을 때 바로 biggest 변수로 보내서,
    // 이후 값들을 비교하기 위해 사용할 수 있게 만들기
    int biggestint = 0; 
    int biggestmmm = 0;



    // 최대 입력 횟수를 미리 입력받음
    scanf("%d", &num);




    
    while (1) {

        count += 1; // 반복횟수 카운트

        // 반복해서 입력받음,
        // " %c" 앞에 공백 둬야 함,
        // target 변수에 값을 저장
        scanf(" %c", &target);  


        

        // 입력받은 문자(소문자)일 때
        
        if (target >= 'a' && target <= 'z') {
             // 문자도 내부적으로 정수로 처리되는 성질을 이용하여,
             // 논리연산자 사용하여 범위를 결정지을 수 있음.

            mmmcount += 1; // 문자가 반복되는 횟수 카운트 후 저장

            // 이전까지 반복되던 숫자 연속 끊김, 이때 문자 반복횟수의 최댓값 갱신.
            // 처음 연속되는 건 무조건 0 보다 클 테니, 만약 이전에 숫자 반복이 있었다면,
            // biggestint 으로 가고, 이후 문자 반복 다음 나오는 숫자 반복에 대해선
            // 이전에 있었던 문자 반복과 값을 비교하여 최대반복횟수를 갱신함.
            if (intcount > biggestint) {
                biggestint = intcount;
            }
            intcount = 0;
        }

        // 입력받은 문자가 숫자일 때
            
        else if (target >= '0' && target <= '9') {

            intcount += 1; // 숫자 반복 횟수 카운트 후 저장

            // 이전까지 반복되던 문자 연속 끊김, 이때 문자 반복횟수의 최댓값 갱신.
            // 처음 연속되는 건 무조건 0 보다 클 테니, 만약 이전에 문자 반복이 있었다면,
            // biggestmmm 으로 가고, 이후 숫자 반복 다음 나오는 문자 반복에 대해선
            // 이전에 있었던 문자 반복과 값을 비교하여 최대반복횟수를 갱신함.
            if (mmmcount > biggestmmm) {
                biggestmmm = mmmcount;
            }
            mmmcount = 0;
        }

        // 반복 종료 조건 : 
        // 미리 지정한 최대 입력 횟수만큼 입력했을 때
        if (count == num) {
            break;
        }
    }

    // 마지막으로 반복되는 숫자와 문자 각각에 대해, 최댓값 갱신
    
    if (mmmcount > biggestmmm) {
        biggestmmm = mmmcount;
    }

    if (intcount > biggestint) {
        biggestint = intcount;
    }

    // 각각 최대 반복된 문자, 숫자횟수를 출력
    printf("%d\n", biggestmmm);
    printf("%d\n", biggestint);

    return 0;
}
