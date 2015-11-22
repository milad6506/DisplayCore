#include <PICOL.h>

namespace PICOL {
  const uint8_t CdEject[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  23,  38,  53,  59,  62,  60,  55,  41,  26,  11,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  41,  73,  99, 114, 122, 125, 126, 127, 126, 126, 123, 116, 102,  79,  47,  16,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  20,  65, 105, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 110,  75,  28,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 112, 127, 127, 127, 127, 121, 106,  90,  75,  67,  62,  65,  73,  87, 103, 119, 127, 127, 127, 127, 117,  75,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   1,  38, 101, 126, 127, 127, 122,  98,  61,  30,  12,   3,   0,   0,   0,   0,   0,   2,   9,  26,  54,  92, 119, 127, 127, 127, 109,  49,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   5,  60, 118, 127, 127, 123,  89,  39,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  31,  80, 119, 127, 127, 122,  73,  11,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   8,  73, 124, 127, 127, 105,  46,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  35,  95, 126, 127, 126,  87,  15,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7,  77, 126, 127, 125,  83,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  69, 121, 127, 127,  91,  14,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,  68, 125, 127, 123,  68,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  53, 118, 127, 127,  84,   9,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  49, 122, 127, 124,  64,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  48, 119, 127, 126,  67,   2,   0,   0,   0,   0, 
      0,   0,   0,  26, 111, 127, 127,  73,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  57, 123, 127, 120,  41,   0,   0,   0,   0, 
      0,   0,   5,  84, 127, 127,  93,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  76, 127, 127, 100,  13,   0,   0,   0, 
      0,   0,  42, 122, 127, 114,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16, 103, 127, 127,  61,   0,   0,   0, 
      0,   7,  92, 127, 127,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46, 123, 127, 107,  16,   0,   0, 
      0,  37, 122, 127, 108,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  11,  24,  30,  24,  13,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  92, 127, 127,  56,   0,   0, 
      1,  76, 127, 127,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  27,  73, 105, 118, 121, 119, 107,  80,  34,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46, 125, 127,  95,   6,   0, 
     17, 108, 127, 117,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  61, 116, 127, 127, 127, 127, 127, 127, 127, 120,  72,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 105, 127, 119,  28,   0, 
     42, 122, 127,  92,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  71, 125, 127, 127, 120, 102,  92,  98, 117, 127, 127, 127,  83,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  72, 127, 127,  56,   0, 
     71, 127, 127,  63,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53, 124, 127, 125,  85,  31,   9,   4,   7,  25,  75, 122, 127, 127,  67,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  44, 125, 127,  82,   2, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17, 108, 127, 126,  71,   6,   0,   0,   0,   0,   0,   3,  58, 123, 127, 116,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22, 116, 127, 100,   9, 
    111, 127, 118,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 127, 127,  94,  10,   0,   4,  36,  59,  43,   8,   0,   4,  80, 127, 127,  85,  52,  59,  55,  42,  24,   6,   0,   0,   0,   0,  11, 105, 127, 112,  19, 
    121, 127, 109,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  85, 127, 126,  47,   0,   2,  65, 122, 127, 125,  80,   7,  15,  75, 127, 127, 127, 127, 127, 127, 125, 117,  96,  56,  15,   0,   0,   4,  93, 127, 117,  29, 
    126, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 101, 127, 117,  23,   0,  24, 116, 127, 127, 127, 123,  80, 105, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 105,  47,   4,   2,  87, 127, 120,  33, 
    127, 127, 102,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10, 104, 127, 112,  16,   0,  35, 123, 127, 127, 127, 127, 127, 127, 127, 124, 105,  81,  64,  58,  65,  82, 106, 124, 127, 127, 123,  72,  11,  84, 127, 122,  36, 
    125, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  98, 127, 118,  24,   0,  19, 111, 127, 127, 127, 127, 127, 125,  96,  45,  12,   1,   0,   0,   0,   1,  13,  47,  98, 126, 127, 126,  81,  96, 127, 120,  33, 
    120, 127, 111,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  78, 127, 127,  55,   0,   0,  48, 113, 127, 127, 127, 121,  65,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  70, 122, 127, 125, 124, 127, 117,  27, 
    109, 127, 119,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  45, 125, 127, 104,  18,   0,   0,  58, 127, 127, 122,  55,   2,   0,   0,   0,   0,  16,  58,  13,   0,   0,   0,   0,   3,  60, 123, 127, 127, 127, 110,  17, 
     91, 127, 125,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  98, 127, 127,  90,  17,   9,  96, 127, 127,  70,   3,   0,   0,   0,   0,  14,  88, 127,  84,  11,   0,   0,   0,   0,   4,  75, 127, 127, 127,  96,   7, 
     66, 127, 127,  69,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38, 117, 127, 127, 103,  79, 123, 127, 104,  15,   0,   0,   0,   0,  13,  88, 127, 127, 127,  83,  11,   0,   0,   0,   0,  18, 107, 127, 127,  75,   0, 
     36, 120, 127,  97,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  52, 118, 127, 127, 127, 127, 127,  57,   0,   0,   0,   0,  13,  87, 127, 127, 127, 127, 127,  82,  11,   0,   0,   0,   0,  62, 127, 127,  76,   0, 
     13, 103, 127, 120,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  40, 101, 126, 127, 127, 115,  22,   0,   0,   0,  13,  87, 127, 127, 127, 127, 127, 127, 127,  82,  11,   0,   0,   0,  26, 118, 127, 101,  10, 
      0,  69, 127, 127,  75,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  61, 124, 127,  97,   6,   0,   0,   6,  71, 113, 113, 113, 113, 113, 113, 113, 113, 113,  66,   4,   0,   0,   9, 102, 127, 114,  23, 
      0,  30, 118, 127, 113,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 122, 127,  84,   1,   0,   0,   3,  17,  17,  17,  17,  17,  17,  17,  17,  17,  17,  16,   3,   0,   0,   3,  89, 127, 120,  33, 
      0,   3,  83, 127, 127,  76,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 124, 127,  79,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  85, 127, 121,  35, 
      0,   0,  33, 118, 127, 120,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 123, 127,  87,   2,   0,   0,   8,  33,  35,  35,  35,  35,  35,  35,  35,  35,  35,  33,   8,   0,   0,   3,  91, 127, 119,  31, 
      0,   0,   2,  73, 127, 127, 104,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22, 116, 127, 101,   8,   0,   0,  31, 118, 123, 123, 123, 123, 123, 123, 123, 123, 123, 118,  30,   0,   0,  11, 106, 127, 112,  20, 
      0,   0,   0,  17, 102, 127, 127,  88,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9, 102, 127, 119,  28,   0,   0,  32, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  31,   0,   0,  33, 121, 127,  96,   7, 
      0,   0,   0,   0,  36, 116, 127, 127,  80,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  73, 127, 127,  67,   0,   0,  20,  78,  82,  82,  82,  82,  82,  82,  82,  82,  82,  78,  20,   0,   1,  74, 127, 127,  67,   0, 
      0,   0,   0,   0,   1,  53, 121, 127, 126,  85,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 121, 127, 112,  24,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,  28, 115, 127, 118,  29,   0, 
      0,   0,   0,   0,   0,   2,  59, 122, 127, 127,  99,  32,   1,   0,   0,   0,   0,   0,   0,   0,   5,  86, 127, 127,  86,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  91, 127, 127,  81,   3,   0, 
      0,   0,   0,   0,   0,   0,   3,  56, 119, 127, 127, 116,  66,  15,   0,   0,   0,   0,   0,   0,   0,  30, 115, 127, 126,  76,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  80, 127, 127, 111,  25,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,  41, 108, 127, 127, 126, 106,  59,  19,   2,   0,   0,   0,   0,   0,  54, 123, 127, 126,  87,  24,   1,   0,   0,   0,   0,   0,   0,   0,   1,  26,  90, 126, 127, 121,  49,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  84, 123, 127, 127, 126, 113,  82,  50,  25,  12,   5,   2,   4,  66, 124, 127, 127, 113,  69,  28,   9,   3,   1,   3,  10,  31,  71, 114, 127, 127, 122,  60,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  45,  98, 124, 127, 127, 127, 126, 118, 107,  95,  88,  83,  91, 121, 127, 127, 127, 127, 119, 103,  89,  84,  89, 104, 120, 127, 127, 127, 114,  52,   3,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  45,  88, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  85,  28,   1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  23,  52,  81, 101, 113, 119, 123, 124, 123, 120, 114, 102,  82,  77, 102, 116, 123, 124, 123, 116, 102,  73,  33,   5,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   8,  17,  26,  31,  36,  33,  27,  19,   9,   1,   1,   9,  22,  31,  36,  31,  22,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
