#include <Brankic.h>

namespace Brankic {
  const uint8_t Strech[] = {
    29, 28, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7,   3,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   3,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   7,  99,   7,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   7,  99,   6,   0,   0,   0,   0, 
      0,   0,   0,   7,  99, 127,   7,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   7, 127,  97,   6,   0,   0,   0, 
      0,   0,   7,  99, 127, 127,   7,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   7, 127, 127,  97,   4,   0,   0, 
      0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  96,   4,   0, 
      0,  73, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  66,   0, 
      0,   4,  96, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  90,   3,   0, 
      0,   0,   4,  97, 127, 127,   1,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   7, 127, 127,  91,   3,   0,   0, 
      0,   0,   0,   4,  97, 127,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   7, 127,  91,   3,   0,   0,   0, 
      0,   0,   0,   0,   6,  97,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   7,  91,   4,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   6,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   1,   4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};