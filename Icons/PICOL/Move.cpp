#include <PICOL.h>

namespace PICOL {
  const uint8_t Move[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  33,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  53, 117,  69,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  53, 120, 127, 124,  69,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  52, 120, 127, 127, 127, 124,  68,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  51, 119, 127, 127, 127, 127, 127, 124,  67,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  50, 119, 127, 127, 127, 127, 127, 127, 127, 124,  66,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  49, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  65,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  49, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  65,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42, 112, 122, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 122, 118,  57,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  22,  30,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  30,  25,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  11,  24,  30,  26,  14,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  44,  54,   0,   0,   0,   0,   0,   0,   0,   0,   1,  27,  73, 105, 118, 121, 119, 109,  81,  36,   3,   0,   0,   0,   0,   0,   0,   0,   0,  40,  57,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  41, 116,  67,   0,   0,   0,   0,   0,   0,   0,   6,  61, 116, 127, 127, 127, 127, 127, 127, 127, 121,  73,  12,   0,   0,   0,   0,   0,   0,   0,  46, 120,  57,   2,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  41, 114, 127,  66,   0,   0,   0,   0,   0,   0,   5,  71, 125, 127, 127, 120, 102,  92,  99, 117, 127, 127, 127,  86,  11,   0,   0,   0,   0,   0,   0,  46, 127, 121,  56,   2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  40, 114, 127, 127,  66,   0,   0,   0,   0,   0,   0,  53, 124, 127, 125,  85,  32,   9,   4,   7,  25,  75, 121, 127, 127,  70,   2,   0,   0,   0,   0,   0,  46, 126, 127, 121,  55,   2,   0,   0,   0,   0, 
      0,   0,   0,  39, 113, 127, 127, 127,  66,   0,   0,   0,   0,   0,  17, 108, 127, 126,  71,   7,   0,   0,   0,   0,   0,   3,  55, 122, 127, 118,  31,   0,   0,   0,   0,   0,  46, 126, 127, 127, 121,  54,   2,   0,   0,   0, 
      0,   0,  38, 113, 127, 127, 127, 127,  66,   0,   0,   0,   0,   0,  54, 127, 127,  94,  10,   0,   0,   0,   0,   0,   0,   0,   3,  78, 127, 127,  73,   0,   0,   0,   0,   0,  46, 126, 127, 127, 127, 120,  53,   2,   0,   0, 
      0,  37, 113, 127, 127, 127, 127, 127,  66,   0,   0,   0,   0,   2,  85, 127, 126,  47,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 119, 127, 101,   8,   0,   0,   0,   0,  46, 126, 127, 127, 127, 127, 120,  53,   1,   0, 
     43, 111, 127, 127, 127, 127, 127, 127,  66,   0,   0,   0,   0,   8, 101, 127, 117,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10, 104, 127, 114,  18,   0,   0,   0,   0,  46, 126, 127, 127, 127, 127, 127, 119,  52,   2, 
     97, 127, 127, 127, 127, 127, 127, 127,  66,   0,   0,   0,   0,  10, 104, 127, 113,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  98, 127, 116,  21,   0,   0,   0,   0,  46, 126, 127, 127, 127, 127, 127, 127, 100,  15, 
     26,  99, 127, 127, 127, 127, 127, 127,  66,   0,   0,   0,   0,   7,  99, 127, 118,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 107, 127, 112,  16,   0,   0,   0,   0,  46, 126, 127, 127, 127, 127, 127, 110,  34,   0, 
      0,  23, 101, 127, 127, 127, 127, 127,  66,   0,   0,   0,   0,   1,  80, 127, 127,  56,   0,   0,   0,   0,   0,   0,   0,   0,   0,  37, 122, 127,  97,   6,   0,   0,   0,   0,  46, 126, 127, 127, 127, 127, 110,  34,   0,   0, 
      0,   0,  24, 101, 127, 127, 127, 127,  66,   0,   0,   0,   0,   0,  46, 125, 127, 104,  17,   0,   0,   0,   0,   0,   0,   0,   8,  89, 127, 127,  65,   0,   0,   0,   0,   0,  46, 126, 127, 127, 127, 111,  35,   0,   0,   0, 
      0,   0,   0,  24, 102, 127, 127, 127,  66,   0,   0,   0,   0,   0,  12, 100, 127, 127,  87,  16,   0,   0,   0,   0,   0,   9,  73, 125, 127, 112,  22,   0,   0,   0,   0,   0,  46, 126, 127, 127, 111,  36,   0,   0,   0,   0, 
      0,   0,   0,   0,  25, 102, 127, 127,  66,   0,   0,   0,   0,   0,   0,  40, 118, 127, 127, 102,  52,  21,  12,  18,  43,  93, 125, 127, 124,  56,   0,   0,   0,   0,   0,   0,  46, 126, 127, 112,  37,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  25, 103, 127,  66,   0,   0,   0,   0,   0,   0,   1,  54, 119, 127, 127, 126, 116, 109, 114, 124, 127, 127, 124,  69,   5,   0,   0,   0,   0,   0,   0,  46, 127, 113,  37,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  26, 105,  67,   0,   0,   0,   0,   0,   0,   0,   2,  42, 103, 126, 127, 127, 127, 127, 127, 127, 110,  54,   5,   0,   0,   0,   0,   0,   0,   0,  46, 112,  38,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  28,  44,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  53,  87, 105, 109, 106,  92,  60,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,  38,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  10,  14,  12,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   1,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  35,  54,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  54,  42,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 116,  44,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117,  45,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117,  46,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 110, 127, 127, 127, 127, 127, 127, 127, 117,  47,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 110, 127, 127, 127, 127, 127, 118,  48,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35, 111, 127, 127, 127, 118,  48,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 111, 127, 118,  49,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  37, 104,  51,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  14,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};