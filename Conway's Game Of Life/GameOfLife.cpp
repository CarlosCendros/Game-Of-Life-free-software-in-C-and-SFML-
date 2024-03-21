#include "include/Events/Event.hpp"
#include "include/Events/PatternEvent.hpp"
#include "include/Events/ColorEvent.hpp"
#include "include/Events/Action.hpp"
#include "include/Text/GameText.hpp"
#include <iostream>
#include <vector>

int main(){
    window.setView(view);
    // Found in Text.hpp
    InitialiseMenuText();
    InitialisePreGameText();
    InitialiseGameText();
    InitialisePatternText();

    // Main loop
    while(window.isOpen()){
        sf::Event event;

        while(window.pollEvent(event)){
            // Found in Event.hpp and ColorEvent.hpp
            EventMenu(event);
            ColorEvent(event);
        }
        window.setView(view);

        ///////////////////////////////
        if(IS_IN_MENU)
        {
        window.setFramerateLimit(30);
        window.clear();
        // Found in Text.hpp
        MenuText();
        window.display();
        }

        //////////////////////////////////
        if(IS_IN_PREGAME)
        {   
        window.clear();
        // Found in Text.hpp
        PreGameText();
        window.display();
        }

        ///////////////////////////////
        // If the simulation is running
        else if(IS_IN_GAME)
        {
        if(HUGE_GRID && NEW){
            Cells = Huge_grid;
            nRows = GAME_WIDTH/3;
            nCols = GAME_HEIGHT/3;
            GridSize = 3;
        }
        else if(BIG_GRID && NEW){
            Cells = Big_grid;
            nRows = GAME_WIDTH/4;
            nCols = GAME_HEIGHT/4;
            GridSize = 4;
        }
        else if(MID_GRID && NEW){
            Cells = Mid_grid;
            nRows = GAME_WIDTH/10;
            nCols = GAME_HEIGHT/10;
            GridSize = 10;
        }
        else if(SMALL_GRID && NEW){
            Cells = Small_grid;
            nRows = GAME_WIDTH/20;
            nCols = GAME_HEIGHT/20;
            GridSize = 20;
        }
        if(NEW) NEW = false;
        if(!PAUSE){
            window.setFramerateLimit(FPS);
            window.clear();

            // Found in Action.hpp
            ShowActualGeneration(Cells,nRows,nCols);
            CheckNeighbours(Cells,nRows,nCols);
            CreateNextGeneration(Cells,nRows,nCols);

            //Found in Text.hpp
            if(TEXT)
                ShowText();

            window.display();
        }

        // If the simulation is paused
        else if(PAUSE){
            while(PAUSE){
                window.setFramerateLimit(FPS);
                sf::Event ev;
                
                while(window.pollEvent(ev)){
                    // Found in Event.hpp and ColorEvent.hpp
                    EventMenu(ev);
                    ColorEvent(ev);
                    PatternEvent(ev,Cells,nRows,nCols);
                }
                if(SHOW_PATTERN_MENU){
                    window.clear();
                    window.setView(view);


                    PatternEvent(ev,Cells,nRows,nCols);
                    ShowPatternText();
                    window.display();
                }
                else if(!SHOW_PATTERN_MENU){
                    window.setView(view);
                    
                    // Found in Action.hpp
                    CreateNewCell(Cells,nRows,nCols);

                    window.clear();

                    // Found in Action.hpp
                    ShowPausedGeneration(Cells,nRows,nCols);
                    
                    // Found in Text.hpp
                    if(TEXT)
                        ShowText();

                    window.display();
                }
            }
        }
        }
    }
}