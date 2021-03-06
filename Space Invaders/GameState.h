//
//  GameState.h
//  Space Invaders
//
//  Created by Robert Berry on 27/12/2013.
//  Copyright (c) 2013 Robert Berry. All rights reserved.
//

#ifndef __Space_Invaders__GameState__
#define __Space_Invaders__GameState__

#include "StateBasedGame.h"
#include <SFML/System.hpp>

class GameState {
public:
    virtual void onStart(StateBasedGame &game) = 0;
    virtual void onEnd(StateBasedGame &game) = 0;
    virtual void onLogic(StateBasedGame &game, sf::Time delta) = 0;
    virtual void onRender(StateBasedGame &game, sf::Time delta) = 0;
};

#endif /* defined(__Space_Invaders__GameState__) */
