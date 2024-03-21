#ifndef COLOREVENT_HPP
#define COLOREVENT_HPP

#include "../Settings/Color.hpp"

void ColorEvent(sf::Event event){
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num0){
        COLOR_ALIVE = BLACK; 
        COLOR_DEAD = WHITE;
        BORDER_COLOR = BLACK;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num1){
        COLOR_ALIVE = WHITE;
        COLOR_DEAD = BLACK;
        BORDER_COLOR = WHITE;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num2){
        COLOR_ALIVE = GREEN_NEON;
        COLOR_DEAD = BLACK;
        BORDER_COLOR = GREY;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num3){
        COLOR_ALIVE = CYBER;
        COLOR_DEAD = BLACK;
        BORDER_COLOR = GREY;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num4){
        COLOR_ALIVE = BURGUNDY;
        COLOR_DEAD = FLORAL_WHITE;
        BORDER_COLOR = GREY;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num5){
        COLOR_ALIVE = IVORY;
        COLOR_DEAD = YALE;
        BORDER_COLOR = GREY;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num6){
        COLOR_ALIVE = CRIMSON;
        COLOR_DEAD = NAVY;
        BORDER_COLOR = GREY;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num7){
        COLOR_ALIVE = IMPERIAL_PURPLE;
        COLOR_DEAD = ULTRA_VIOLET;
        BORDER_COLOR = GREY;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num8){
        COLOR_ALIVE = FLORAL_WHITE;
        COLOR_DEAD = BURGUNDY;
        BORDER_COLOR = GREY;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Num9){
        COLOR_ALIVE = HALLOWEEN;
        COLOR_DEAD = IMPERIAL_PURPLE;
        BORDER_COLOR = GREY;
    }
}
#endif