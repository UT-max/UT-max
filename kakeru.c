#include <stdio.h>

int main(void)
{
    int Oshi, Kake, Haru;
    
    
    Oshi = 20;
    Kake = 50;
    Haru = 20;
    
    if (Oshi == 20)
    printf("Oshi is 20 years old\n");
    if (Kake != 50)
    printf("Kake is not 20 years old\n");
    if (Kake >= 20)
    printf("Kake is over 20 years old\n");
    if (Oshi < 20)
    printf("Oshi is under 20 years old\n");
    
    
    if (Oshi > Haru)
    printf("Oshi is older than Haru\n");
    
    if (Kake > Oshi)
    printf("Kake is older than Oshi\n");
    

    return 0;
};
}