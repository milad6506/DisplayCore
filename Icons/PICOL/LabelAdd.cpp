#include <PICOL.h>

namespace PICOL {
  const uint8_t LabelAdd[] = {
    41, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  24,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24,  84, 117,  77,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  56, 112, 127, 127, 127, 107,  49,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  31,  92, 125, 127, 127, 126, 127, 127, 123,  85,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  65, 116, 127, 127, 125,  90,  51,  96, 126, 127, 127, 113,  58,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   3,  38,  99, 126, 127, 127, 111,  55,   8,   0,  11,  63, 115, 127, 127, 125,  92,  32,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  17,  74, 120, 127, 127, 123,  82,  23,   0,   0,   0,   0,   1,  29,  89, 124, 127, 127, 117,  66,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   5,  47, 105, 127, 127, 127, 106,  46,   5,   0,   0,   3,   8,   2,   0,   0,   7,  54, 110, 127, 127, 126, 100,  39,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  23,  83, 123, 127, 127, 120,  74,  17,   0,   0,   0,  29,  84, 102,  80,  23,   0,   0,   0,  22,  81, 122, 127, 127, 120,  75,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   8,  55, 111, 127, 127, 126,  99,  38,   3,   0,   0,   0,  19, 106, 127, 127, 127,  97,  12,   0,   0,   0,   5,  45, 104, 127, 127, 127, 106,  48,   5,   0,   0,   0,   0,   0,   0,   0,   0, 
      1,  30,  91, 125, 127, 127, 116,  65,  12,   0,   0,   0,   0,   0,  49, 127, 127, 127, 127, 124,  36,   0,   0,   0,   0,   0,  16,  72, 120, 127, 127, 123,  83,  24,   0,   0,   0,   0,   0,   0,   0, 
     58, 115, 127, 127, 125,  92,  31,   1,   0,   0,   0,   0,   0,   0,  49, 127, 127, 127, 127, 123,  36,   0,   0,   0,   0,   0,   0,   2,  37,  98, 126, 127, 127, 112,  40,   0,   0,   0,   0,   0,   0, 
     94, 127, 127, 112,  56,   8,   0,   0,   0,   0,   0,   0,   0,   0,  18, 105, 127, 127, 127,  96,  11,   0,   0,   0,   0,   0,   0,   0,   0,  11,  64, 116, 127, 127,  67,   0,   0,   0,   0,   0,   0, 
     94, 127, 125,  47,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  29,  84, 100,  78,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58, 127, 127,  66,   0,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   6,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 127, 127,  66,   0,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 127, 127,  66,   0,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 127, 127,  66,   0,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 127, 127,  66,   0,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 127, 127,  66,   0,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  28,  45,  57,  60,  56,  42,  21,  54, 126, 127,  66,   0,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  21,  64, 101, 120, 126, 127, 127, 127, 125, 116, 111, 127, 127,  66,   0,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  60, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   3,   0,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  87, 126, 127, 127, 123, 103,  79,  63,  58,  66,  83, 107, 125, 127, 127, 122,  72,   9,   0,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  95, 127, 127, 124,  90,  39,  10,   1,   0,   0,   0,   1,  14,  48, 100, 126, 127, 126,  78,   8,   0,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  86, 127, 127, 117,  56,   6,   0,   0,   0,   3,   3,   2,   0,   0,   0,  12,  71, 123, 127, 126,  67,   2,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58, 126, 127, 117,  45,   1,   0,   0,   0,  14,  81,  92,  73,   6,   0,   0,   0,   4,  61, 124, 127, 120,  39,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20, 110, 127, 125,  58,   1,   0,   0,   0,   0,  19, 115, 127, 103,   9,   0,   0,   0,   0,   5,  76, 127, 127,  94,   8,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  61, 127, 127,  92,   8,   0,   0,   0,   0,   0,  19, 115, 127, 103,   9,   0,   0,   0,   0,   0,  18, 107, 127, 123,  40,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  98, 127, 124,  42,   0,   0,   0,   0,   0,   0,  19, 115, 127, 103,   9,   0,   0,   0,   0,   0,   0,  62, 127, 127,  77,   1, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 117, 127, 105,  12,   0,   0,   0,   0,   0,   0,  19, 115, 127, 103,   9,   0,   0,   0,   0,   0,   0,  25, 117, 127, 104,  12, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 125, 127,  82,   1,   0,  14,  20,  20,  20,  19,  36, 117, 127, 107,  27,  19,  20,  20,  20,  10,   0,   8, 101, 127, 116,  26, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  52, 127, 127,  67,   0,   2,  82, 116, 114, 114, 114, 116, 126, 127, 125, 115, 114, 114, 114, 116,  60,   0,   3,  88, 127, 121,  36, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 127, 127,  63,   0,   2,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   1,  83, 127, 123,  39, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50, 127, 127,  70,   0,   2,  71, 100,  99,  99,  99, 103, 124, 127, 122, 101,  99,  99,  99, 100,  52,   0,   3,  90, 127, 121,  34, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  37, 124, 127,  88,   3,   0,   5,   7,   7,   7,   5,  25, 115, 127, 104,  15,   6,   7,   7,   7,   3,   0,  11, 105, 127, 114,  23, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20, 114, 127, 110,  17,   0,   0,   0,   0,   0,   0,  19, 115, 127, 103,   9,   0,   0,   0,   0,   0,   0,  32, 121, 127,  99,   9, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  90, 127, 126,  53,   0,   0,   0,   0,   0,   0,  19, 115, 127, 103,   9,   0,   0,   0,   0,   0,   1,  73, 127, 127,  70,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50, 126, 127, 102,  15,   0,   0,   0,   0,   0,  19, 115, 127, 103,   9,   0,   0,   0,   0,   0,  28, 114, 127, 119,  31,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12, 100, 127, 127,  74,   4,   0,   0,   0,   0,  20, 115, 127, 103,   9,   0,   0,   0,   0,  11,  91, 127, 127,  83,   4,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  43, 121, 127, 123,  65,   5,   0,   0,   0,  11,  63,  71,  57,   5,   0,   0,   0,  11,  81, 127, 127, 113,  26,   0,   0, 
     94, 127, 124,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  68, 126, 127, 124,  79,  19,   0,   0,   0,   0,   0,   0,   0,   0,   1,  28,  91, 126, 127, 121,  50,   0,   0,   0, 
     94, 127, 124,  39,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   8,  77, 126, 127, 127, 109,  64,  26,   8,   2,   1,   3,  11,  32,  73, 115, 127, 127, 122,  61,   3,   0,   0,   0, 
     94, 127, 126,  97,  83,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  83,  91, 122, 127, 127, 127, 127, 118, 102,  88,  84,  90, 105, 121, 127, 127, 127, 115,  50,   3,   0,   0,   0,   0, 
     94, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  71,   0,   0,   0,   0,   0,   0, 
     92, 126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126,  65,   0,   0,   0,   0,   0,   0, 
     28,  39,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  39,  20,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
