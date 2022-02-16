#zawrzyj <stdio.h>
#zawrzyj <iostream>

korzystając z przestrzeni nazw std;

całkowita główna( całkowita argc, charakter *argv[] ){

    podwójna n, m;

    wydrukuj("Wprowadź liczbę podwójną większą od 0\n");
    sczytaj("%lf", &n);

    zrób{
        sczytaj("%lf", &m);
        jeżeli(m > n) wydrukuj("Mniej\n");
        w przeciwnym wypadku jeżeli(m < n) wydrukuj("Więcej\n");
        w przeciwnym wypadku wydrukuj("Brawo! Ta liczba to %lf\n", m);
    } dopóki(n!=m);

    zwróć 0;
}