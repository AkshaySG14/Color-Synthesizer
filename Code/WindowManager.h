//
//  WindowManager.h
//  ColorSynthesizer
//
//  Created by Akshay Subramaniam on 14/1/15.
//  Copyright (c) 2015 Incultus. All rights reserved.
//

#ifndef __ColorSynthesizer__WindowManager__
#define __ColorSynthesizer__WindowManager__

#include <SFML/Audio.hpp>
#include <SFMl/Graphics.hpp>
#include "ResourcePath.hpp"

class WindowManager {
private:
    //State which determines whether or not the pixels are erased or filled.
    bool filling = true;
    sf::RenderWindow &window;
    sf::Texture pixelT;
    sf::Texture pixelbT;
    sf::Texture mainMenuT;
    sf::Texture backTN, backTH, backTP;
    sf::Texture buttonTN, buttonTH, buttonTP;
    sf::Font buttonFont;
public:
    //Icon that is displayed on the mac dock when the app is launched.
    sf::Image icon;
    //Text that displays to help the user navigate the UI.
    sf::Text colorText, fillText, eraseText, cursorText;
    sf::Text backText;
    
    //The menu itself, which appears as a gray UI bar.
    sf::Sprite mainMenu;
    //Buttons of the application.
    sf::Sprite colorButton, fillButton, eraseButton, cursorButton;
    sf::Sprite back;
    //Vector containing each and every pixel on the board.
    std::vector<sf::Sprite> pixels;
    //Vector containing whether or not the pixel is erased.
    std::vector<bool> transparentPixels;
    //Vector containing each pixel border.
    std::vector<sf::Sprite> pixelBorders;
    //Vector containing the colors of every pixel.
    std::vector<sf::Color> colors;
    
    WindowManager(sf::RenderWindow *window);
    void initializeValues();
    void setSprites();
    void checkButtonPresssed(float x, float y);
    void checkButtonHighlighted(float x, float y);
    bool getFilling();
};

#endif /* defined(__ColorSynthesizer__WindowManager__) */
