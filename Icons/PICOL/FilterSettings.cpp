#include <PICOL.h>

namespace PICOL {
  const uint8_t FilterSettings[] = {
    45, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  49,  62,  62,  62,  62,  53,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 127, 127, 127, 108,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,   0,   9,   2,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  96, 121, 121, 121, 121, 103,  13,   0,   0,   0,   0,   0,   0,   0,  51,  56,   2,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  23,  30,  29,  29,  30,  25,   3,   0,   0,   0,   0,   0,   0,   0,  59, 121,  56,   2,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  57, 127, 121,  56,   2,   0,   0,   0,   0,   0, 
      2,  18,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  69, 127, 127, 121,  57,   2,   0,   0,   0,   0, 
     13,  99, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 121, 127, 127, 127, 121,  58,   4,   0,   0,   0, 
     14, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  19,   0,   0,   0, 
     11,  89, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 114, 127, 127, 127, 115,  43,   1,   0,   0,   0, 
      1,   7,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  62, 127, 127, 115,  42,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58, 127, 114,  41,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  38,  48,  48,  48,  48,  41,   5,   0,   0,   0,   0,   0,   0,   0,  59, 114,  41,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,   0,  45,  41,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38,  27,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  61, 104,  27,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 109,  25,  30,  48,  58,  60,  54,  40,  21,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60, 127, 104,  27,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 122, 109, 121, 127, 127, 127, 127, 125, 115,  91,  51,  11,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60, 127, 127, 104,  28,   0,   0,   0,   8, 101, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 100,  42,   3,   0,   0,   0,   0,   0, 
      9,  68,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80, 102, 127, 127, 127, 105,  28,   0,   0,   8, 101, 127, 127, 127, 127, 127, 126, 111,  92,  79,  77,  85, 102, 120, 127, 127, 127, 121,  67,   7,   0,   0,   0,   0, 
     14, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,  19,   0,   7, 100, 127, 127, 127, 126,  97,  50,  17,   4,   0,   0,   1,   9,  30,  73, 116, 127, 127, 125,  74,   6,   0,   0,   0, 
     14, 108, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127,  83,  11,   0,  22, 112, 127, 127, 119,  62,  10,   0,   0,   0,   3,   3,   2,   0,   0,   1,  30,  95, 127, 127, 125,  62,   2,   0,   0, 
      5,  38,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  83, 127, 127, 127,  82,  11,   0,   5,  82, 127, 127, 117,  46,   1,   0,   0,   0,  22,  86,  91,  62,   2,   0,   0,   0,  15,  88, 127, 127, 118,  35,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59, 127, 126,  81,  10,   0,   0,  40, 122, 127, 124,  56,   1,   0,  24,  45,   2,  30, 123, 127,  88,   0,  17,  49,   6,   0,  16, 100, 127, 127,  91,   7,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60, 127,  81,  10,   0,   0,   4,  88, 127, 127,  88,   6,   0,  25, 101, 122,  60,  58, 124, 127, 101,  36,  91, 124,  70,   7,   0,  38, 121, 127, 122,  37,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59,  81,  10,   0,   0,   0,  24, 117, 127, 121,  36,   0,   1,  67, 127, 127, 125, 124, 127, 127, 127, 122, 127, 127, 116,  28,   0,   4,  88, 127, 127,  74,   1, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  10,   0,   0,   0,   0,  51, 127, 127,  99,   8,   0,   0,  12,  86, 127, 127, 127, 127, 127, 127, 127, 127, 119,  50,   1,   0,   0,  48, 126, 127, 101,  10, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  71, 127, 127,  74,   0,   2,  17,  19,  64, 127, 127, 113,  60,  46,  88, 126, 127, 109,  32,  23,  11,   0,  24, 117, 127, 115,  23, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  83, 127, 127,  57,   0,  10,  98, 114, 121, 127, 125,  52,   0,   0,  12, 101, 127, 126, 119, 118,  55,   0,  13, 108, 127, 120,  33, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  86, 127, 127,  52,   0,  12, 111, 127, 127, 127, 121,  29,   0,   0,   0,  83, 127, 127, 127, 127,  61,   0,  10, 105, 127, 122,  37, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  81, 127, 127,  60,   0,   9,  84,  99, 113, 127, 126,  67,   4,   0,  24, 109, 127, 124, 102,  99,  46,   0,  15, 110, 127, 119,  31, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66, 127, 127,  80,   1,   0,   6,   6,  55, 126, 127, 122,  85,  72, 106, 127, 127, 105,  16,   6,   3,   0,  28, 120, 127, 112,  20, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  44, 125, 127, 106,  12,   0,   0,  20,  95, 127, 127, 127, 127, 127, 127, 127, 127, 122,  63,   5,   0,   0,  57, 127, 127,  96,   7, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 112, 127, 124,  47,   0,   1,  66, 127, 127, 120, 116, 127, 127, 124, 112, 126, 127, 118,  29,   0,   9,  97, 127, 127,  66,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  78, 127, 127,  99,  13,   0,  15,  88, 116,  46,  44, 123, 127,  94,  21,  80, 120,  59,   4,   0,  53, 124, 127, 118,  28,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 117, 127, 126,  73,   5,   0,  14,  31,   0,  31, 124, 127,  89,   1,  10,  36,   3,   0,  30, 112, 127, 127,  78,   3,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  67, 126, 127, 124,  67,   7,   0,   0,   0,  17,  67,  70,  48,   1,   0,   0,   0,  30, 104, 127, 127, 110,  23,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14, 107, 127, 127, 125,  84,  25,   1,   0,   0,   0,   0,   0,   0,   0,   8,  52, 112, 127, 127, 120,  45,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 127, 127, 127, 113,  74,  37,  17,   8,   7,  12,  25,  54,  96, 124, 127, 127, 119,  54,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 127, 127, 123, 112, 103, 101, 107, 118, 127, 127, 127, 127, 109,  45,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  79,  23,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  99, 125, 125, 125, 125, 116,  89, 106, 118, 123, 124, 122, 114,  98,  67,  28,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  30,  39,  38,  38,  39,  33,   6,  12,  24,  33,  35,  29,  19,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
