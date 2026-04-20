#include <stdio.h>

int main(void)
{
    int answer = 10;    // 정답
    int guess = 0;    // 추측값
    int count = 0;    // 시도 횟수
    
    do {
        scanf("%d", &guess);    // 정답 입력
        count++;    // 시도 횟수 증가
        
        if(guess > answer) {
            // 추측값이 정답 초과일 경우
            printf("%d > ?\n", guess);
        } else if(guess < answer){
            // 추측값이 정답 미만일 경우
            printf("%d < ?\n", guess);
        } else {
            // 추측값과 정답이 같을 경우
            printf("%d == ?\n", guess);
            printf("%d\n", count);
        }
    } while (guess != answer);    // 추측값이 정답과 같지 않다면 반복

    return 0;
}
