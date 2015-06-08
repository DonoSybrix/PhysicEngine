////////////////////////////////////////////////////////////
//
// PTI : Collision detection
// Copyright (C) 2009 Orhan Donovan ( dorhan@nantes.epsi.fr )
//
// - Author : Orhan Donovan.
// - Create : 10/09/2009.
// - Desc.  : Gestion des �v�nements
//
////////////////////////////////////////////////////////////

#ifndef EVENT_H
#define EVENT_H

    // Library
    #include <stdio.h>
    #include <stdlib.h>
    #include <SDL/SDL.h>
    #include "Object.h"
    #include "Core.h"

    extern int itemToAdd;
    extern int nbObjects;
    extern int etatGravity;
    extern int noCollision;
    extern int drawMain;
    extern Object *objects;

    //////////////////////////////////
    /// R�cup�re les �v�nements du joueur
    //////////////////////////////////
    void Event_Get( SDL_Event *event, int *play );

#endif

