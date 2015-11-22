#include <PICOL.h>

namespace PICOL {
  const uint8_t Baseball[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  23,  38,  53,  59,  62,  60,  55,  41,  25,  11,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  41,  73,  99, 114, 122, 125, 126, 127, 126, 126, 123, 116, 102,  78,  47,  16,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  20,  65, 105, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 109,  73,  27,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 112, 127, 127, 127, 127, 120, 106,  89,  75,  66,  62,  65,  72,  86, 103, 118, 126, 127, 127, 127, 117,  75,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   1,  37, 100, 126, 127, 127, 123,  97,  60,  29,  11,   3,   0,   0,   0,   0,   0,   2,   9,  25,  54,  91, 120, 127, 127, 127, 108,  49,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   5,  59, 117, 127, 127, 123,  90,  40,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  32,  81, 120, 127, 127, 122,  73,  10,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   8,  72, 124, 127, 127, 105,  46,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  36,  96, 126, 127, 126,  85,  14,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7,  76, 126, 127, 127,  92,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  78, 127, 127, 127,  90,  14,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,  66, 125, 127, 127, 127,  93,   8,   4,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   5,   2,  75, 127, 127, 127, 127,  83,   8,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  48, 122, 127, 124, 121, 127, 124,  73,  86,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  87,  68, 117, 127, 123, 122, 127, 126,  65,   2,   0,   0,   0,   0, 
      0,   0,   0,  25, 110, 127, 127,  74,  60, 126, 127, 127, 127,  92,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  75, 127, 127, 127, 127,  74,  59, 123, 127, 119,  40,   0,   0,   0,   0, 
      0,   0,   5,  83, 127, 127,  93,  23,  69, 125, 127, 127, 127, 105,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  92, 126, 127, 127, 127,  84,  23,  77, 127, 127,  99,  12,   0,   0,   0, 
      0,   0,  41, 122, 127, 115,  28,  33, 120, 127, 127, 127,  98,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  83, 127, 127, 127, 126,  50,  16, 104, 127, 127,  59,   0,   0,   0, 
      0,   6,  92, 127, 127,  66,   0,   4,  84, 124, 125, 127, 104,  49,  52,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  44,  50,  92, 127, 126, 123,  99,  12,   0,  47, 124, 127, 107,  16,   0,   0, 
      0,  36, 122, 127, 107,  17,   0,   0,  27,  78, 116, 127, 127, 127, 112,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  99, 127, 126, 127, 121,  83,  39,   0,   0,   7,  93, 127, 127,  56,   0,   0, 
      1,  75, 127, 127,  65,   0,   0,   0,  12, 103, 127, 127, 127, 127, 124,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 117, 127, 127, 127, 127, 114,  24,   0,   0,   0,  46, 125, 127,  94,   6,   0, 
     16, 107, 127, 117,  26,   0,   0,   0,   2,  86, 127, 127, 127, 108,  56,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  50,  98, 127, 127, 127, 102,  10,   0,   0,   0,  13, 105, 127, 119,  28,   0, 
     42, 122, 127,  92,   5,   0,   0,   0,   0,  46,  96, 124, 127,  97,  38,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  36,  83, 127, 127, 101,  61,   1,   0,   0,   0,   0,  73, 127, 127,  56,   0, 
     71, 127, 127,  62,   0,   0,   0,   0,   0,  39, 111, 126, 127, 126, 127,  66,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46, 124, 126, 127, 127, 115,  56,   0,   0,   0,   0,   0,  44, 125, 127,  82,   2, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,  41, 125, 127, 127, 127, 127,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 127, 127, 127, 127, 127,  61,   0,   0,   0,   0,   0,  22, 116, 127, 100,   9, 
    111, 127, 117,  23,   0,   0,   0,   0,   0,  31, 106, 122, 127, 123,  89,  47,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35,  83, 118, 127, 124, 111,  47,   0,   0,   0,   0,   0,  11, 105, 127, 112,  19, 
    121, 127, 109,  14,   0,   0,   0,   0,   0,   9,  37, 104, 127, 119,  42,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  30, 109, 127, 114,  45,  13,   0,   0,   0,   0,   0,   4,  93, 127, 117,  29, 
    126, 127, 105,  10,   0,   0,   0,   0,   0,  25, 108, 124, 127, 126, 119,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47, 116, 125, 127, 125, 115,  39,   0,   0,   0,   0,   0,   2,  87, 127, 120,  33, 
    127, 127, 102,   8,   0,   0,   0,   0,   0,  28, 120, 127, 127, 127, 127,  71,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  53, 127, 127, 127, 127, 127,  44,   0,   0,   0,   0,   0,   2,  84, 127, 121,  36, 
    125, 127, 105,  11,   0,   0,   0,   0,   0,  21,  92, 119, 127, 125, 105,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 100, 122, 127, 123,  99,  33,   0,   0,   0,   0,   0,   2,  88, 127, 120,  32, 
    120, 127, 110,  14,   0,   0,   0,   0,   0,   9,  39, 104, 127, 118,  34,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  22, 107, 127, 114,  47,  15,   0,   0,   0,   0,   0,   5,  95, 127, 117,  28, 
    109, 127, 119,  26,   0,   0,   0,   0,   0,  34, 118, 126, 127, 125, 105,  59,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  44, 101, 122, 127, 126, 122,  53,   0,   0,   0,   0,   0,  12, 107, 127, 110,  17, 
     91, 127, 125,  42,   0,   0,   0,   0,   0,  43, 126, 127, 127, 127, 127,  73,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 127, 127, 127, 127, 127,  63,   0,   0,   0,   0,   0,  25, 118, 127,  98,   8, 
     66, 127, 127,  68,   0,   0,   0,   0,   0,  37, 101, 125, 127, 123, 118,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42, 116, 122, 127, 127, 107,  51,   0,   0,   0,   0,   0,  48, 126, 127,  77,   0, 
     36, 120, 127,  98,   7,   0,   0,   0,   0,  56, 105, 125, 127,  92,  24,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  21,  76, 127, 127, 108,  70,   2,   0,   0,   0,   1,  80, 127, 127,  51,   0, 
     13, 102, 127, 120,  32,   0,   0,   0,   4,  92, 127, 127, 127, 115,  77,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  69, 109, 127, 127, 127, 108,  14,   0,   0,   0,  17, 110, 127, 116,  23,   0, 
      0,  68, 127, 127,  75,   1,   0,   0,  13,  99, 126, 127, 127, 127, 123,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20, 114, 127, 127, 127, 127, 109,  26,   0,   0,   0,  55, 127, 127,  87,   3,   0, 
      0,  29, 118, 127, 114,  24,   0,   0,  37,  83, 115, 127, 125, 121, 107,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  93, 122, 123, 127, 122,  86,  49,   0,   0,  12, 101, 127, 125,  46,   0,   0, 
      0,   3,  82, 127, 127,  77,   2,   9,  95, 127, 127, 127,  98,  30,  34,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30,  30,  83, 127, 127, 127, 108,  19,   0,  59, 126, 127,  99,  10,   0,   0, 
      0,   0,  32, 118, 127, 120,  40,  35, 120, 127, 127, 127, 104,  32,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23,  92, 127, 127, 127, 126,  52,  25, 112, 127, 124,  49,   0,   0,   0, 
      0,   0,   1,  72, 127, 127, 104,  26,  57, 125, 127, 127, 127, 110,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  98, 127, 127, 127, 127,  74,  20,  90, 127, 127,  89,   7,   0,   0,   0, 
      0,   0,   0,  16, 101, 127, 127,  89,  74, 127, 127, 124, 127,  79,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  62, 126, 124, 127, 127,  86,  76, 126, 127, 113,  29,   0,   0,   0,   0, 
      0,   0,   0,   0,  35, 116, 127, 126, 125, 127, 120,  55,  66,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  67,  49, 112, 127, 126, 126, 127, 122,  51,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  52, 121, 127, 127, 127,  85,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,  67, 127, 127, 127, 125,  68,   3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   2,  58, 122, 127, 127, 102,  32,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23,  91, 127, 127, 125,  75,   7,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   3,  54, 119, 127, 127, 116,  66,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  55, 110, 127, 127, 123,  70,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,  41, 108, 127, 127, 126, 106,  59,  19,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  15,  51,  99, 125, 127, 127, 115,  54,   4,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  83, 122, 127, 127, 126, 112,  81,  49,  25,  11,   5,   2,   1,   2,   4,  10,  22,  44,  75, 108, 125, 127, 127, 125,  93,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  44,  97, 124, 127, 127, 127, 126, 118, 106,  95,  87,  84,  86,  93, 104, 116, 125, 127, 127, 127, 125, 105,  55,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  45,  88, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  94,  52,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  23,  52,  81, 101, 113, 119, 123, 124, 123, 120, 114, 103,  85,  57,  29,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   8,  17,  26,  31,  36,  32,  27,  19,   9,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};