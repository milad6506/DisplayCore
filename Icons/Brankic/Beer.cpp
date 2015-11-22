#include <Brankic.h>

namespace Brankic {
  const uint8_t Beer[] = {
    26, 30, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  15,  81, 118,  96,  24,   0,   0,  15,  90, 123,  97,  25,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   1, 103, 127, 127, 127, 121, 114, 114, 117, 127, 127, 127, 118,  15,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   7,  33,  84, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  36,   0,   0,   0,   0,   0, 
      0,  12, 114, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  25,   0,   0,   0,   0, 
      0,  51, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   0,   0,   0,   0, 
      0,  25, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,   0,   0,   0,   0, 
      0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   0,   0,   0,   0, 
      0,   0,   9, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  22,   0,   0,   0,   0, 
      0,   0,   0,  24, 105, 127, 127, 105,  51, 118, 127, 127, 127, 127, 121,  43,  79, 124, 127, 106,  31,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  12,  13,   0,   0,  18,  88, 121, 124,  91,  24,   0,   0,   0,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7,  94,  43,   0,   0,  27,  76,   0,   7, 127, 127, 127, 127, 127, 127,  99,  22,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127, 127, 127, 127, 127, 103,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   7, 127, 127,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127, 127, 127, 127, 127, 103,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127, 127, 127, 127,  99,  22,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 127, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127,   0,   7, 127, 127, 127,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,   1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  76, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   4,  75, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  67,   4,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};