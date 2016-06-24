#include "SDL/SDL.h"

int main( int argc, char* args[])
{
  SDL_Surface* screen = NULL;
  SDL_Rect rect = {0, 0, 100, 100};

  SDL_Init( SDL_INIT_EVERYTHING );
  
  screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );

  SDL_FillRect(screen, &rect, SDL_MapRGB(screen->format, 255, 255, 255));

  SDL_Flip( screen );
  
  SDL_Delay( 20000 );
  return 0;
};
