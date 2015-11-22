#include <Brankic.h>

namespace Brankic {
  const uint8_t Car[] = {
    30, 25, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  43, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 112,  40,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   1, 112,  22,   0,   0,   0,   0,   0,   0, 127,   0,   0,   0,   0,   0,   0,  30, 112,   1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  30,  97,   0,   0,   0,   0,   0,   0, 112, 127, 105,   0,   0,   0,   0,   0,   0,  97,  30,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  75,  52,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54,  73,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 112,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 112,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  25, 102,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  67,  66,  12,   0,   0, 102,  25,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  67,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  75,   4,   4,  70,   6,   0,  60,  67,   0,   0,   0,   0, 
      0,   0,   0,   0,   0, 105,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58,  12,   0,   0,  12,  48,   0,  22, 105,   0,   0,   0,   0, 
      0,   0,  31, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 100,  31,   0, 
      0,   0, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,   0, 
      0,   0, 127, 127, 100,  30,  24,  90, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127,  91,  21,  27, 102, 127, 127,   0, 
      0,   0, 127, 127,  22,   0,   0,   6, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  10,   0,   0,  25, 127, 127,   0, 
      0,   0, 127, 127,  21,   0,   0,   7, 126,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 126,   4,   0,   0,  19, 127, 127,   0, 
      0,   0, 127, 127,  96,  15,  10,  85, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  79,   4,   7,  93, 127, 127,   0, 
      0,   0, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127, 127, 127, 127,   0, 
      0,   0, 114, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114,   0, 
      0,   0,  36, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  36,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127,   0,   0,   0, 
      0,   0,   0,   0, 124, 127, 124,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 124, 127, 124,   0,   0,   0, 
      0,   0,   0,   0,  67, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67, 127,  67,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};