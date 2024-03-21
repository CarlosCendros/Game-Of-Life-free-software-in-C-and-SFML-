#ifndef PATTERNTEXT_HPP
#define PATTERNTEXT_HPP

#include "../Settings/Color.hpp"
#include "../Settings/Window.hpp"

sf::RectangleShape Background3;
sf::Text Pattern_Title;
sf::Text Info;
sf::Text Exit_pattern;
sf::RectangleShape Exit_pattern_A;

sf::Image KOK_image;
sf::Texture KOK_texture;
sf::Sprite KOK_sprite;
sf::Image NewShuttle_image;
sf::Texture NewShuttle_texture;
sf::Sprite NewShuttle_sprite;
sf::Image P12_image;
sf::Texture P12_texture;
sf::Sprite P12_sprite;
sf::Image P16_image;
sf::Texture P16_texture;
sf::Sprite P16_sprite;
sf::Image P35_image;
sf::Texture P35_texture;
sf::Sprite P35_sprite;
sf::Image P49_image;
sf::Texture P49_texture;
sf::Sprite P49_sprite;
sf::Image P51_image;
sf::Texture P51_texture;
sf::Sprite P51_sprite;
sf::Image P56_image;
sf::Texture P56_texture;
sf::Sprite P56_sprite;
sf::Image P230_image;
sf::Texture P230_texture;
sf::Sprite P230_sprite;
sf::Image P856_image;
sf::Texture P856_texture;
sf::Sprite P856_sprite;
sf::Image PiOrbital_image;
sf::Texture PiOrbital_texture;
sf::Sprite PiOrbital_sprite;
sf::Image PPS_image;
sf::Texture PPS_texture;
sf::Sprite PPS_sprite;
sf::Image Bat_image;
sf::Texture Bat_texture;
sf::Sprite Bat_sprite;
sf::Image Lobster_image;
sf::Texture Lobster_texture;
sf::Sprite Lobster_sprite;
sf::Image GGG_image;
sf::Texture GGG_texture;
sf::Sprite GGG_sprite;
sf::Image GliderTrain_image;
sf::Texture GliderTrain_texture;
sf::Sprite GliderTrain_sprite;
sf::Image P15GG_image;
sf::Texture P15GG_texture;
sf::Sprite P15GG_sprite;
sf::Image P16GG_image;
sf::Texture P16GG_texture;
sf::Sprite P16GG_sprite;
sf::Image P20GG_image;
sf::Texture P20GG_texture;
sf::Sprite P20GG_sprite;
sf::Image P24GG_image;
sf::Texture P24GG_texture;
sf::Sprite P24GG_sprite;
sf::Image P45GG_image;
sf::Texture P45GG_texture;
sf::Sprite P45GG_sprite;
sf::Image P52GG_image;
sf::Texture P52GG_texture;
sf::Sprite P52GG_sprite;
sf::Image Scholar_image;
sf::Texture Scholar_texture;
sf::Sprite Scholar_sprite;
sf::Image SDS_image;
sf::Texture SDS_texture;
sf::Sprite SDS_sprite;
sf::Image TubStretcher_image;
sf::Texture TubStretcher_texture;
sf::Sprite TubStretcher_sprite;
sf::Image TA_image;
sf::Texture TA_texture;
sf::Sprite TA_sprite;
sf::Image mws_image;
sf::Texture mws_texture;
sf::Sprite mws_sprite;
sf::Image Medusa_image;
sf::Texture Medusa_texture;
sf::Sprite Medusa_sprite;
sf::Image SF_image;
sf::Texture SF_texture;
sf::Sprite SF_sprite;
sf::Image QM_image;
sf::Texture QM_texture;
sf::Sprite QM_sprite;
sf::Image Max_image;
sf::Texture Max_texture;
sf::Sprite Max_sprite;
sf::Image HalfMax_image;
sf::Texture HalfMax_texture;
sf::Sprite HalfMax_sprite;
sf::Image TTT_image;
sf::Texture TTT_texture;
sf::Sprite TTT_sprite;
sf::Image C14_image;
sf::Texture C14_texture;
sf::Sprite C14_sprite;
sf::Image C10_image;
sf::Texture C10_texture;
sf::Sprite C10_sprite;
sf::Image KW_image;
sf::Texture KW_texture;
sf::Sprite KW_sprite;
sf::Image WW_image;
sf::Texture WW_texture;
sf::Sprite WW_sprite;
sf::Image Worm_image;
sf::Texture Worm_texture;
sf::Sprite Worm_sprite;
sf::Image VWorm_image;
sf::Texture VWorm_texture;
sf::Sprite VWorm_sprite;
sf::Image Venetian_image;
sf::Texture Venetian_texture;
sf::Sprite Venetian_sprite;
sf::Image Vex_image;
sf::Texture Vex_texture;
sf::Sprite Vex_sprite;

void InitialisePatternText(){
    font.loadFromFile("Fonts/Pixel.ttf");

    Background3.setSize(sf::Vector2f(window.getSize().x,window.getSize().y));

    Exit_pattern.setFont(font);
    Exit_pattern.setCharacterSize(MENU_CHARACTER_SIZE-10);
    Exit_pattern.setPosition(30,GAME_HEIGHT-40);
    Exit_pattern.setString("Exit Pattern Menu");
    Exit_pattern_A.setSize(sf::Vector2f(210,30));
    Exit_pattern_A.setPosition(30,GAME_HEIGHT-40);

    Pattern_Title.setFont(font);
    Pattern_Title.setCharacterSize(MENU_CHARACTER_SIZE+10);
    Pattern_Title.setPosition(GAME_WIDTH/2-130,20);
    Pattern_Title.setString("PATTERN MENU");
    
    Info.setFont(font);
    Info.setCharacterSize(MENU_CHARACTER_SIZE-10);
    Info.setPosition(GAME_WIDTH-570,GAME_HEIGHT-30);
    Info.setString("Some patterns can only be used in bigger grids");

    KOK_image.loadFromFile("Images/KokGalaxy.png");
    KOK_texture.loadFromImage(KOK_image);
    KOK_sprite.setTexture(KOK_texture);
    KOK_sprite.setPosition(90,100);
    KOK_sprite.setScale(sf::Vector2f(70/KOK_sprite.getGlobalBounds().width,70/KOK_sprite.getGlobalBounds().height));

    NewShuttle_image.loadFromFile("Images/NewShuttle.png");
    NewShuttle_texture.loadFromImage(NewShuttle_image);
    NewShuttle_sprite.setTexture(NewShuttle_texture);
    NewShuttle_sprite.setPosition(90,180);
    NewShuttle_sprite.setScale(sf::Vector2f(60/NewShuttle_sprite.getGlobalBounds().width,60/NewShuttle_sprite.getGlobalBounds().height));

    P12_image.loadFromFile("Images/P12.png");
    P12_texture.loadFromImage(P12_image);
    P12_sprite.setTexture(P12_texture);
    P12_sprite.setPosition(90,240);
    P12_sprite.setScale(sf::Vector2f(70/P12_sprite.getGlobalBounds().width,70/P12_sprite.getGlobalBounds().height));

    P16_image.loadFromFile("Images/P16.png");
    P16_texture.loadFromImage(P16_image);
    P16_sprite.setTexture(P16_texture);
    P16_sprite.setPosition(90,300);
    P16_sprite.setScale(sf::Vector2f(70/P16_sprite.getGlobalBounds().width,70/P16_sprite.getGlobalBounds().height));

    P35_image.loadFromFile("Images/P35.png");
    P35_texture.loadFromImage(P35_image);
    P35_sprite.setTexture(P35_texture);
    P35_sprite.setPosition(90,360);
    P35_sprite.setScale(sf::Vector2f(70/P35_sprite.getGlobalBounds().width,70/P35_sprite.getGlobalBounds().height));

    P49_image.loadFromFile("Images/P49.png");
    P49_texture.loadFromImage(P49_image);
    P49_sprite.setTexture(P49_texture);
    P49_sprite.setPosition(90,420);
    P49_sprite.setScale(sf::Vector2f(70/P49_sprite.getGlobalBounds().width,70/P49_sprite.getGlobalBounds().height));

    P51_image.loadFromFile("Images/P51.png");
    P51_texture.loadFromImage(P51_image);
    P51_sprite.setTexture(P51_texture);
    P51_sprite.setPosition(90,480);
    P51_sprite.setScale(sf::Vector2f(70/P51_sprite.getGlobalBounds().width,70/P51_sprite.getGlobalBounds().height));

    P56_image.loadFromFile("Images/P56.png");
    P56_texture.loadFromImage(P56_image);
    P56_sprite.setTexture(P56_texture);
    P56_sprite.setPosition(90,540);
    P56_sprite.setScale(sf::Vector2f(70/P56_sprite.getGlobalBounds().width,70/P56_sprite.getGlobalBounds().height));

    P230_image.loadFromFile("Images/P230.png");
    P230_texture.loadFromImage(P230_image);
    P230_sprite.setTexture(P230_texture);
    P230_sprite.setPosition(190,100);
    P230_sprite.setScale(sf::Vector2f(70/P230_sprite.getGlobalBounds().width,70/P230_sprite.getGlobalBounds().height));

    P856_image.loadFromFile("Images/P856.png");
    P856_texture.loadFromImage(P856_image);
    P856_sprite.setTexture(P856_texture);
    P856_sprite.setPosition(190,160);
    P856_sprite.setScale(sf::Vector2f(70/P856_sprite.getGlobalBounds().width,70/P856_sprite.getGlobalBounds().height));

    PiOrbital_image.loadFromFile("Images/PiOrbital.png");
    PiOrbital_texture.loadFromImage(PiOrbital_image);
    PiOrbital_sprite.setTexture(PiOrbital_texture);
    PiOrbital_sprite.setPosition(190,180);
    PiOrbital_sprite.setScale(sf::Vector2f(70/PiOrbital_sprite.getGlobalBounds().width,70/PiOrbital_sprite.getGlobalBounds().height));
    
    PPS_image.loadFromFile("Images/PPS.png");
    PPS_texture.loadFromImage(PPS_image);
    PPS_sprite.setTexture(PPS_texture);
    PPS_sprite.setPosition(190,250);
    PPS_sprite.setScale(sf::Vector2f(70/PPS_sprite.getGlobalBounds().width,70/PPS_sprite.getGlobalBounds().height));

    Bat_image.loadFromFile("Images/Bat.png");
    Bat_texture.loadFromImage(Bat_image);
    Bat_sprite.setTexture(Bat_texture);
    Bat_sprite.setPosition(190,320);
    Bat_sprite.setScale(sf::Vector2f(70/Bat_sprite.getGlobalBounds().width,70/Bat_sprite.getGlobalBounds().height));

    Lobster_image.loadFromFile("Images/Lobster.png");
    Lobster_texture.loadFromImage(Lobster_image);
    Lobster_sprite.setTexture(Lobster_texture);
    Lobster_sprite.setPosition(190,370);
    Lobster_sprite.setScale(sf::Vector2f(70/Lobster_sprite.getGlobalBounds().width,70/Lobster_sprite.getGlobalBounds().height));

    GGG_image.loadFromFile("Images/GosperGliderGun.png");
    GGG_texture.loadFromImage(GGG_image);
    GGG_sprite.setTexture(GGG_texture);
    GGG_sprite.setPosition(190,440);
    GGG_sprite.setScale(sf::Vector2f(70/GGG_sprite.getGlobalBounds().width,70/GGG_sprite.getGlobalBounds().height));

    GliderTrain_image.loadFromFile("Images/GliderTrain.png");
    GliderTrain_texture.loadFromImage(GliderTrain_image);
    GliderTrain_sprite.setTexture(GliderTrain_texture);
    GliderTrain_sprite.setPosition(190,490);
    GliderTrain_sprite.setScale(sf::Vector2f(70/GliderTrain_sprite.getGlobalBounds().width,70/GliderTrain_sprite.getGlobalBounds().height));

    P15GG_image.loadFromFile("Images/P15GliderGun.png");
    P15GG_texture.loadFromImage(P15GG_image);
    P15GG_sprite.setTexture(P15GG_texture);
    P15GG_sprite.setPosition(190,540);
    P15GG_sprite.setScale(sf::Vector2f(70/P15GG_sprite.getGlobalBounds().width,70/P15GG_sprite.getGlobalBounds().height));

    P16GG_image.loadFromFile("Images/P16GliderGun.png");
    P16GG_texture.loadFromImage(P16GG_image);
    P16GG_sprite.setTexture(P16GG_texture);
    P16GG_sprite.setPosition(290,100);
    P16GG_sprite.setScale(sf::Vector2f(70/P16GG_sprite.getGlobalBounds().width,70/P16GG_sprite.getGlobalBounds().height));

    P20GG_image.loadFromFile("Images/P20GliderGun.png");
    P20GG_texture.loadFromImage(P20GG_image);
    P20GG_sprite.setTexture(P20GG_texture);
    P20GG_sprite.setPosition(290,160);
    P20GG_sprite.setScale(sf::Vector2f(70/P20GG_sprite.getGlobalBounds().width,70/P20GG_sprite.getGlobalBounds().height));

    P24GG_image.loadFromFile("Images/P24GliderGun.png");
    P24GG_texture.loadFromImage(P24GG_image);
    P24GG_sprite.setTexture(P24GG_texture);
    P24GG_sprite.setPosition(290,210);
    P24GG_sprite.setScale(sf::Vector2f(70/P24GG_sprite.getGlobalBounds().width,70/P24GG_sprite.getGlobalBounds().height));

    P45GG_image.loadFromFile("Images/P45GliderGun.png");
    P45GG_texture.loadFromImage(P45GG_image);
    P45GG_sprite.setTexture(P45GG_texture);
    P45GG_sprite.setPosition(290,260);
    P45GG_sprite.setScale(sf::Vector2f(70/P45GG_sprite.getGlobalBounds().width,70/P45GG_sprite.getGlobalBounds().height));

    P52GG_image.loadFromFile("Images/P52GliderGun.png");
    P52GG_texture.loadFromImage(P52GG_image);
    P52GG_sprite.setTexture(P52GG_texture);
    P52GG_sprite.setPosition(290,300);
    P52GG_sprite.setScale(sf::Vector2f(70/P52GG_sprite.getGlobalBounds().width,70/P52GG_sprite.getGlobalBounds().height));

    SDS_image.loadFromFile("Images/SmallestDiagonalSpaceship.png");
    SDS_texture.loadFromImage(SDS_image);
    SDS_sprite.setTexture(SDS_texture);
    SDS_sprite.setPosition(290,360);
    SDS_sprite.setScale(sf::Vector2f(70/SDS_sprite.getGlobalBounds().width,70/SDS_sprite.getGlobalBounds().height));

    TubStretcher_image.loadFromFile("Images/TubStretcher.png");
    TubStretcher_texture.loadFromImage(TubStretcher_image);
    TubStretcher_sprite.setTexture(TubStretcher_texture);
    TubStretcher_sprite.setPosition(290,430);
    TubStretcher_sprite.setScale(sf::Vector2f(70/TubStretcher_sprite.getGlobalBounds().width,70/TubStretcher_sprite.getGlobalBounds().height));

    TA_image.loadFromFile("Images/TotalAperiodic.png");
    TA_texture.loadFromImage(TA_image);
    TA_sprite.setTexture(TA_texture);
    TA_sprite.setPosition(290,480);
    TA_sprite.setScale(sf::Vector2f(70/TA_sprite.getGlobalBounds().width,70/TA_sprite.getGlobalBounds().height));

    mws_image.loadFromFile("Images/mwssbehindcoeship.png");
    mws_texture.loadFromImage(mws_image);
    mws_sprite.setTexture(mws_texture);
    mws_sprite.setPosition(290,540);
    mws_sprite.setScale(sf::Vector2f(70/mws_sprite.getGlobalBounds().width,70/mws_sprite.getGlobalBounds().height));

    Scholar_image.loadFromFile("Images/Scholar.png");
    Scholar_texture.loadFromImage(Scholar_image);
    Scholar_sprite.setTexture(Scholar_texture);
    Scholar_sprite.setPosition(390,100);

    Medusa_image.loadFromFile("Images/Medusa.png");
    Medusa_texture.loadFromImage(Medusa_image);
    Medusa_sprite.setTexture(Medusa_texture);
    Medusa_sprite.setPosition(390,450);
    Medusa_sprite.setScale(sf::Vector2f(100/Medusa_sprite.getGlobalBounds().width,100/Medusa_sprite.getGlobalBounds().height));

    SF_image.loadFromFile("Images/SpaceFiller.png");
    SF_texture.loadFromImage(SF_image);
    SF_sprite.setTexture(SF_texture);
    SF_sprite.setPosition(490,100);
    SF_sprite.setScale(sf::Vector2f(150/SF_sprite.getGlobalBounds().width,150/SF_sprite.getGlobalBounds().height));

    QM_image.loadFromFile("Images/QuarterMax.png");
    QM_texture.loadFromImage(QM_image);
    QM_sprite.setTexture(QM_texture);
    QM_sprite.setPosition(490,230);
    QM_sprite.setScale(sf::Vector2f(150/QM_sprite.getGlobalBounds().width,150/QM_sprite.getGlobalBounds().height));

    Max_image.loadFromFile("Images/Max.png");
    Max_texture.loadFromImage(Max_image);
    Max_sprite.setTexture(Max_texture);
    Max_sprite.setPosition(490,370);
    Max_sprite.setScale(sf::Vector2f(150/Max_sprite.getGlobalBounds().width,150/Max_sprite.getGlobalBounds().height));

    HalfMax_image.loadFromFile("Images/HalfMax.png");
    HalfMax_texture.loadFromImage(HalfMax_image);
    HalfMax_sprite.setTexture(HalfMax_texture);
    HalfMax_sprite.setPosition(630,200);
    HalfMax_sprite.setScale(sf::Vector2f(300/HalfMax_sprite.getGlobalBounds().width,300/HalfMax_sprite.getGlobalBounds().height));

    TTT_image.loadFromFile("Images/TitanicToroidalTraveler.png");
    TTT_texture.loadFromImage(TTT_image);
    TTT_sprite.setTexture(TTT_texture);
    TTT_sprite.setPosition(390,520);
    TTT_sprite.setScale(sf::Vector2f(100/TTT_sprite.getGlobalBounds().width,100/TTT_sprite.getGlobalBounds().height));

    C14_image.loadFromFile("Images/3c14.png");
    C14_texture.loadFromImage(C14_image);
    C14_sprite.setTexture(C14_texture);
    C14_sprite.setPosition(490,520);
    C14_sprite.setScale(sf::Vector2f(100/C14_sprite.getGlobalBounds().width,100/C14_sprite.getGlobalBounds().height));

    C10_image.loadFromFile("Images/3c10.png");
    C10_texture.loadFromImage(C10_image);
    C10_sprite.setTexture(C10_texture);
    C10_sprite.setPosition(630,510);
    C10_sprite.setScale(sf::Vector2f(100/C10_sprite.getGlobalBounds().width,100/C10_sprite.getGlobalBounds().height));

    KW_image.loadFromFile("Images/KnightWave.png");
    KW_texture.loadFromImage(KW_image);
    KW_sprite.setTexture(KW_texture);
    KW_sprite.setPosition(730,510);
    KW_sprite.setScale(sf::Vector2f(100/KW_sprite.getGlobalBounds().width,100/KW_sprite.getGlobalBounds().height));

    WW_image.loadFromFile("Images/WasherWoman.png");
    WW_texture.loadFromImage(WW_image);
    WW_sprite.setTexture(WW_texture);
    WW_sprite.setPosition(830,510);
    WW_sprite.setScale(sf::Vector2f(100/WW_sprite.getGlobalBounds().width,100/WW_sprite.getGlobalBounds().height));

    Worm_image.loadFromFile("Images/Worm.png");
    Worm_texture.loadFromImage(Worm_image);
    Worm_sprite.setTexture(Worm_texture);
    Worm_sprite.setPosition(940,490);
    Worm_sprite.setScale(sf::Vector2f(150/Worm_sprite.getGlobalBounds().width,150/Worm_sprite.getGlobalBounds().height));

    VWorm_image.loadFromFile("Images/VWorm.png");
    VWorm_texture.loadFromImage(VWorm_image);
    VWorm_sprite.setTexture(VWorm_texture);
    VWorm_sprite.setPosition(930,100);
    VWorm_sprite.setScale(sf::Vector2f(250/VWorm_sprite.getGlobalBounds().width,250/VWorm_sprite.getGlobalBounds().height));

    Venetian_image.loadFromFile("Images/Venetian.png");
    Venetian_texture.loadFromImage(Venetian_image);
    Venetian_sprite.setTexture(Venetian_texture);
    Venetian_sprite.setPosition(1100,490);
    Venetian_sprite.setScale(sf::Vector2f(150/Venetian_sprite.getGlobalBounds().width,150/Venetian_sprite.getGlobalBounds().height));
    
    Vex_image.loadFromFile("Images/Vex.png");
    Vex_texture.loadFromImage(Vex_image);
    Vex_sprite.setTexture(Vex_texture);
    Vex_sprite.setPosition(640,110);
    Vex_sprite.setScale(sf::Vector2f(70/Vex_sprite.getGlobalBounds().width,70/Vex_sprite.getGlobalBounds().height));
}
void ShowPatternText(){
    Background3.setFillColor(COLOR_DEAD);
    Exit_pattern.setFillColor(COLOR_ALIVE);
    Exit_pattern_A.setFillColor(COLOR_DEAD);
    Pattern_Title.setFillColor(COLOR_ALIVE);
    Info.setFillColor(COLOR_ALIVE);

    window.draw(Background3);
    window.draw(Exit_pattern_A);
    window.draw(Exit_pattern);
    window.draw(Pattern_Title);
    window.draw(Info);

    window.draw(KOK_sprite);
    window.draw(NewShuttle_sprite);
    window.draw(P12_sprite);
    window.draw(P16_sprite);
    window.draw(P35_sprite);
    window.draw(P49_sprite);
    window.draw(P51_sprite);
    window.draw(P56_sprite);
    window.draw(P230_sprite);
    window.draw(P856_sprite);
    window.draw(PiOrbital_sprite);
    window.draw(PPS_sprite);
    window.draw(Bat_sprite);
    window.draw(Lobster_sprite);
    window.draw(GGG_sprite);
    window.draw(GliderTrain_sprite);
    window.draw(P15GG_sprite);
    window.draw(P16GG_sprite);
    window.draw(P20GG_sprite);
    window.draw(P24GG_sprite);
    window.draw(P45GG_sprite);
    window.draw(P52GG_sprite);
    window.draw(Scholar_sprite);
    window.draw(SDS_sprite);
    window.draw(TubStretcher_sprite);
    window.draw(TA_sprite);
    window.draw(mws_sprite);
    window.draw(Medusa_sprite);
    window.draw(SF_sprite);
    window.draw(QM_sprite);
    window.draw(Max_sprite);
    window.draw(HalfMax_sprite);
    window.draw(TTT_sprite);
    window.draw(C14_sprite);
    window.draw(C10_sprite);
    window.draw(KW_sprite);
    window.draw(WW_sprite);
    window.draw(Worm_sprite);
    window.draw(VWorm_sprite);
    window.draw(Venetian_sprite);
    window.draw(Vex_sprite);
}

#endif