#include <stdio.h>

int main(void)
{
    int n;      // 문자 개수
    int eng_cur = 0, eng_max = 0;   // 연속된 소문자 영어 개수, 최대 연속 개수
    int num_cur = 0, num_max = 0;   // 연속된 숫자 개수, 최대 숫자 개수
    
    scanf("%d", &n);    // 문자 개수 입력
    getchar();  // 개행 제거(한 번)
    char a;     // 입력된 한 문자
    
    // 문자 하나씩 순차적 처리
    for(int i = 0; i < n; i++) {
        
        scanf("%c", &a);    // 문자 하나 입력
        
        // 영어 소문자일 때
        if (a >= 'a' && a <= 'z') {
            eng_cur++;  // 연속 개수 증가
            num_cur = 0;    // 끊기면 0 초기화
            // 최대값 갱신
            if (eng_cur > eng_max) {
                eng_max = eng_cur;
            }
        }
        
        // 숫자일 때
        else if (a >= '0' && a <= '9') {
            num_cur++;
            eng_cur = 0;
            if (num_cur > num_max) {
                num_max = num_cur;
            }
        }
    }
    
    printf("%d\n", eng_max);    // 연속된 소문자 영어 최대 길이 
    printf("%d\n", num_max);    // 연솟된 숫자 최대 길이
    
    return 0;
}
