#include <Brankic.h>

namespace Brankic {
  const uint8_t Hand[] = {
    27, 28, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  58,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   4,   3,   0,   0,   0,  96, 127, 127,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   9, 111, 118,  22,   0,   0, 124, 127, 127,  63,   0,   0,  12,  76,  52,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  37, 127, 127,  97,   0,   7, 127, 127, 127,  73,   0,   3, 105, 127, 127,  10,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  34, 127, 127, 127,  22,   7, 127, 127, 127,  67,   0,  46, 127, 127, 127,   9,   0,   0,   0,   0,   0,   0, 
      0,   0,  19,   0,   0,  13, 127, 127, 127,  60,   7, 127, 127, 127,  67,   0,  97, 127, 127, 109,   0,   0,   0,   0,   0,   0,   0, 
      0,  24, 127, 111,  22,   0, 109, 127, 127,  97,   7, 127, 127, 127,  67,   9, 126, 127, 127,  76,   0,   0,   0,   0,   0,   0,   0, 
      0,  45, 127, 127, 108,   3,  75, 127, 127, 126,  16, 127, 127, 127,  67,  49, 127, 127, 127,  45,   0,   0,   0,   0,   0,   0,   0, 
      0,  19, 127, 127, 127,  60,  43, 127, 127, 127,  52, 127, 127, 127,  67,  90, 127, 127, 127,  12,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  88, 127, 127, 123,  27, 126, 127, 127,  90, 127, 127, 127,  73, 123, 127, 127, 105,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  18, 124, 127, 127,  90, 105, 127, 127, 123, 127, 127, 127, 112, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  67, 127, 127, 127, 106, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  39,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   6, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,   9,   0,   0,  48,  76,  66,  12,   0,   0, 
      0,   0,   0,   0,  52, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,   0,   0,  84, 127, 127, 127, 117,  15,   0, 
      0,   0,   0,   0,   1, 105, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  12,  72, 127, 127, 127, 127,  63,   0,   0, 
      0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 127, 127,  58,   0,   0,   0, 
      0,   0,   0,   0,   0,  22, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  51,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  66,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  76, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  97,   1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  45, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117,  12,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   9, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  36,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  97, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  48,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127, 121,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  22, 127, 127, 127, 127, 127, 127, 127, 127,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0, 127, 127, 127, 127, 127, 127, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};