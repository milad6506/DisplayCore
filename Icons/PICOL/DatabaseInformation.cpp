#include <PICOL.h>

namespace PICOL {
  const uint8_t DatabaseInformation[] = {
    45, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  13,  23,  32,  40,  49,  56,  61,  62,  62,  62,  62,  62,  57,  53,  44,  35,  26,  16,   8,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   9,  28,  52,  75,  93, 106, 114, 120, 123, 125, 126, 127, 127, 127, 127, 127, 127, 126, 125, 124, 121, 116, 109,  98,  82,  61,  38,  15,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,  27,  66, 100, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 109,  81,  41,   8,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  20,  76, 117, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  95,  39,   2,   0,   0,   0,   0,   0, 
      0,   0,  35, 106, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  64,   5,   0,   0,   0,   0, 
      0,  24, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  58,   1,   0,   0,   0, 
      3,  78, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 112,  20,   0,   0,   0, 
     12, 106, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  41,   0,   0,   0, 
     14, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 124, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122, 118, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 113,  39,  68, 107, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 116,  85,  39,  79, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  16,   0,  14,  42,  72,  97, 113, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 118, 105,  83,  54,  24,   3,   0,  75, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   6,  18,  33,  48,  62,  73,  83,  90,  94,  97, 101, 104, 104, 103,  98,  96,  92,  86,  77,  67,  54,  39,  24,  11,   2,   0,   0,   0,   0,  75, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   3,   5,   6,   7,   8,   8,   8,   6,   5,   4,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  75, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  75, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  75, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  75, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  75, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  31,  48,  58,  59,  52,  39,  19,   4,   0,   0,  75, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  29,  72, 106, 121, 127, 127, 127, 127, 124, 114,  89,  49,  11,  74, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  73, 117, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  98, 101, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 101, 127, 127, 127, 120,  98,  75,  62,  59,  68,  87, 110, 126, 127, 127, 127, 127, 126,  43,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33, 110, 127, 127, 120,  80,  32,   8,   0,   0,   0,   0,   2,  17,  53, 104, 127, 127, 127, 126,  42,   0,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21, 106, 127, 127, 109,  42,   3,   0,   0,   1,   3,   3,   2,   0,   0,   0,  16,  78, 125, 127, 127,  68,   2,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  83, 127, 127, 107,  29,   0,   0,   0,   0,  22,  86,  91,  62,   2,   0,   0,   0,   6,  70, 125, 127, 118,  35,   0,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 123, 127, 117,  37,   0,   0,   0,   0,   0,  32, 124, 127,  89,   3,   0,   0,   0,   0,   7,  83, 127, 127,  91,   7,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  88, 127, 127,  69,   1,   0,   0,   0,   0,   0,  29, 114, 119,  82,   2,   0,   0,   0,   0,   0,  23, 112, 127, 122,  37,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 117, 127, 113,  20,   0,   0,   0,   0,   0,   0,   6,  26,  27,  18,   0,   0,   0,   0,   0,   0,   1,  69, 127, 127,  75,   1, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50, 127, 127,  83,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 101,  10, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  71, 127, 127,  56,   0,   0,   0,   0,   0,   0,   0,   5,  19,  20,  13,   0,   0,   0,   0,   0,   0,   0,  11, 106, 127, 115,  24, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  83, 127, 125,  41,   0,   0,   0,   0,   0,   0,   0,  28, 109, 115,  79,   2,   0,   0,   0,   0,   0,   0,   4,  93, 127, 120,  33, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  86, 127, 124,  37,   0,   0,   0,   0,   0,   0,   0,  31, 122, 127,  88,   3,   0,   0,   0,   0,   0,   0,   4,  91, 127, 122,  37, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  80, 127, 126,  43,   0,   0,   0,   0,   0,   0,   0,  31, 122, 127,  88,   3,   0,   0,   0,   0,   0,   0,   5,  96, 127, 119,  31, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66, 127, 127,  61,   0,   0,   0,   0,   0,   0,   0,  31, 122, 127,  88,   3,   0,   0,   0,   0,   0,   0,  15, 110, 127, 112,  20, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  44, 125, 127,  90,   4,   0,   0,   0,   0,   0,   0,  31, 122, 127,  88,   3,   0,   0,   0,   0,   0,   0,  38, 123, 127,  96,   7, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 112, 127, 118,  30,   0,   0,   0,   0,   0,   0,  31, 122, 127,  88,   3,   0,   0,   0,   0,   0,   2,  80, 127, 127,  66,   0, 
     14, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  78, 127, 127,  83,   5,   0,   0,   0,   0,   0,  31, 122, 127,  88,   3,   0,   0,   0,   0,   0,  34, 118, 127, 118,  28,   0, 
     14, 109, 127, 113,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 117, 127, 123,  54,   0,   0,   0,   0,   0,  32, 124, 127,  89,   3,   0,   0,   0,   0,  16,  98, 127, 127,  78,   3,   0, 
     10, 103, 127, 123,  65,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  67, 126, 127, 117,  47,   1,   0,   0,   0,  17,  67,  70,  48,   1,   0,   0,   0,  16,  88, 127, 127, 110,  23,   0,   0, 
      1,  62, 126, 127, 126,  99,  55,  23,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  90, 127, 127, 119,  64,  12,   0,   0,   0,   0,   0,   0,   0,   0,   2,  33,  97, 127, 127, 120,  45,   0,   0,   0, 
      0,   9,  78, 125, 127, 127, 127, 116,  96,  73,  53,  37,  24,  17,  10,   6,   4,   3,   2,   1,   1,  19,  95, 127, 127, 126, 101,  55,  22,   7,   2,   1,   4,  13,  36,  79, 118, 127, 127, 119,  54,   2,   0,   0,   0, 
      0,   0,   6,  53, 103, 125, 127, 127, 127, 127, 127, 124, 118, 112, 106,  99,  93,  90,  85,  84,  84,  83,  98, 126, 127, 127, 127, 127, 115,  99,  87,  84,  92, 107, 123, 127, 127, 127, 109,  45,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,  12,  46,  82, 107, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  79,  23,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   2,  13,  31,  51,  70,  86,  97, 106, 112, 116, 119, 122, 123, 124, 125, 125, 124, 123, 123, 120, 117, 114, 111, 118, 123, 124, 122, 114,  98,  67,  28,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   6,  11,  17,  22,  26,  30,  31,  36,  39,  39,  37,  32,  31,  27,  23,  19,  15,  24,  33,  35,  29,  19,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
