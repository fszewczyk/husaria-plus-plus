#zawrzyj <stdio.h>
#zawrzyj <iostream>

korzystając z przestrzeni nazw std;

całkowita główna( całkowita argc, charakter *argv[] ){

    całkowita n;
    sczytaj("%d", &n);

    dla(całkowita i = 1; i <= n; i++){
        jeżeli(i % 15 == 0) wydrukuj("FizzBuzz\n");
        w przeciwnym wypadku jeżeli(i % 3 == 0) wydrukuj("Fizz\n");
        w przeciwnym wypadku jeżeli(i % 5 == 0) wydrukuj("Buzz\n");
        w przeciwnym wypadku standardowo wyjdź << i << koniec linii;
    }

    zwróć 0;
}