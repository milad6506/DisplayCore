#include <Brankic.h>

namespace Brankic {
  const uint8_t Barcode1[] = {
    33, 24, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  31, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 100,  31,   0, 
      0,   0, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127,   0, 127, 127,   0,   0, 127,   0, 127, 127,   0, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127,   0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0, 127, 127, 127,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,   0, 
      0,   0,  31, 105, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,  31,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
