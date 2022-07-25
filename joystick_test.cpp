#include <SDL2/SDL.h>
#include <SDL2/SDL_joystick.h>

int main(){
    //start SDL
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Joystick *joy;
    // Initialize the joystick subsystem
    SDL_InitSubSystem(SDL_INIT_JOYSTICK);
    //check for joystick
    if(SDL_NumJoysticks()>0){
        //open joystick
        joy = SDL_JoystickOpen(0);
        if(joy){
            printf("Opened Joystick 0\n");
            printf("Name: %s\n",SDL_JoystickNameForIndex(0));
            printf("Number of Axes: %d\n", SDL_JoystickNumAxes(joy));
            printf("Number of Buttons: %d\n", SDL_JoystickNumButtons(joy));
            printf("Number of Balls: %d\n", SDL_JoystickNumBalls(joy));
        }else {
            printf("Couldn't open Joystick 0\n");
        }
        // Close if open
        if(SDL_JoystickGetAttached(joy)){
            SDL_JoystickClose(joy);
        }
    }
    //Quit SDL
    SDL_Quit();
    return 0;
}
