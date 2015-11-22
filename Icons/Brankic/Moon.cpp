#include <Brankic.h>

namespace Brankic {
  const uint8_t Moon[] = {
    26, 26, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  51,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  18,  97, 127,  48,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  24, 117, 127, 127,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  10, 114, 127, 127, 127,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  90, 127, 127, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  36, 127, 127, 127, 127, 127,  79,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  90, 127, 127, 127, 127, 127, 109,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   9, 126, 127, 127, 127, 127, 127, 127,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  36, 127, 127, 127, 127, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  57, 127, 127, 127, 127, 127, 127, 127, 123,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  67, 127, 127, 127, 127, 127, 127, 127, 127,  79,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  51, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  25, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   1, 117, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  70,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  79,  36,  19,   0,   0,  25,  45,  88,  15,   0, 
      0,   0,  12, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   0,   0, 
      0,   0,   0,  54, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,   9,   0,   0, 
      0,   0,   0,   0,  82, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  27,   0,   0,   0, 
      0,   0,   0,   0,   3,  79, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  24,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  52, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  96,  18,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   9,  73, 117, 127, 127, 127, 127, 127, 127, 127,  96,  28,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31,  51,  67,  76,  64,  45,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
