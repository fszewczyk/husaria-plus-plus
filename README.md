![Banner](https://imgur.com/xXqFZCI.jpg)

# Husaria++
Każdy z nas, wielkich Polaków programistów, doświadczył bólu
kodowania w absolutnie obrzydliwych językach programowania, które
zawierają w sobie wiele zapożyczeń z języka wroga - angielskiego.

To repozytorium zawiera kod, który ostatecznie naprawia ten 
wszechobecny problem, pozwalając pisać polski kod, który zostanie 
skompilowany jako C++, zapewniając przepotężną wydajność na jaką
zasługuje nasz naród.

## Instalacja
Po sciągnięciu repozytorium, wejdź do głównego folderu i uruchom w terminalu
```
source montaż.sh
```

Teraz wszystko jest gotowe, aby szerzyć polską dumę narodową. 

## Jak używać?
Plik `słownik.txt` zawiera wszystkie stworzone aliasy, czasem są intuicyjne, czasem trochę mniej.
Najlepiej zobaczyć to na przykładzie:
```
#zawrzyj <stdio.h>
#zawrzyj <iostream>

korzystając z przestrzeni nazw std;

całkowita główna( całkowita argc, charakter *argv[] ){
    wydrukuj("Witaj świecie\n");
    zwróć 0;
}
```
Więcej przykładów jest w folderze [/przykłady](/przykłady). 
Rozszerzenie pliku źródłowego nie ma znaczenia dla kompilatora, ale ja polecam używać
.hpp (HusariaPlusPlus)

Kompilacja jest bardzo prosta i zwraca `a.out`
```
husaria++ file.hpp
```

## Chcesz wprowadzić własne zmiany?
Dostosuj plik `słownik.txt` do swoich potrzeb. Pamiętaj tylko o konwencji:
```
polski: angielski
```
## FAQ

#### Czy to jest żart?
Tak, to jest żart. Kocham język angielski, jak i wiele języków
programowania. Wszyscy jesteśmy równi i tak powinniśmy się traktować :)

#### Czy to ma jakiekolwiek realne zastosowanie?
Absolutnie nie, ten projekt jest strasznie dziurawy, źle zrobiony, bezużyteczny,
korzysta z wielu złych praktyk i ma bardzo dużo edge-casów.