#include <stdio.h>

int main() {
    float voltage, current, time;

    printf("전압(V)를 입력하세요: ");
    scanf("%f", &voltage);

    printf("전류(A)를 입력하세요: ");
    scanf("%f", &current);

    printf("사용 시간(h)을 입력하세요: ");
    scanf("%f", &time);

    float power = voltage * current;
    float energy = power * time;
    float cost = energy * 0.15f; //정밀도 일치를 위해서 float형으로 사용

    printf("\n--- 계산 결과 ---\n");
    printf("전력: %.2f W\n", power);
    printf("에너지: %.2f Wh\n", energy);
    printf("예상 요금: %.2f", cost);

    return 0;
}
