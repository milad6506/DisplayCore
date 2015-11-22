#include <PICOL.h>

namespace PICOL {
  const uint8_t Synchronize[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      7,  50,  73,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  56,   8,   0, 
     58, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  55,   0, 
     77, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0, 
     32, 109, 127, 127, 127, 127, 125, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 119, 126, 127, 127,  73,   0, 
      0,  34, 110, 127, 127, 127, 123,  65,  25,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  24,  46, 120, 127, 127,  73,   0, 
      0,   0,  34, 109, 127, 127, 127, 113,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127, 127,  73,   0, 
      0,   0,   0,  33, 109, 127, 127, 127, 114,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
      0,   0,   0,   0,  33, 109, 127, 127, 127, 115,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
      0,   0,   0,   0,   0,  33, 108, 127, 127, 127, 115,  43,   0,   0,   0,   0,   0,   0,   0,   0,   1,  52,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
      0,   0,   0,   0,   0,   0,  32, 108, 127, 127, 127, 115,  44,   0,   0,   0,   0,   0,   0,   1,  50, 119,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
      0,   0,   0,   0,   0,   0,   0,  32, 108, 127, 127, 127, 116,  47,   1,   0,   0,   0,   1,  51, 118, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  31, 107, 127, 127, 127, 119,  52,   2,   0,   2,  51, 119, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 107, 127, 127, 127, 119,  52,   5,  51, 119, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 106, 127, 127, 127, 119,  83, 118, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
      9,  15,  15,  14,   4,   0,   0,   0,   0,   0,   0,  30, 106, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     71, 109, 109, 105,  29,   0,   0,   0,   0,   0,   0,   0,  29, 104, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     83, 127, 127, 123,  34,   0,   0,   0,   0,   0,   0,   0,   1,  71, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   2,  54, 119, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   2,  55, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   2,  56, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   2,  56, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   4,  57, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  74,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   9,  49,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  55,  72,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  81,  82,  63,   8,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  35,   1,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 108,  32,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  31,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  31,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 106,  30,   0,   0,   0,   0,   0,   0,   0,  27, 119, 127, 127,  73,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127,  77,   3,   0,   0,   0,   0,   0,   0,   0,  28, 121, 127, 127,  74,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 121,  62,   4,   0,   0,   0,   0,   0,   0,  17,  76,  81,  81,  46,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 124, 127, 127, 127, 123,  62,   4,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 105,  48,  98, 127, 127, 127, 123,  63,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 127, 105,  28,   0,  22,  99, 127, 127, 127, 123,  63,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127, 104,  28,   0,   0,   0,  22,  98, 127, 127, 127, 123,  64,   4,   0,   0,   0,   0,   0,   0,   0,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 104,  27,   0,   0,   0,   0,   0,  22,  98, 127, 127, 127, 123,  64,   4,   0,   0,   0,   0,   0,   0,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 105,  27,   0,   0,   0,   0,   0,   0,   0,  21,  98, 127, 127, 127, 123,  65,   4,   0,   0,   0,   0,   0,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21,  97, 127, 127, 127, 123,  65,   5,   0,   0,   0,   0,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  97, 127, 127, 127, 124,  66,   5,   0,   0,   0,   0, 
     82, 127, 127, 122,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  96, 127, 127, 127, 124,  67,   5,   0,   0,   0, 
     82, 127, 127, 122,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  94, 127, 127, 127, 124,  67,   5,   0,   0, 
     82, 127, 127, 124,  74,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  54,  74, 122, 127, 127, 127, 124,  68,   5,   0, 
     82, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  48,   0, 
     80, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  74,   0, 
     42, 113, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 124, 113,  39,   0, 
      2,  25,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  24,   1,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};