#include <PICOL.h>

namespace PICOL {
  const uint8_t Soccer[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  23,  38,  53,  59,  62,  60,  55,  41,  25,  11,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  41,  73,  99, 114, 122, 125, 126, 127, 126, 126, 123, 116, 102,  78,  47,  16,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  20,  65, 105, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 109,  73,  27,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 112, 127, 127, 127, 127, 121, 106,  90,  75,  67,  62,  65,  73,  87, 103, 118, 127, 127, 127, 127, 117,  75,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   1,  37, 100, 126, 127, 127, 122,  97,  60,  30,  11,   3,   0,   0,   0,   0,   0,   2,   9,  26,  54,  91, 119, 127, 127, 127, 108,  49,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   5,  59, 117, 127, 127, 123,  89,  39,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  31,  80, 119, 127, 127, 122,  73,  10,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   8,  72, 124, 127, 127, 105,  46,   6,   0,   0,   0,   0,   0,   0,   1,  26,  69,  35,   2,   0,   0,   0,   0,   0,   0,   2,  35,  95, 126, 127, 126,  85,  14,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7,  76, 126, 127, 125,  83,  18,   0,   0,   0,   0,   0,   0,   0,  12,  62, 114, 127, 119,  73,  19,   0,   0,   0,   0,   0,   0,   0,  11,  70, 122, 127, 127,  90,  14,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,  66, 125, 127, 123,  68,   7,   0,   0,   0,   0,   0,   0,   4,  41,  99, 126, 127, 127, 127, 127, 108,  53,   8,   0,   0,   0,   0,   0,   0,   3,  54, 118, 127, 127,  83,   8,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  48, 122, 127, 127,  93,   7,   0,   0,   0,   0,   0,   0,  23,  80, 121, 127, 127, 127, 127, 127, 127, 127, 125,  91,  33,   2,   0,   0,   0,   0,   0,   1,  75, 127, 127, 126,  65,   2,   0,   0,   0,   0, 
      0,   0,   0,  25, 110, 127, 127, 127, 107,  14,   0,   0,   0,   0,   0,  35, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  51,   0,   0,   0,   0,   0,   5,  92, 127, 127, 127, 119,  40,   0,   0,   0,   0, 
      0,   0,   5,  83, 127, 127, 127, 127, 124,  42,   0,   0,   0,   0,   0,  30, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  46,   0,   0,   0,   0,   0,  26, 117, 127, 127, 127, 127,  99,  12,   0,   0,   0, 
      0,   0,  41, 122, 127, 127, 127, 127, 127,  77,   1,   0,   0,   0,   0,   4,  89, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,  13,   0,   0,   0,   0,   0,  58, 127, 127, 127, 127, 127, 127,  59,   0,   0,   0, 
      0,   6,  92, 127, 127, 127, 127, 127, 127,  94,   5,   0,   0,   0,   0,   0,  48, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,  74, 127, 127, 127, 127, 127, 127, 107,  16,   0,   0, 
      0,  36, 122, 127, 127, 127, 127, 127, 126,  54,   0,   0,   0,   0,   0,   0,  15, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  28,   0,   0,   0,   0,   0,   0,  34, 120, 127, 127, 127, 127, 127, 127,  56,   0,   0, 
      1,  75, 127, 127, 127, 127, 127, 127, 103,  13,   0,   0,   0,   0,   0,   0,   0,  70, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   4,   0,   0,   0,   0,   0,   0,   4,  84, 127, 127, 127, 127, 127, 127,  94,   6,   0, 
     16, 107, 127, 127, 127, 127, 127, 126,  55,   0,   0,   0,   0,   0,   0,   0,   0,  30, 119, 127, 127, 127, 127, 127, 127, 127, 125,  47,   0,   0,   0,   0,   0,   0,   0,   0,  34, 120, 127, 127, 127, 127, 127, 119,  28,   0, 
     42, 122, 127, 127, 127, 127, 127, 103,  13,   0,   0,   0,   0,   0,   0,   0,   0,   5,  68,  88,  87,  87,  87,  87,  87,  88,  77,  12,   0,   0,   0,   0,   0,   0,   0,   0,   4,  85, 127, 127, 127, 127, 127, 127,  56,   0, 
     71, 127, 127, 127, 127, 127, 124,  55,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35, 118, 127, 127, 127, 127, 127,  82,   2, 
     94, 127, 127, 111,  89,  65,  39,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  33,  60,  85, 107, 125, 127, 100,   9, 
    111, 127, 119,  32,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  20, 107, 127, 112,  19, 
    121, 127, 109,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  95, 127, 117,  29, 
    126, 127, 105,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  87, 127, 120,  33, 
    127, 127, 101,   8,   0,   0,   0,   0,   0,   0,   0,   6,  18,  35,  57,  54,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  45,  61,  38,  20,   8,   1,   0,   0,   0,   0,   0,   0,   2,  84, 127, 121,  36, 
    125, 127, 105,  11,   0,   0,   0,   0,  22,  54,  76,  96, 113, 123, 127, 120,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23, 111, 127, 124, 115, 101,  81,  59,  30,   1,   0,   0,   0,   2,  87, 127, 120,  32, 
    120, 127, 110,  14,   0,   0,   0,   2,  84, 127, 127, 127, 127, 127, 127, 127,  95,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  78, 127, 127, 127, 127, 127, 127, 127, 101,   9,   0,   0,   0,   5,  95, 127, 117,  28, 
    109, 127, 118,  24,   0,   0,   0,  10, 104, 127, 127, 127, 127, 127, 127, 127, 126,  56,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38, 120, 127, 127, 127, 127, 127, 127, 127, 116,  22,   0,   0,   0,  12, 106, 127, 110,  17, 
     91, 127, 125,  42,   0,   0,   0,  23, 117, 127, 127, 127, 127, 127, 127, 127, 127, 109,  21,   0,   0,   0,   0,   0,   0,   0,  10,  95, 127, 127, 127, 127, 127, 127, 127, 127, 125,  40,   0,   0,   0,  25, 118, 127,  98,   8, 
     66, 127, 127,  68,   0,   0,   0,  41, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127,  75,   2,   0,   0,   0,   0,   0,   0,  56, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127,  61,   0,   0,   0,  48, 126, 127,  77,   0, 
     36, 120, 127,  96,   7,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  35,   0,   0,   0,   0,   0,  22, 110, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  83,   1,   0,   1,  79, 127, 127,  51,   0, 
     13, 102, 127, 120,  31,   0,   2,  84, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  69,   0,   0,   0,   0,   0,  51, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,  17, 109, 127, 116,  23,   0, 
      0,  68, 127, 127,  73,   0,   7,  99, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  92,  17,   0,   0,   0,   0,   0,   9,  78, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  19,   0,  53, 126, 127,  87,   3,   0, 
      0,  29, 118, 127, 113,  23,   0,  40, 100, 126, 127, 127, 127, 127, 127, 127, 127,  93,  17,   0,   0,   0,   0,   0,   0,   0,   9,  78, 126, 127, 127, 127, 127, 127, 127, 127, 108,  52,   4,  11, 100, 127, 125,  46,   0,   0, 
      0,   3,  82, 127, 127,  75,   2,   0,  12,  62, 114, 127, 127, 127, 127, 127,  94,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  79, 126, 127, 127, 127, 127, 119,  74,  19,   0,   0,  57, 126, 127,  99,  10,   0,   0, 
      0,   0,  32, 118, 127, 120,  39,   0,   0,   1,  26,  83, 122, 127, 127,  94,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  80, 126, 127, 125,  94,  35,   2,   0,   0,  24, 111, 127, 124,  49,   0,   0,   0, 
      0,   0,   1,  72, 127, 127, 103,  19,   0,   0,   0,   5,  44, 102,  94,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  81, 109,  56,   9,   0,   0,   0,  10,  89, 127, 127,  89,   7,   0,   0,   0, 
      0,   0,   0,  16, 101, 127, 127,  87,  11,   0,   0,   0,   0,  13,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  17,   0,   0,   0,   0,   5,  72, 126, 127, 113,  29,   0,   0,   0,   0, 
      0,   0,   0,   0,  35, 116, 127, 127,  80,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  65, 124, 127, 122,  51,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  52, 121, 127, 126,  85,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  71, 124, 127, 125,  68,   3,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   2,  58, 122, 127, 127,  99,  33,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  88, 126, 127, 125,  75,   7,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   3,  54, 119, 127, 127, 117,  66,  15,   0,   0,   0,   9,  55,  65,  65,  65,  65,  65,  65,  65,  60,  16,   0,   0,   0,  10,  54, 109, 127, 127, 123,  70,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,  41, 108, 127, 127, 126, 106,  60,  19,  10,  77, 126, 127, 127, 127, 127, 127, 127, 127, 127,  92,  17,  14,  51,  99, 125, 127, 127, 115,  54,   4,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  83, 122, 127, 127, 126, 112, 100, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 104, 107, 125, 127, 127, 125,  93,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  44,  97, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 105,  55,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  45,  88, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  94,  52,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  23,  52,  81, 101, 113, 119, 123, 124, 123, 120, 114, 103,  85,  57,  29,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   8,  17,  26,  31,  36,  32,  27,  19,   9,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};