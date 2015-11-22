#include <PICOL.h>

namespace PICOL {
  const uint8_t BatteryEmpty[] = {
    48, 28, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  16,  69,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  69,  20, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 114,  63,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  62, 112, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
     75,  75,  75,  75,  74,  87, 125, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,  12,  65,  76,  75,  75,  76,  63,  11,   0,   0,   0,  10,  62,  76,  75,  75,  76,  66,  14,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   1,  49, 119, 127, 127, 127, 127,  82,  10,   0,   9,  79, 126, 127, 127, 127, 120,  53,   2,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   1,  49, 118, 127, 127, 127, 126,  80,  18,  77, 126, 127, 127, 127, 120,  52,   1,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  50, 119, 127, 127, 127, 125, 109, 124, 127, 127, 127, 120,  53,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  51, 119, 127, 127, 127, 127, 127, 127, 127, 121,  55,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  52, 119, 127, 127, 127, 127, 127, 120,  55,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  95, 127, 127, 127, 127, 127,  98,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  71, 125, 127, 127, 127, 127, 127, 125,  74,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  70, 125, 127, 127, 127, 127, 127, 127, 127, 125,  73,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  69, 124, 127, 127, 127, 121,  91, 120, 127, 127, 127, 125,  72,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   5,  67, 124, 127, 127, 127, 123,  62,   6,  59, 122, 127, 127, 127, 125,  71,   6,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   5,  67, 124, 127, 127, 127, 123,  64,   4,   0,   3,  60, 122, 127, 127, 127, 125,  70,   6,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
     59,  59,  59,  59,  58,  74, 124, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,  13,  55,  59,  58,  59,  59,  45,   5,   0,   0,   0,   4,  44,  59,  59,  58,  59,  56,  15,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 118,  84,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  84, 117, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
      0,   0,   0,   0,   0,  13,  56,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  56,  16, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
