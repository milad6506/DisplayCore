#include <PICOL.h>

namespace PICOL {
  const uint8_t Copy[] = {
    48, 28, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  72,  73,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 118,  66,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  57,  85, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 110,  15,   0,  16,  72,  75,  75,  75,  75,  75,  75,  75,  75,  75,  76,  50,   1,   0,  51, 127, 127,  75,   0,   0,  26,  10,   0,   0,   0,   0,   0,   0,   0,  48,  76,  75,  75,  75,  75,  75,  75,  75,  75,  75,  72,  21, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   2,   0,  51, 127, 127,  75,   0,   0,  68,  77,   7,   0,   0,   0,   0,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 127,  74,   7,   0,   0,   0,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 127, 125,  72,   6,   0,   0,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 127, 127, 125,  71,   6,   0,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 127, 127, 127, 125,  70,   6,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 127, 127, 127, 127, 117,  30,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 127, 127, 127, 122,  58,   3,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 127, 127, 122,  59,   3,   0,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 127, 122,  60,   3,   0,   0,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   1,   0,  51, 127, 127,  75,   0,   0,  69, 125,  61,   3,   0,   0,   0,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   2,   0,  51, 127, 127,  75,   0,   0,  65,  64,   4,   0,   0,   0,   0,   0,   1,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,  13,  56,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  39,   1,   0,  51, 127, 127,  75,   0,   0,  18,   6,   0,   0,   0,   0,   0,   0,   0,  37,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  56,  16, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 121,  86,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  80,  99, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  58,  59,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
