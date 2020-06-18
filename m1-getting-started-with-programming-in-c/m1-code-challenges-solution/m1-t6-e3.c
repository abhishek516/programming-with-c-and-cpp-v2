#include <stdio.h>

int main() {

    char name[10] = "chin";
    char dollar = '$';
    float gdp = 3.6;
    int year = 2020;

    printf("As economic reforms picked up the pace, %s's GDP grew five-fold to reach US%c%.1f trillion in %d (as per IMF estimates).", name, dollar, gdp, year);

    return 0;
}

