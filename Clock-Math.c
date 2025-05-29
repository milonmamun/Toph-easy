
#include <stdio.h>
#include <math.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);
    float angle=0,sm_angle, m_angle=0,h_angle=0;

     m_angle = 6.0 * M;
     h_angle = 30.0 * H + 0.5 * M;

     angle = fabsf(h_angle - m_angle);

     sm_angle = fminf(angle, (360.0 - angle));

    printf("%.7f\n", sm_angle);

    return 0;
}
