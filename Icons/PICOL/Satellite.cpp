#include <PICOL.h>

namespace PICOL {
  const uint8_t Satellite[] = {
    48, 15, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  13,  20,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  20,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  19,  18,   5, 
      0,   0,   0,   7,  89, 116, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 116, 100,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  87, 116, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 116,  98,  16, 
      0,   0,   0,  33, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   3,   0,  21,  54,  69,  58,  25,   1,   0,   0,   0,   0,  26, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   1, 
      0,   0,   0,  70, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  50,   0,  44, 110, 127, 127, 127, 115,  57,   3,   0,   0,   0,  59, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  38,   0, 
      0,   0,  13, 106, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  18,  29, 115, 127, 127, 127, 127, 127, 121,  42,   0,   0,   5,  93, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 101,  10,   0, 
      0,   0,  43, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  74,  98, 127, 127, 127, 127, 127, 127, 127, 106,  72,  71,  79, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  65,   0,   0, 
      0,   2,  82, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  28,   0,   0, 
      0,  20, 113, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,   5,   0,   0, 
      0,  55, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  72,  57,  57,  90, 127, 127, 127, 127, 127, 127, 127,  98,  58, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  53,   0,   0,   0, 
      7,  93, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,  11,   0,   0,  23, 109, 127, 127, 127, 127, 127, 116,  34,  10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 112,  19,   0,   0,   0, 
     34, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  72,   0,   0,   0,   0,  34, 100, 125, 127, 126, 107,  44,   0,  40, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  80,   2,   0,   0,   0, 
     77, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  37,   0,   0,   0,   0,   0,  12,  40,  53,  43,  16,   0,   0,  75, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  41,   0,   0,   0,   0, 
     94, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107,  89,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  86, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107,  90,  11,   0,   0,   0,   0, 
     12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  11,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,  12,   8,   0,   0,   0,   0,   0, 
  };
};