#include <stdio.h>

typedef struct club {
    int bangou;
    char namae[20];
    char seibetsu;
    int nennrei;
    float shinchou;
    float taijuu;
} GYM;

GYM fitness[] = {
    {1401, "Yamada", 'm', 40, 170.2, 67.9},
    {1402, "Suzuki", 'l', 22, 152.4, 47.9},
    {1403, "Nakano", 'l', 30, 160.5, 50.2},
    {1404, "Morita", 'm', 52, 168.3, 72.4}
};

GYM *p = fitness;
GYM *maxShinchoP = fitness;
GYM *maxTaijuP = fitness;

int main(void) {
    int i;
    int total_age = 0;
    float total_height = 0.0;
    float total_weight = 0.0;
    
    for (i = 0; i < 4; i++) {
        total_age += p->nennrei;
        total_height += p->shinchou;
        total_weight += p->taijuu;

        if (p->taijuu > maxTaijuP->taijuu) {
          maxTaijuP = p;
        }

        if (p->shinchou > maxShinchoP->shinchou) {
          maxShinchoP = p;
        }
        p++;
    }
    
    float avg_age = (float)total_age / 4;
    float avg_height = total_height / 4;
    float avg_weight = total_weight / 4;
    
    printf("平均年齢 : %.3f\n平均身長 : %.3f\n平均体重 : %.3f\n体重の最大値とその会員番号 : %.f, %d\n身長の最大値とその会員番号 : %.f, %d\n",
           avg_age, avg_height, avg_weight, maxTaijuP->taijuu, maxTaijuP->bangou, maxShinchoP->shinchou, maxShinchoP->bangou);
    
    return 0;
}
