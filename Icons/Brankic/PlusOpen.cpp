#include <Brankic.h>

namespace Brankic {
  const uint8_t PlusOpen[] = {
    29, 29, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  60,  94, 102, 126, 126, 102,  94,  60,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  27,  96, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  97,  31,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   1,  72, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   3,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   9,  96, 127, 127, 127, 126,  87,  45,  25,   1,   1,  25,  45,  87, 126, 127, 127, 127,  96,   9,   0,   0,   0,   0,   0, 
      0,   0,   0,   4, 100, 127, 127, 127,  87,  18,   0,   0,   0,   0,   0,   0,   0,   0,  27, 108, 127, 127, 127, 100,   4,   0,   0,   0,   0, 
      0,   0,   0,  76, 127, 127, 127,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  70, 127, 127, 127,  76,   0,   0,   0,   0, 
      0,   0,  24, 127, 127, 127,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58, 127, 127, 127,  25,   0,   0,   0, 
      0,   0,  93, 127, 127,  87,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  84, 127, 127,  94,   0,   0,   0, 
      0,  24, 127, 127, 124,  18,   0,   0,   0,   0,   0,   0,   0,  94,  94,   0,   0,   0,   0,   0,   0,   0,  18, 124, 127, 127,  24,   0,   0, 
      0,  64, 127, 127,  82,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,  82, 127, 127,  66,   0,   0, 
      0,  94, 127, 127,  45,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,  45, 127, 127,  94,   0,   0, 
      0, 114, 127, 127,  19,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,  16, 127, 127, 114,   0,   0, 
      0, 124, 127, 127,   7,   0,   0,   0,   0,  94, 127, 127, 127, 127, 127, 127, 127, 127,  94,   0,   0,   0,   0,   3, 127, 127, 124,   0,   0, 
      0, 124, 127, 127,   7,   0,   0,   0,   0,  91, 127, 127, 127, 127, 127, 127, 127, 127,  91,   0,   0,   0,   0,   6, 127, 127, 124,   0,   0, 
      0, 114, 127, 127,  19,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,  19, 127, 127, 114,   0,   0, 
      0,  94, 127, 127,  45,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,  45, 127, 127,  94,   0,   0, 
      0,  66, 127, 127,  82,   0,   0,   0,   0,   0,   0,   0,   0, 127, 127,   0,   0,   0,   0,   0,   0,   0,   0,  82, 127, 127,  66,   0,   0, 
      0,  24, 127, 127, 124,  18,   0,   0,   0,   0,   0,   0,   0,  91,  91,   0,   0,   0,   0,   0,   0,   0,  16, 124, 127, 127,  24,   0,   0, 
      0,   0,  94, 127, 127,  84,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  84, 127, 127,  96,   0,   0,   0, 
      0,   0,  24, 127, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127,  25,   0,   0,   0, 
      0,   0,   0,  76, 127, 127, 126,  58,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  66, 126, 127, 127,  76,   0,   0,   0,   0, 
      0,   0,   0,   4, 100, 127, 127, 127,  87,  18,   0,   0,   0,   0,   0,   0,   0,   0,  27, 106, 127, 127, 127, 100,   4,   0,   0,   0,   0, 
      0,   0,   0,   0,   9,  96, 127, 127, 127, 124,  85,  45,  25,   0,   0,  25,  42,  85, 126, 127, 127, 127,  96,   9,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   3,  72, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   3,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  31,  99, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  99,  31,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  61,  96, 103, 127, 127, 103,  96,  61,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};