#include <iostream>
#include <vector>
#include "raylib.h"

enum {
    menu = 1,
    pause,
    outroMenu,
    explorando,
    batalha
};

int main(){
    int gameMode;
    int prevGameMode;

    InitWindow(1920,1080, "Um-Jogo");
    //InitAudioDevice();
    if(!IsWindowFullscreen()){ ToggleFullscreen(); }
    SetTargetFPS(60);

    double time = GetTime();

    const float screenWight = (const float) GetScreenWidth();
    const float screenHeight = (const float) GetScreenHeight();


    //--------------------LOADS------------------------//

    //-------------------------------------------------//

    while(!WindowShouldClose()){
        if(gameMode == menu){
            prevGameMode = menu;

        }
        else if(gameMode == outroMenu){
            prevGameMode = outroMenu;

        }
        else if(gameMode == explorando){
            prevGameMode = explorando;

        }
        else if(gameMode == batalha){
            prevGameMode = batalha;

        }
        else if(gameMode == pause){
            prevGameMode = pause;

        }
        else{
            if(prevGameMode != menu || prevGameMode != outroMenu) 
                gameMode = menu;
            else 
                gameMode = pause;
            
        }

    }

    //----------------UNLOADS / FREES------------------//
    

    return 0;
}
