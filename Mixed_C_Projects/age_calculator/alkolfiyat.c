#define _CRT_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double vergili, ötvyüzde = 44, kdvyüzde = 15, vergisiz, toplamvergi, ötv, kdv;
    
    printf("\n Welcome to the alcohol price calculator program. \n");
    printf("\n We are going to calculate two types of taxes known as ÖTV and KDV. \n\n");
    printf("\n All right, type the alcohol drink price by Turkish Lira:");
    scanf("%lf", &vergili);
    
    ötv = (vergili * ötvyüzde) / 100;
    
    kdv = (vergili * kdvyüzde) / 100;
    
    toplamvergi = ötv + kdv;
    
    vergisiz = vergili - (ötv + kdv);
    
    printf("\n\n You have to pay %0.1lf turkish liras for ÖTV tax", ötv);
    printf("\n\n You have to pay %0.1lf turkish liras for KDV tax \n\n", kdv);
    printf("\n\n Total Taxes: %0.1lf turkish liras \n\n", toplamvergi);
    printf("\n\n Taxes free alcohol price: %0.1lf \n\n\n",vergisiz);
    
    return 0;
}
