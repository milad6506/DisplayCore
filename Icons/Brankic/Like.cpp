#include <Brankic.h>

namespace Brankic {
  const uint8_t Like[] = {
    31, 26, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  34,  84, 102, 103, 102,  72,  22,   0,   0,   0,   0,   0,   0,  28,  75, 102, 103, 102,  78,  31,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  10,  90, 127, 127, 127, 127, 127, 127, 127,  69,   1,   0,   0,   4,  79, 127, 127, 127, 127, 127, 127, 127,  85,   6,   0,   0,   0, 
      0,   0,   0,   9, 103, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   0,   1,  93, 127, 127, 127, 127, 127, 127, 127, 127, 127,  99,   3,   0,   0, 
      0,   0,   0,  79, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  60,  64, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  69,   0,   0, 
      0,   0,  21, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  12,   0, 
      0,   0,  67, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  57,   0, 
      0,   0, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   0, 
      0,   0, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 106,   0, 
      0,   0, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,   0, 
      0,   0, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  99,   0, 
      0,   0,  78, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  64,   0, 
      0,   0,  24, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  15,   0, 
      0,   0,   0,  82, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0,   0, 
      0,   0,   0,   9, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,   6,   0,   0, 
      0,   0,   0,   0,  30, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  24,   0,   0,   0, 
      0,   0,   0,   0,   0,  46, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  42,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  54, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  49,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  51, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  48,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  42, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  39,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  21,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  96, 127, 127, 127, 127, 127, 127, 127, 127,  87,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  64, 126, 127, 127, 127, 127, 124,  57,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 111, 127, 127, 111,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  72,  72,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
