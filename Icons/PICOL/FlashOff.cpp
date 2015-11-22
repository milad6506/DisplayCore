#include <PICOL.h>

namespace PICOL {
  const uint8_t FlashOff[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  23,  38,  53,  59,  62,  60,  55,  41,  26,  11,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  41,  73,  99, 114, 122, 125, 126, 127, 126, 126, 123, 116, 102,  79,  47,  16,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  20,  65, 105, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 110,  75,  28,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 112, 127, 127, 127, 127, 121, 106,  90,  75,  66,  62,  65,  73,  87, 103, 119, 127, 127, 127, 127, 117,  75,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   1,  38, 101, 126, 127, 127, 123,  98,  62,  30,  12,   3,   0,   0,   0,   0,   0,   2,   9,  26,  54,  92, 119, 127, 127, 127, 109,  49,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   5,  60, 118, 127, 127, 123,  90,  40,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  31,  80, 119, 127, 127, 122,  73,  11,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   8,  73, 124, 127, 127, 105,  46,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  35,  95, 126, 127, 126,  87,  15,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7,  77, 126, 127, 125,  83,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  69, 121, 127, 127,  91,  14,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,  68, 125, 127, 127, 115,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  53, 118, 127, 127,  84,   9,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  49, 122, 127, 127, 127, 127,  96,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27,  15,   0,   0,   0,   0,   0,   0,   0,   0,   1,  48, 119, 127, 126,  67,   2,   0,   0,   0,   0, 
      0,   0,   0,  26, 111, 127, 126,  93, 114, 127, 127,  95,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 112,  91,  15,   0,   0,   0,   0,   0,   0,   0,   0,   1,  57, 123, 127, 120,  41,   0,   0,   0,   0, 
      0,   0,   5,  84, 127, 127,  93,  12,  42, 115, 127, 127,  95,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35, 111, 127, 127,  70,   1,   0,   0,   0,   0,   0,   0,   0,   0,   4,  76, 127, 127, 100,  13,   0,   0,   0, 
      0,   0,  42, 122, 127, 114,  29,   0,   0,  43, 116, 127, 127,  94,  18,   0,   0,   0,   0,   0,   0,   0,  34, 111, 127, 127, 102,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16, 103, 127, 127,  61,   0,   0,   0, 
      0,   7,  92, 127, 127,  65,   0,   0,   0,   0,  44, 116, 127, 127,  90,   8,   0,   0,   0,   0,   0,  34, 110, 127, 127, 102,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46, 123, 127, 107,  16,   0,   0, 
      0,  37, 122, 127, 107,  17,   0,   0,   0,   0,   0,  45, 117, 124,  66,   4,   0,   0,   0,   0,  33, 110, 127, 127, 103,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  92, 127, 127,  56,   0,   0, 
      1,  76, 127, 127,  66,   0,   0,   0,   0,   0,   0,   0,  45,  61,   5,   0,   0,   0,   0,  32, 109, 127, 127, 104,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46, 125, 127,  95,   6,   0, 
     17, 108, 127, 117,  25,   0,   0,   0,   0,   0,   0,   0,   1,   1,   0,   0,   0,   0,  32, 108, 127, 127, 104,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 105, 127, 119,  28,   0, 
     42, 122, 127,  93,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 108, 127, 127, 105,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  72, 127, 127,  56,   0, 
     71, 127, 127,  63,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 107, 127, 127, 105,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  44, 125, 127,  82,   2, 
     94, 127, 124,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 107, 127, 127, 104,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22, 116, 127, 100,   9, 
    111, 127, 117,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  29, 106, 127, 127, 126,  87,  58,  59,  60,  60,  60,  60,  60,  60,  60,  60,  59,  61,  45,   4,   0,   0,   0,   0,   0,   0,   0,  11, 105, 127, 112,  19, 
    121, 127, 109,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 106, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  39,   0,   0,   0,   0,   0,   0,   0,   0,   4,  93, 127, 117,  29, 
    126, 127, 105,  10,   0,   0,   0,   0,   0,   0,   0,   0,  28, 106, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  87, 127, 120,  33, 
    127, 127, 102,   8,   0,   0,   0,   0,   0,   0,   0,   1,  35,  57,  55,  55,  55,  55,  55,  55,  55,  55,  55,  55,  54,  76, 123, 127, 127, 113,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  84, 127, 121,  36, 
    125, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19,  96, 127, 127, 114,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  88, 127, 120,  32, 
    120, 127, 111,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  97, 127, 127, 114,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  96, 127, 117,  28, 
    109, 127, 119,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  34,   1,   0,   0,   0,  19,  96, 127, 127, 114,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12, 107, 127, 110,  17, 
     91, 127, 125,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 105,  42,   0,   0,  19,  96, 127, 127, 115,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 118, 127,  98,   8, 
     66, 127, 127,  68,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 118, 115,  40,  18,  95, 127, 127, 115,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 126, 127,  77,   0, 
     36, 120, 127,  97,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 118, 127, 114, 104, 127, 127, 116,  43,   0,   0,   0,   0,   3,  34,  11,   0,   0,   0,   0,   0,   0,   0,   0,   1,  81, 127, 127,  51,   0, 
     13, 103, 127, 120,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 118, 127, 127, 127, 127, 115,  44,   0,   0,   0,   0,   2,  54, 119,  81,  10,   0,   0,   0,   0,   0,   0,   0,  18, 111, 127, 116,  23,   0, 
      0,  69, 127, 127,  75,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 118, 127, 127, 127, 127,  70,   1,   0,   0,   0,   0,  25, 113, 127, 126,  79,   9,   0,   0,   0,   0,   0,   0,  55, 127, 127,  88,   3,   0, 
      0,  30, 118, 127, 113,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 118, 127, 127, 127, 127, 112,  38,   0,   0,   0,   0,   4,  60, 122, 127, 126,  79,   9,   0,   0,   0,   0,  12, 101, 127, 125,  47,   0,   0, 
      0,   3,  83, 127, 127,  76,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 118, 127, 127, 127, 127, 127, 113,  39,   0,   0,   0,   0,   3,  61, 122, 127, 126,  78,   8,   0,   0,   0,  58, 126, 127, 100,  10,   0,   0, 
      0,   0,  33, 118, 127, 120,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19,  91,  99,  99,  99,  99,  99, 100,  83,  17,   0,   0,   0,   0,   3,  61, 123, 127, 126,  77,   8,   0,  26, 112, 127, 125,  50,   0,   0,   0, 
      0,   0,   2,  73, 127, 127, 104,  19,   0,   0,   0,   0,   0,   0,   0,   0,   1,   6,   7,   7,   7,   7,   7,   7,   7,   3,   0,   0,   0,   0,   0,   3,  62, 123, 127, 126,  75,  19,  90, 127, 127,  89,   7,   0,   0,   0, 
      0,   0,   0,  17, 102, 127, 127,  88,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  63, 123, 127, 124, 107, 125, 127, 113,  29,   0,   0,   0,   0, 
      0,   0,   0,   0,  36, 116, 127, 127,  80,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  63, 123, 127, 127, 127, 123,  53,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  53, 121, 127, 126,  84,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 102, 127, 127, 125,  69,   4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   2,  59, 122, 127, 127,  99,  32,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24,  89, 125, 127, 125,  75,   7,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   3,  56, 119, 127, 127, 116,  66,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  55, 111, 127, 127, 123,  70,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,  41, 108, 127, 127, 126, 106,  59,  19,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  14,  51,  99, 125, 127, 127, 116,  55,   4,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  84, 123, 127, 127, 126, 113,  82,  50,  25,  12,   5,   3,   1,   2,   4,  10,  22,  44,  75, 107, 125, 127, 127, 125,  94,  32,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  45,  98, 124, 127, 127, 127, 126, 118, 107,  95,  88,  84,  86,  93, 105, 117, 125, 127, 127, 127, 126, 105,  55,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  45,  88, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  94,  53,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  23,  52,  81, 101, 113, 119, 123, 124, 123, 120, 114, 103,  85,  57,  29,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   8,  17,  26,  31,  36,  32,  27,  19,   9,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};