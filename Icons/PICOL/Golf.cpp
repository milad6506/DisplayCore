#include <PICOL.h>

namespace PICOL {
  const uint8_t Golf[] = {
    27, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  15,  35,  53,  61,  62,  55,  37,  17,   2,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   4,  34,  76, 106, 120, 125, 127, 127, 126, 121, 109,  81,  40,   6,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  24,  82, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  89,  30,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  42, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114,  52,   3,   0,   0,   0, 
      0,   0,   0,   1,  47, 117, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  59,   2,   0,   0, 
      0,   0,   0,  35, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  47,   0,   0, 
      0,   0,  14, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  22,   0, 
      0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   2, 
      0,  14, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114,  26, 
      0,  44, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  67, 
      0,  74, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 100, 
      6,  94, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120, 
     11, 103, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 
     13, 106, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 
     10, 102, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 
      4,  91, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117, 
      0,  70, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  95, 
      0,  39, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  60, 
      0,  11, 102, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  21, 
      0,   0,  53, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  66,   1, 
      0,   0,   9,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 101,  15,   0, 
      0,   0,   0,  26, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  35,   0,   0, 
      0,   0,   0,   0,  35, 110, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  45,   0,   0,   0, 
      0,   0,   0,   0,   0,  30,  98, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,  38,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  14,  66, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  73,  19,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  21,  59,  93, 113, 121, 124, 124, 122, 114,  96,  64,  25,   1,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  18,  30,  37,  38,  32,  19,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   2,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,   3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   8,  79, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106,  86,  13,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  33, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  43,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  53, 123, 127, 127, 127, 127, 127, 127, 127, 127, 125,  64,   2,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   4,  76, 127, 127, 127, 127, 127, 127, 127, 127,  87,   8,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  97, 127, 127, 127, 127, 127, 127, 105,  20,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 115, 127, 127, 127, 127, 121,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  99, 127, 127, 127, 127, 112,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  99, 127, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  97, 125, 125, 125, 125, 110,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  30,  39,  38,  38,  39,  34,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};