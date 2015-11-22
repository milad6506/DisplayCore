#include <PICOL.h>

namespace PICOL {
  const uint8_t Football[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   6,  11,  17,  26,  33,  38,  39,  39,  39,  36,  28,  15,   3,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  71, 106, 114, 119, 122, 124, 125, 125, 125, 123, 120, 112,  65,   2,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   3,   0,   0,   0,   0,   0,   0,   0,  17,  68, 117, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  16,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  16,  49,  86,  79,  21,   0,   0,   0,   0,   0,   0,   0,   1,  32,  98, 127, 127, 127, 127, 127, 127, 127, 127, 121,  29,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  29,  72, 109, 126, 127, 127, 109,  48,   4,   0,   0,   0,   0,   0,   0,   0,  14,  80, 125, 127, 127, 127, 127, 127, 127, 124,  37,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  31,  82, 118, 127, 127, 127, 127, 127, 127, 123,  76,  14,   0,   0,   0,   0,   0,   0,   0,   7,  66, 123, 127, 127, 127, 127, 127, 126,  42,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  75, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  96,  27,   0,   0,   0,   0,   0,   0,   0,   4,  60, 122, 127, 127, 127, 127, 127,  46,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  50, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  39,   1,   0,   0,   0,   0,   0,   0,   3,  60, 123, 127, 127, 127, 126,  43,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  78, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 116,  51,   2,   0,   0,   0,   0,   0,   0,   4,  66, 125, 127, 127, 125,  39,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  95, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   7,  80, 127, 127, 123,  35,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 102, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  63,   4,   0,   0,   0,   0,   0,   0,  15,  98, 127, 120,  27,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  21, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  65,   4,   0,   0,   0,   0,   0,   0,  33, 117, 116,  19,   0, 
      0,   0,   0,   0,   0,   0,   0,  11,  90, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  64,   3,   0,   0,   0,   0,   0,   1,  67, 107,  12,   0, 
      0,   0,   0,   0,   0,   0,   3,  71, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  98, 110, 127, 127, 127, 127, 127, 127, 122,  57,   2,   0,   0,   0,   0,   0,  17,  73,   7,   0, 
      0,   0,   0,   0,   0,   0,  41, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  68,   6,  22,  94, 127, 127, 127, 127, 127, 127, 120,  50,   0,   0,   0,   0,   0,   1,  14,   2,   0, 
      0,   0,   0,   0,   0,  14, 101, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  47,   0,   0,  18,  94, 127, 127, 127, 127, 127, 127, 116,  39,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123, 104, 117,  93,   8,   0,   0,  18,  94, 127, 127, 127, 127, 127, 127, 109,  26,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  20, 110, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  66,   9,  31,  47,   3,   0,   0,   0,  22, 110, 127, 127, 127, 127, 127, 127,  95,  13,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  67, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  40,   0,   0,   0,   0,   2,   7,   0,   6,  95, 127, 127, 127, 127, 127, 127, 127,  75,   4,   0,   0,   0,   0,   0, 
      0,   0,   0,  17, 108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123, 109, 121,  85,   5,   0,   0,   0,  44,  91,  41,  60, 120, 127, 127, 127, 127, 127, 127, 127, 122,  47,   0,   0,   0,   0,   0, 
      0,   0,   0,  54, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  66,  11,  40,  51,   2,   0,   0,   0,  30, 115, 125, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  21,   0,   0,   0,   0, 
      0,   0,   6,  94, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  33,   0,   0,   0,   0,   2,   5,   0,   8,  99, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   3,   0,   0,   0, 
      0,   0,  30, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 113, 124,  76,   3,   0,   0,   0,  46,  82,  33,  58, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  89,   4,   0,   0,   0, 
      0,   0,  61, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  66,  16,  50,  53,   2,   0,   0,   0,  39, 120, 122, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  52,   0,   0,   0,   0, 
      0,   0,  40, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  27,   0,   0,   1,   0,   2,   3,   0,  10, 105, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  19,   0,   0,   0,   0, 
      0,   0,   2,  72, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 117, 124,  67,   1,   0,   0,   0,  48,  73,  27,  57, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  77,   1,   0,   0,   0,   0, 
      0,   0,   0,  15, 100, 127, 127, 127, 127, 127, 127, 127, 125,  65,  21,  60,  54,   1,   0,   0,   0,  48, 122, 120, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  33,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  35, 116, 127, 127, 127, 127, 127, 127, 116,  22,   0,   1,   1,   0,   1,   1,   0,  13, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  86,   4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  56, 124, 127, 127, 127, 127, 127, 125,  59,   1,   0,   0,   0,  48,  64,  20,  55, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  36,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   5,  74, 127, 127, 127, 127, 127, 127, 120,  53,   2,   0,   0,  57, 123, 115, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  82,   4,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  11,  87, 127, 127, 127, 127, 127, 127, 120,  53,   2,   0,  18, 114, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  26,   0,   0,   0,   0,   0,   0,   0, 
     24,   8,   0,   0,   0,   0,   0,  16,  95, 127, 127, 127, 127, 127, 127, 120,  57,  15,  55, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  57,   0,   0,   0,   0,   0,   0,   0,   0, 
     74,  49,   0,   0,   0,   0,   0,   0,  22, 101, 127, 127, 127, 127, 127, 127, 123, 112, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  85,   7,   0,   0,   0,   0,   0,   0,   0,   0, 
     95, 104,  16,   0,   0,   0,   0,   0,   0,  26, 105, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 101,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    106, 127,  72,   3,   0,   0,   0,   0,   0,   0,  27, 105, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    115, 127, 121,  47,   0,   0,   0,   0,   0,   0,   0,  27, 101, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    121, 127, 127, 112,  31,   0,   0,   0,   0,   0,   0,   0,  23,  97, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  99,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 103,  23,   0,   0,   0,   0,   0,   0,   0,  17,  88, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  80,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  98,  21,   0,   0,   0,   0,   0,   0,   0,  12,  76, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  51,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127,  98,  22,   0,   0,   0,   0,   0,   0,   0,   5,  59, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117,  73,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 103,  30,   0,   0,   0,   0,   0,   0,   0,   1,  37, 102, 127, 127, 127, 127, 127, 127, 115,  76,  27,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    122, 127, 127, 127, 127, 127, 127, 127, 111,  45,   2,   0,   0,   0,   0,   0,   0,   0,  17,  76, 121, 127, 123, 103,  65,  24,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    113, 127, 127, 127, 127, 127, 127, 127, 127, 120,  69,  13,   0,   0,   0,   0,   0,   0,   0,   3,  44,  72,  39,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,  45,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     34,  87, 106, 114, 117, 119, 119, 117, 114, 109, 102,  94,  75,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   3,  11,  17,  21,  26,  26,  20,  17,  14,   9,   3,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};