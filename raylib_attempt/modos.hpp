#ifndef __modos__
#define __modos__

#include "modoExplorando.cpp"
#include "modoMenu.cpp"
#include "modoOutroMenu.cpp"
#include "modoPause.cpp"
#include "modoPuzzle.cpp"

//modos 
int explorando(int* gamemode);
int menu(int* gamemode);
int outroMenu(int* gamemode);
int pause(int* gamemode);
int puzzle(int* gamemode);


#endif 