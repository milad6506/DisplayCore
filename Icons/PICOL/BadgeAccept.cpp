#include <PICOL.h>

namespace PICOL {
  const uint8_t BadgeAccept[] = {
    45, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  15,  25,  33,  37,  37,  36,  30,  21,   9,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  37,  67,  92, 108, 117, 123, 126, 126, 125, 120, 113, 102,  78,  51,  21,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  60, 100, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 112,  81,  36,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  61, 108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  86,  31,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   1,  35,  97, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 116,  65,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   4,  55, 115, 127, 127, 127, 127, 127, 127, 127, 127, 126, 119, 112, 107, 107, 109, 116, 123, 127, 127, 127, 127, 127, 127, 127, 127, 125,  88,  21,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   6,  66, 122, 127, 127, 127, 127, 127, 127, 125, 107,  75,  47,  30,  18,  10,   9,  13,  24,  38,  62,  93, 118, 127, 127, 127, 127, 127, 127, 127,  99,  26,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   5,  67, 124, 127, 127, 127, 127, 127, 126,  99,  50,  15,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  30,  76, 117, 127, 127, 127, 127, 127, 127, 102,  24,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,  58, 123, 127, 127, 127, 127, 127, 112,  59,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  33,  91, 125, 127, 127, 127, 127, 127,  97,  18,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  39, 117, 127, 127, 127, 127, 127, 100,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  66, 122, 127, 127, 127, 127, 127,  80,   6,   0,   0,   0,   0, 
      0,   0,   0,  15, 102, 127, 127, 127, 127, 127,  91,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  55, 120, 127, 127, 127, 127, 123,  52,   0,   0,   0,   0, 
      0,   0,   2,  66, 127, 127, 127, 127, 127,  98,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  59, 123, 127, 127, 127, 127, 108,  20,   0,   0,   0, 
      0,   0,  24, 113, 127, 127, 127, 127, 111,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  18,   1,   0,   0,   0,   5,  77, 126, 127, 127, 127, 127,  66,   1,   0,   0, 
      0,   1,  70, 127, 127, 127, 127, 124,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  56, 106,  43,   0,   0,   0,   0,  16, 101, 127, 127, 127, 127, 110,  20,   0,   0, 
      0,  15, 108, 127, 127, 127, 127,  91,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  55, 120, 127, 114,  43,   0,   0,   0,   0,  47, 123, 127, 127, 127, 126,  58,   0,   0, 
      0,  46, 125, 127, 127, 127, 122,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  55, 120, 127, 127, 127, 114,  43,   1,   0,   0,   8,  95, 127, 127, 127, 127,  95,   7,   0, 
      1,  78, 127, 127, 127, 127,  99,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  55, 120, 127, 127, 127, 127, 127, 114,  43,   2,   0,   0,  53, 125, 127, 127, 127, 116,  24,   0, 
     12, 101, 127, 127, 127, 127,  64,   0,   0,   0,   0,   0,   0,   0,  25,  27,   0,   0,   0,   0,   0,   0,   0,   2,  55, 120, 127, 127, 127, 127, 127, 127, 127, 108,  19,   0,   0,  21, 113, 127, 127, 127, 126,  48,   0, 
     26, 116, 127, 127, 127, 122,  36,   0,   0,   0,   0,   0,   0,  28, 104, 107,  32,   0,   0,   0,   0,   0,   2,  55, 120, 127, 127, 127, 127, 127, 127, 127, 121,  59,   4,   0,   0,   5,  92, 127, 127, 127, 127,  70,   0, 
     43, 123, 127, 127, 127, 112,  17,   0,   0,   0,   0,   0,  28, 104, 127, 127, 107,  32,   0,   0,   0,   2,  55, 120, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,  70, 127, 127, 127, 127,  87,   2, 
     56, 125, 127, 127, 127, 101,  10,   0,   0,   0,   0,  28, 104, 127, 127, 127, 127, 107,  32,   0,   2,  56, 120, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,  54, 127, 127, 127, 127,  96,   8, 
     62, 126, 127, 127, 127,  93,   6,   0,   0,   0,  29, 104, 127, 127, 127, 127, 127, 127, 107,  35,  55, 120, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,  45, 124, 127, 127, 127, 103,  14, 
     66, 126, 127, 127, 127,  88,   4,   0,   0,   2,  67, 127, 127, 127, 127, 127, 127, 127, 127, 115, 121, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,  42, 124, 127, 127, 127, 104,  15, 
     60, 125, 127, 127, 127,  95,   7,   0,   0,   0,  13,  83, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,  47, 125, 127, 127, 127, 101,  12, 
     54, 124, 127, 127, 127, 103,  11,   0,   0,   0,   0,  12,  83, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 127, 127, 127,  94,   7, 
     38, 122, 127, 127, 127, 115,  20,   0,   0,   0,   0,   0,  12,  83, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  74, 127, 127, 127, 127,  83,   1, 
     22, 113, 127, 127, 127, 124,  43,   0,   0,   0,   0,   0,   0,  12,  83, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  98, 127, 127, 127, 127,  66,   0, 
      9,  96, 127, 127, 127, 127,  73,   1,   0,   0,   0,   0,   0,   0,  12,  83, 126, 127, 127, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 117, 127, 127, 127, 125,  43,   0, 
      0,  70, 127, 127, 127, 127, 107,  15,   0,   0,   0,   0,   0,   0,   0,  12,  83, 126, 127, 127, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127, 127, 127, 113,  20,   0, 
      0,  37, 122, 127, 127, 127, 125,  55,   0,   0,   0,   0,   0,   0,   0,   0,  12,  83, 126, 127, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16, 106, 127, 127, 127, 127,  85,   4,   0, 
      0,  10, 100, 127, 127, 127, 127, 104,  15,   0,   0,   0,   0,   0,   0,   0,   0,  12,  83, 127, 121,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  62, 126, 127, 127, 127, 124,  47,   0,   0, 
      0,   0,  56, 125, 127, 127, 127, 126,  70,   2,   0,   0,   0,   0,   0,   0,   0,   0,  12,  78,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 112, 127, 127, 127, 127, 101,  12,   0,   0, 
      0,   0,  16, 105, 127, 127, 127, 127, 120,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  93, 127, 127, 127, 127, 125,  56,   0,   0,   0, 
      0,   0,   1,  51, 124, 127, 127, 127, 127, 111,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  80, 126, 127, 127, 127, 127,  96,  11,   0,   0,   0, 
      0,   0,   0,   7,  87, 127, 127, 127, 127, 127, 109,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  79, 126, 127, 127, 127, 127, 117,  37,   0,   0,   0,   0, 
      0,   0,   0,   0,  24, 107, 127, 127, 127, 127, 127, 114,  53,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,  90, 126, 127, 127, 127, 127, 125,  63,   2,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  39, 114, 127, 127, 127, 127, 127, 123,  83,  28,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  57, 110, 127, 127, 127, 127, 127, 126,  78,   8,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  48, 117, 127, 127, 127, 127, 127, 127, 115,  75,  35,  10,   0,   0,   0,   0,   0,   0,   0,   0,   4,  21,  55, 100, 125, 127, 127, 127, 127, 127, 127,  87,  12,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   2,  44, 113, 127, 127, 127, 127, 127, 127, 127, 121, 100,  74,  54,  37,  31,  29,  33,  46,  64,  89, 112, 126, 127, 127, 127, 127, 127, 127, 125,  80,  13,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  34, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 123, 121, 125, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  66,   9,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  74, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  99,  40,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  35,  86, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 106,  60,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  36,  77, 108, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 118,  93,  55,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  16,  42,  67,  87, 101, 111, 113, 115, 111, 107,  92,  77,  53,  27,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,   9,  12,  16,  20,  13,  11,   6,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
