# ProDyn
Dans ce tp nous abordons la recherche par dichotomie, la resolution du probleme du sac à dos
avec un algorithme glouton et la resolution d'un probleme de pixel avec la programmation 
dynamique

## Installation
#### Prerequis : 
avoir Cmake et un Compiler de c/c++ installé sur
sa machine
### Linux
* cloner le code ou telecharger le .zip et decompresser le 
* se placer dans le dossier build et faire
* 
* ```shell
    cmake ..
    make 
  ```
* le fichier executable a été géneré dans le repertoire build
### Windows avec Mingw
* cloner le code ou telecharger le .zip et decompresser le
* se placer dans le dossier build et faire
* ```shell
  cmake -G "MinGW Makefiles" ..
  mingw32-make
  ```
* le fichier executable a été géneré dans le repertoire build

## Documentation
Pour generer la documentation se placer dans le dossier source
### Windows
```shell
mingw32-make documentation
```
### Linux 
```shell
make documentation
```
La Doc est generé dans un dossier Doc à la racine du projet. Pour la 
consulter il suffit d'ouvrir le fichier index.html avec un navigateur

## Fonctionnement
L'application ProdDyn realise tout d'abbord les tests des algorithmes
- dichotomie
- l'algorithme glouton
dans un second temps le programme affiche une matrice géneré aleatoirement et
remplit le plus grand carré vide avec des #