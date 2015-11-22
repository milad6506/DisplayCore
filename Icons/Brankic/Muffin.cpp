#include <Brankic.h>

namespace Brankic {
  const uint8_t Muffin[] = {
    30, 29, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  58,  97, 126, 121, 100,  60,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  22, 105, 127, 127, 127, 127, 127, 127, 111,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  16, 118, 127, 127, 127, 127, 127, 127, 127, 127, 117,  15,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  90, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  72,   3,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  15, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  72,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  46, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,  13,  84, 114, 114, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114,  84,  13,   0,   0, 
      0,   0,  19, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  21,   0, 
      0,   0,  85, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  87,   0, 
      0,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,   0, 
      0,   0, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,   0, 
      0,   0,  87, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  87,   0, 
      0,   0,  21, 118, 127, 127, 126,  81, 127, 127, 126,  81, 127, 127, 126,  81, 127, 127, 126,  81, 127, 127, 126,  81, 127, 127, 127, 118,  21,   0, 
      0,   0,   0,  13,  81, 111,  42,  18,  57, 126,  42,  18,  57, 126,  42,  18,  57, 126,  42,  18,  57, 126,  42,  24,  57, 115,  84,  13,   0,   0, 
      0,   0,   0,   0,   0,   0,  55, 124,  42,   0,  55, 124,  42,   0,  55, 124,  42,   0,  55, 124,  42,   0,  55, 127,  55,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 112,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  82, 127, 126,   6, 123, 126,   3, 126, 127,   0, 127, 126,   4, 124, 120,   9, 126, 127,  81,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  51, 127, 127,  33,  94, 127,  15, 112, 127,   0, 127, 112,  15, 127,  91,  36, 127, 127,  49,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  19, 127, 127,  61,  66, 127,  30,  97, 127,   0, 127,  97,  30, 127,  63,  64, 127, 127,  16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0, 117, 127,  91,  36, 127,  45,  82, 127,   0, 127,  82,  45, 127,  33,  94, 127, 112,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  85, 127, 120,   9, 126,  60,  67, 127,   0, 127,  67,  60, 126,   7, 121, 127,  82,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  55, 127, 127,  24, 103,  75,  52, 127,   0, 127,  52,  75, 102,  25, 127, 127,  51,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  24, 127, 127,  54,  73,  90,  37, 127,   0, 127,  37,  90,  73,  54, 127, 127,  19,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1, 118, 127,  82,  45, 105,  22, 127,   0, 127,  22, 105,  43,  84, 127, 114,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  90, 127, 112,  15, 120,   7, 127,   0, 127,   7, 120,  15, 112, 127,  82,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  52,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
