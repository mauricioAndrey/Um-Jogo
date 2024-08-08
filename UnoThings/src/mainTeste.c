//biblioteca principal
//#include "raylib.h" //como colocar essa merda pra funcionar

//bibliotecas criadas
#include "lib/definesUno.h"

//bibliotecas padrão
#include <stdio.h>

int mainTeste(){
    teste();
    //INICIALIZAÇÕES
    //-----------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "UNO BINÁRIO");

    SetTargetFPS(60);

    //LOOP ETERNO
    /*-----------------------------------------------------------------
    while(!WindowShouldClose()){
        //Update das variáveis
        //-------------------------------------------------------------
        //
        //-------------------------------------------------------------

        //Desenhos
        //-------------------------------------------------------------
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats!", 190, 200, 20, LIGTHGRAY);
        EndDrawing();
        //-------------------------------------------------------------
    }


    //-----------------------------------------------------------------
    //DESALOCAÇÕES
    CloseWindow();
    //-----------------------------------------------------------------
    */
    return 0;
}