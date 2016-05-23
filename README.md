#Projekt rzeź

Projekt ma za zadanie symulować starcie Wikingów ze Słowianami pod murami dawnej, legendarnej osady Jomsborg. 

Po starciu dwóch armii i wyświetleniu wyniku program wylosuje wyniki grabieży na osadzie, na które złoży się ilość zrabowanych dóbr, pojmanych oraz zabitych ludzi.
Jako pierwszy będzie losowany stan ludności osady, a z wylosowanej liczby procentowo ilość mężczyzn, kobiet i dzieci oraz starców. Ostatnie trzy grupy będą posiadały znikomą zdolność bojową. 
Następnie wylosuję stan armii najeźdźców i spośród nich również wylosuję procentowo ilość mężczyzn, kobiet, dzieci i starców.

Losowanie tych grup odbędzie się z odpowiednim prawdopodobieństwem, żeby zminimalizować szansę starcia tysiąca kobiet na tysiąc pięćset starców. Do tego pod nogami krzątałyby się dwie setki dzieci.

Wstępnie każdej wylosowanej osobie zostanie wylosowana podstawowa wartość obrony. Każda obiekt reprezentujący osobę będzie posiadał metodę attack(), która będzie losować siłę ataku, a następnie zostanie ona porównywnana z obroną przeciwnika. Jeśli siła ataku będzie większa niż obrona, przeciwnik zginie. Na razie chciałbym, aby spośród dwóch grup, byli losowani dwaj wojowie, którzy toczyliby walkę 1:1. 
Symulacja będzie się toczyć aż na polu bitwy zostanie tylko jedna armia.
Hipotetyczne wartości z pomiędzy których wylosuję wartości. Pewnie ulegną zmianie podczas testowania.

Ilość Wikingów: 1000 – 5000 
- 85% mężczyzn
- 10% kobiet
- 3% starców
- 2% dzieci
- 
Ilość Słowian – 5000 - 10000
- 30% mężczyzn
- 35% kobiet
- 15% dzieci
- 20% starców


Dalsza implementacja: 

Każdemu walczącemu dodać metodę frags(), która zliczy ilość pokonanych przeciwników, a na sam koniec walk zostanie podana piątka najlepszych wojowników.
Może uda się dodać poszczególnym osobom morale, które będą wypadkową kilku czynników:

- stosunek wielkości armii
- ilość machin oblężniczych i wysokości murów
- współczynnik wyspania się wojownika przed bitwą
- ilość wypitego miodu
- szał bojowy
