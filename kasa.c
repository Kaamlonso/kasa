#include <stdio.h>
#include <math.h>

int main(void) {
    float tutar, odenen;

    printf("Urun tutari (TL): ");
    scanf("%f", &tutar);
    printf("Odenen para (TL): ");
    scanf("%f", &odenen);

    /* Hatali yontem: yuvarlama yok, sadece kesme */
    int hataliKurus = (int)((odenen - tutar) * 100);

    /* Dogru yontem: en yakin tam sayiya yuvarla */
    int paraUstu = (int)roundf((odenen - tutar) * 100);

    printf("\nYuvarlamasiz hesap : %d kurus\n", hataliKurus);
    printf("Yuvarlamali hesap  : %d kurus (%d TL %d kurus)\n",
           paraUstu, paraUstu / 100, paraUstu % 100);

    int kalan = paraUstu;

    int k200 = kalan / 20000;  kalan %= 20000;
    int k100 = kalan / 10000;  kalan %= 10000;
    int k50  = kalan / 5000;   kalan %= 5000;
    int k20  = kalan / 2000;   kalan %= 2000;
    int k10  = kalan / 1000;   kalan %= 1000;
    int k5   = kalan / 500;    kalan %= 500;
    int k1   = kalan / 100;    kalan %= 100;
    int m50  = kalan / 50;     kalan %= 50;
    int m25  = kalan / 25;     kalan %= 25;
    int m10  = kalan / 10;     kalan %= 10;
    int m5   = kalan / 5;      kalan %= 5;
    int m1   = kalan / 1;      kalan %= 1;

    int toplam = k200 + k100 + k50 + k20 + k10 + k5 + k1
               + m50 + m25 + m10 + m5 + m1;

    printf("\nPara ustu dagilimi:\n");
    printf("200 TL : %d adet\n", k200);
    printf("100 TL : %d adet\n", k100);
    printf("50 TL  : %d adet\n", k50);
    printf("20 TL  : %d adet\n", k20);
    printf("10 TL  : %d adet\n", k10);
    printf("5 TL   : %d adet\n", k5);
    printf("1 TL   : %d adet\n", k1);
    printf("50 kurus : %d adet\n", m50);
    printf("25 kurus : %d adet\n", m25);
    printf("10 kurus : %d adet\n", m10);
    printf("5 kurus  : %d adet\n", m5);
    printf("1 kurus  : %d adet\n", m1);

    printf("\nToplam kupur/madeni para sayisi: %d\n", toplam);
    return 0;
}