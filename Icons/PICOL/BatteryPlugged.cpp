#include <PICOL.h>

namespace PICOL {
  const uint8_t BatteryPlugged[] = {
    48, 28, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  16,  69,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  69,  20, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 114,  63,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  62, 112, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 122,  36, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
     75,  75,  75,  75,  74,  87, 125, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35,  76,  75,  75,  75,  75,  75,  75,  75,  75,  75,  75,  31,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  68,  22,  24,  24,  24,  23,   8,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123, 119, 119, 119, 119, 117,  39,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,  24,  77,  79,  79,  79,  79,  79,  79,  79,  79,  79,  79, 101, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  42,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,  38, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117, 110, 110, 110, 110, 109,  36,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,  38, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  63,  14,  15,  15,  15,  15,   5,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,  38, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,  38, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  68,  23,  25,  25,  25,  25,   8,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,  38, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122, 118, 118, 118, 119, 117,  39,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,  16,  53,  55,  55,  55,  55,  55,  55,  55,  55,  55,  54,  89, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  42,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114, 104, 105, 105, 105, 103,  34,   0,   8, 100, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  60,   9,  11,  11,  11,  10,   3,   0,   8, 100, 127, 122,  36, 
     59,  59,  59,  59,  58,  74, 124, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  25,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
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