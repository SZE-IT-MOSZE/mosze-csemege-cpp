# Modern Szoftverfejlesztési Eszközök (MoSZE) C++ segédanyagok
C++ példák a következő témakörökben:
- CMake
- gtest
- gmock

## Példák tételes felsorolása

1. [Minimális CMake projekt](./01_very_minimal)
1. [GTest mintapélda - alakzatok](./02_testing_example)
1. [Külső könyvtár használata - XML](./03_using_external_library_tinyxml/)


### GTest mintapélda - alakzatok

#### Fejlesztés - Windows és Visual Studio
CMake fájlból generálható Visual Studio solution és projektfájlok tetszés szerint.

Lépések screenshotonként bemutatva:

1. Fejlesztői powershell elindítása a fejlesztőeszközök könnyű elérésére: ![alt_text](docs/screenshots/01_start_menu.png)
1. Egy új munkakönyvtár létrehozása: ```mkdir build``` ![alt_text](docs/screenshots/02_mkdir.png)
1. Navigáljunk az újonnan létrehozott könyvtárba: ```cd build``` ![alt_text](docs/screenshots/03_navigation.png)
1. Generáljunk Visual Studio solutiont a CMake fájlok alapján: ```cmake .. -G "Visual Studio 17 2022"```![alt_text](docs/screenshots/04_projekt_generalas.png)
1. Győződjünk meg a sikeres kimenetről: ![alt_text](docs/screenshots/05_result.png)
1. Solution megnyitása Visual Studio segítségével: ![alt_text](docs/screenshots/06_gen_solution.png)
1. A megnyitott solution: ![alt_text](docs/screenshots/07_solution_source.png)
