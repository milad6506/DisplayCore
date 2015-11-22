#include <Brankic.h>

namespace Brankic {
  const uint8_t Shuffle[] = {
    31, 23, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  87,  13,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4, 127, 121,  55,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 102,  24,   0,   0,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   0,   0,   0,   0,  33, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  70,   6,   0, 
      0,   4, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   0,   6, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   0, 
      0,   7, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114,   9,   0,  73, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117,  45,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1, 100, 127, 127,  52,  30, 126, 127, 121,  13,   0,   0,   0,   7, 127, 127, 127,  82,  10,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19, 124, 115,  10, 109, 127, 127,  54,   0,   0,   0,   0,   7, 127, 112,  36,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58,  52,  70, 127, 127,  99,   1,   0,   0,   0,   0,   7,  73,   6,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  28, 126, 127, 124,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 106, 127, 127,  66,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66, 127, 127, 109,  16,  94,   1,   0,   0,   0,   0,   7,  72,   6,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 126, 127, 127,  30,  82, 127,  54,   0,   0,   0,   0,   7, 127, 111,  36,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   3, 103, 127, 127,  76,  12, 127, 127, 121,  13,   0,   0,   0,   7, 127, 127, 127,  81,   7,   0,   0,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114,   9,   0,  76, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117,  43,   0,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  43,   0,   0,   6, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127,  90,   0,   0,   0,   0,  34, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  72,   6,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 127, 127, 127, 103,  25,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4, 127, 121,  57,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  88,  15,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
