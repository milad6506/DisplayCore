#include <Brankic.h>

namespace Brankic {
  const uint8_t Fullscreen[] = {
    33, 27, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   7, 127, 127, 127, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127,   7,   0, 
      0,   7, 127, 127, 127, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127,   7,   0, 
      0,   7, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 
      0,   7, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 
      0,   7, 127, 127,   7,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0, 
      0,   7, 127, 127,   7,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   7, 127, 127,   7,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0, 
      0,   7, 127, 127,   7,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   7,   7, 127, 127,   7,   0, 
      0,   7, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 
      0,   7, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127,   7,   0, 
      0,   7, 127, 127, 127, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127,   7,   0, 
      0,   7, 127, 127, 127, 127, 127, 127,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 127, 127, 127,   7,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};