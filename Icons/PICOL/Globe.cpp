#include <PICOL.h>

namespace PICOL {
  const uint8_t Globe[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  23,  38,  53,  59,  62,  60,  55,  41,  26,  11,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  41,  73,  99, 114, 122, 125, 126, 127, 126, 126, 123, 116, 102,  79,  47,  16,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  20,  65, 105, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 110,  75,  28,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 112, 127, 127, 127, 127, 127, 127, 127, 123, 123, 127, 125, 121, 127, 127, 127, 127, 127, 127, 127, 117,  75,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   1,  38, 101, 126, 127, 127, 122, 107, 123, 127, 127, 116,  56, 101, 127, 113,  55, 109, 127, 127, 126, 109, 119, 127, 127, 127, 109,  49,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   5,  60, 118, 127, 127, 123,  90,  43,  78, 126, 127, 117,  43,   7,  99, 127, 113,  17,  31, 109, 127, 127,  91,  40,  81, 120, 127, 127, 122,  73,  11,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   8,  73, 124, 127, 127, 106,  47,   5,  40, 120, 127, 122,  52,   0,   6,  99, 127, 113,  18,   0,  37, 116, 127, 125,  59,   3,  36,  97, 126, 127, 126,  87,  15,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   7,  77, 126, 127, 125,  83,  19,   0,  16, 103, 127, 127,  70,   3,   0,   6,  99, 127, 113,  18,   0,   0,  54, 124, 127, 114,  28,   0,  12,  70, 122, 127, 127,  91,  14,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,  68, 125, 127, 124,  69,   8,   0,   0,  64, 127, 127,  97,  12,   0,   0,   6,  99, 127, 113,  18,   0,   0,   6,  83, 127, 127,  83,   4,   0,   3,  55, 119, 127, 127,  84,   9,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  49, 122, 127, 124,  65,   5,   0,   0,  22, 112, 127, 120,  38,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,  25, 113, 127, 121,  36,   0,   0,   1,  50, 119, 127, 126,  67,   2,   0,   0,   0,   0, 
      0,   0,   0,  26, 111, 127, 126,  73,   5,   0,   0,   0,  64, 127, 127,  81,   3,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,  64, 127, 127,  84,   3,   0,   0,   1,  56, 123, 127, 120,  41,   0,   0,   0,   0, 
      0,   0,   5,  84, 127, 127, 106,  32,  20,  21,  21,  30, 106, 127, 123,  52,  20,  21,  21,  21,  27, 103, 127, 115,  36,  20,  21,  21,  20,  41, 117, 127, 117,  40,  20,  21,  21,  26,  93, 127, 127, 100,  13,   0,   0,   0, 
      0,   0,  42, 122, 127, 127, 122, 115, 116, 116, 116, 118, 126, 127, 126, 117, 116, 116, 116, 116, 116, 125, 127, 126, 117, 116, 116, 116, 116, 116, 125, 127, 127, 119, 115, 116, 116, 115, 120, 127, 127, 127,  61,   0,   0,   0, 
      0,   7,  92, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  16,   0,   0, 
      0,  37, 122, 127, 119, 104, 104, 104, 104, 103, 108, 126, 127, 123, 105, 104, 104, 104, 104, 104, 105, 122, 127, 125, 107, 103, 104, 104, 104, 104, 104, 119, 127, 127, 112, 103, 104, 104, 104, 103, 116, 127, 127,  56,   0,   0, 
      1,  76, 127, 127,  69,   7,   8,   8,   8,   6,  43, 124, 127,  93,  12,   8,   8,   8,   8,   8,  14, 100, 127, 114,  25,   7,   8,   8,   8,   8,   7,  74, 127, 127,  60,   6,   8,   8,   8,   6,  51, 125, 127,  95,   6,   0, 
     17, 108, 127, 118,  27,   0,   0,   0,   0,   0,  58, 127, 127,  66,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,  44, 126, 127,  79,   0,   0,   0,   0,   0,  14, 106, 127, 119,  28,   0, 
     42, 122, 127,  94,   6,   0,   0,   0,   0,   0,  79, 127, 126,  44,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,  25, 118, 127,  97,   6,   0,   0,   0,   0,   0,  76, 127, 127,  56,   0, 
     71, 127, 127,  65,   0,   0,   0,   0,   0,   4,  94, 127, 119,  27,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,  13, 108, 127, 109,  14,   0,   0,   0,   0,   0,  45, 126, 127,  82,   2, 
     94, 127, 125,  41,   0,   0,   0,   0,   0,  10, 105, 127, 112,  16,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,   6,  97, 127, 117,  22,   0,   0,   0,   0,   0,  24, 117, 127, 100,   9, 
    111, 127, 118,  24,   0,   0,   0,   0,   0,  16, 111, 127, 104,   9,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,   1,  87, 127, 121,  31,   0,   0,   0,   0,   0,  12, 106, 127, 112,  19, 
    121, 127, 114,  33,  20,  20,  20,  20,  19,  37, 117, 127, 103,  26,  20,  20,  20,  20,  20,  20,  26, 103, 127, 115,  35,  19,  20,  20,  20,  20,  20,  21,  88, 127, 124,  51,  19,  20,  20,  20,  20,  25, 102, 127, 117,  29, 
    126, 127, 125, 116, 115, 115, 115, 115, 115, 117, 126, 127, 124, 116, 115, 115, 115, 115, 115, 115, 116, 124, 127, 126, 117, 115, 115, 115, 115, 115, 115, 115, 122, 127, 127, 119, 115, 115, 115, 115, 115, 115, 124, 127, 120,  33, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  36, 
    125, 127, 123, 101,  98,  98,  98,  98,  98, 103, 125, 127, 120,  99,  98,  98,  98,  98,  98,  98,  99, 121, 127, 124, 102,  98,  98,  98,  98,  98,  98,  98, 116, 127, 127, 107,  97,  98,  98,  98,  98,  99, 119, 127, 120,  32, 
    120, 127, 113,  22,   5,   6,   6,   6,   5,  24, 115, 127, 100,  13,   6,   6,   6,   6,   6,   6,  13, 100, 127, 113,  23,   5,   6,   6,   6,   6,   6,   7,  84, 127, 123,  40,   4,   6,   6,   6,   6,  12, 100, 127, 117,  28, 
    109, 127, 119,  27,   0,   0,   0,   0,   0,  15, 110, 127, 105,  10,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,   2,  89, 127, 121,  29,   0,   0,   0,   0,   0,  13, 108, 127, 110,  17, 
     91, 127, 126,  45,   0,   0,   0,   0,   0,   9, 103, 127, 113,  17,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,   8, 100, 127, 116,  20,   0,   0,   0,   0,   0,  28, 120, 127,  98,   8, 
     66, 127, 127,  70,   0,   0,   0,   0,   0,   4,  92, 127, 120,  29,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,  15, 111, 127, 107,  12,   0,   0,   0,   0,   0,  50, 127, 127,  77,   0, 
     36, 120, 127,  99,   8,   0,   0,   0,   0,   0,  75, 127, 126,  46,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,  29, 121, 127,  94,   4,   0,   0,   0,   0,   2,  83, 127, 127,  51,   0, 
     13, 103, 127, 121,  34,   0,   0,   0,   0,   0,  54, 127, 127,  69,   0,   0,   0,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   0,   0,   0,  51, 127, 127,  74,   0,   0,   0,   0,   0,  19, 111, 127, 116,  23,   0, 
      0,  69, 127, 127,  80,  19,  20,  20,  20,  18,  48, 123, 127,  98,  23,  19,  20,  20,  20,  19,  25, 103, 127, 115,  35,  19,  20,  20,  20,  20,  20,  84, 127, 127,  64,  18,  20,  20,  20,  18,  63, 127, 127,  88,   3,   0, 
      0,  30, 118, 127, 124, 115, 114, 114, 114, 114, 116, 126, 127, 125, 115, 114, 114, 114, 114, 114, 115, 124, 127, 126, 116, 114, 114, 114, 114, 114, 115, 123, 127, 127, 118, 114, 114, 114, 114, 114, 122, 127, 125,  47,   0,   0, 
      0,   3,  83, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 100,  10,   0,   0, 
      0,   0,  33, 118, 127, 127, 116,  98,  99,  99,  99, 103, 125, 127, 125, 103,  99,  99,  99,  99, 100, 121, 127, 124, 103,  99,  99,  99,  99, 101, 122, 127, 126, 107,  98,  99,  99,  98, 111, 127, 127, 125,  50,   0,   0,   0, 
      0,   0,   2,  73, 127, 127, 108,  26,   5,   7,   6,  15,  99, 127, 125,  49,   5,   7,   7,   6,  13, 100, 127, 114,  24,   6,   7,   7,   5,  32, 118, 127, 112,  25,   6,   7,   6,  16,  95, 127, 127,  89,   7,   0,   0,   0, 
      0,   0,   0,  17, 102, 127, 127,  88,  11,   0,   0,   0,  56, 127, 127,  92,   8,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,   2,  75, 127, 127,  75,   1,   0,   0,   5,  73, 126, 127, 113,  29,   0,   0,   0,   0, 
      0,   0,   0,   0,  36, 116, 127, 127,  80,  10,   0,   0,  15, 105, 127, 124,  50,   0,   0,   0,   6,  99, 127, 113,  18,   0,   0,   0,  33, 118, 127, 116,  28,   0,   0,   5,  66, 124, 127, 123,  53,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,  53, 121, 127, 126,  86,  16,   0,   0,  54, 126, 127, 107,  21,   0,   0,   6,  99, 127, 113,  18,   0,   0,  10,  93, 127, 127,  72,   1,   0,   9,  72, 124, 127, 125,  69,   4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   2,  59, 122, 127, 127,  99,  33,   0,   9,  92, 127, 127,  84,   7,   0,   6,  99, 127, 113,  18,   0,   2,  67, 126, 127, 107,  20,   0,  23,  88, 126, 127, 125,  75,   7,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   3,  56, 119, 127, 127, 116,  66,  14,  30, 114, 127, 125,  67,   3,   6,  99, 127, 113,  18,   0,  50, 121, 127, 121,  45,   9,  56, 110, 127, 127, 123,  70,   7,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,  41, 108, 127, 127, 126, 106,  61,  75, 125, 127, 123,  60,  10,  98, 127, 113,  18,  44, 117, 127, 127,  86,  55,  99, 125, 127, 127, 116,  55,   4,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  84, 123, 127, 127, 126, 117, 125, 127, 127, 122,  74, 105, 127, 115,  70, 116, 127, 127, 126, 117, 125, 127, 127, 125,  94,  32,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  45,  98, 124, 127, 127, 127, 127, 127, 127, 126, 126, 127, 126, 125, 127, 127, 127, 127, 127, 127, 126, 105,  55,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  45,  88, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  94,  53,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  23,  52,  81, 101, 113, 119, 123, 124, 123, 120, 114, 103,  85,  57,  29,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   8,  17,  26,  31,  36,  32,  27,  19,   9,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};