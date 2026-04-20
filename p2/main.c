#include <stdio.h>

int main(void)
{
    int n;      // 문자 개수
    char str[100];      // 문자열 저장 배열
    
    int eng_cur = 0, eng_max = 0;   // 연속된 소문자 영어 개수, 최대 연속 개수
    int num_cur = 0, num_max = 0;   // 연속된 숫자 개수, 최대 숫자 개수
    
    scanf("%d", &n);    // 문자 개수 입력
    scanf("%s", str);   // 문자열 입력
    
    // 문자열 한 글자씩 확인
    for(int i = 0; i < n; i++) {
        char c = str[i];    // 현재 문자
        
        // 영어 소문자일 때
        if (c >= 'a' && c <= 'z') {
            eng_cur++;  // 연속 개수 증가
            // 최대값 갱신
            if (eng_cur > eng_max) {
                eng_max = eng_cur;
            }
        } 
        else {
            eng_cur = 0;    // 끊기면 0 초기화
        }
        
        // 숫자일 때
        if (c >= '0' && c <= '9') {
            num_cur++;  
            if (num_cur > num_max) {
                num_max = num_cur;
            }
        }
        else {
            num_cur = 0;
        }
    }
    
    printf("%d\n", eng_max);    // 연속된 소문자 영어 최대 길이 
    printf("%d\n", num_max);    // 연솟된 숫자 최대 길이
    
    return 0;
}
