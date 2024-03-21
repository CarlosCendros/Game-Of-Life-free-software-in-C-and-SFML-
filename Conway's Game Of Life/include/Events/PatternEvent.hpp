#ifndef PATTERNEVENT_HPP
#define PATTERNEVENT_HPP

#include "Event.hpp"
#include "MakePattern.hpp"

void PatternEvent(sf::Event event,std::vector<std::vector<Cell>>& Cells, int nRows, int nCols){
    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
        sf::Vector2f MousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        if(IsInBox(MousePos,Exit_pattern_A)){
            SHOW_PATTERN_MENU = false;
        }
        else if(!SHOW_PATTERN_MENU && PATTERN_SELECTED && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){ 
            RenderPattern(filename,Cells,nRows,nCols,GridSize,MousePos);
            PATTERN_SELECTED = false;
        }
        else if(KOK_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/KokGalaxy.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && NewShuttle_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/NewShuttle.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P12_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P-12.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P16_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P-16.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P35_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P-35.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P49_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P-49.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P51_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P-51Beluchenko.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P230_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P-230GliderShuttle.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P856_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P-856.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && PiOrbital_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/PiOrbital.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && PPS_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/PrePulsarShuttle.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && Bat_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/Bat.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && Lobster_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/Lobster.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && GGG_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/GosperGliderGun.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && GliderTrain_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/GliderTrain.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P15GG_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P15GliderGuns.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P16GG_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P16GliderGuns.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P20GG_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P20GliderGun.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P24GG_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P24GliderGun.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P45GG_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P45GliderGun.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && P52GG_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/P52GliderGun.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && SDS_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/SmallestDiagSpaceship.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && TubStretcher_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/TubStretcher.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && TA_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/TotalAperiodic.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && mws_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/mwssbehindcoeship.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && Scholar_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/Scholar.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && Medusa_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/Medusa.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && SF_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/SpaceFiller.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && QM_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/QuarterMax.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && Max_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/Max.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && HalfMax_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/HalfMax.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && TTT_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/TitanicToroidalTraveler.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && C14_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/3c14.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && C10_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/3c10.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && KW_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/KnightWave.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && WW_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/WasherWoman.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && Worm_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/WORM.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && VWorm_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/VWORM.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && Venetian_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/Venetian.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
        else if(SHOW_PATTERN_MENU && Vex_sprite.getGlobalBounds().contains(MousePos.x, MousePos.y)){
            filename = "Patterns/Vex.txt";
            SHOW_PATTERN_MENU = false;
            PATTERN_SELECTED = true;
        }
    }
}

#endif