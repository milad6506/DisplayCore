#include <PICOL.h>

namespace PICOL {
  const uint8_t PhoneOn[] = {
    48, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,   4,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  91,  54,   1,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  92, 127, 118,  42,   0,   0,   0,   0,   0,   0, 
      1,  17,  21,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  20,  21,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35, 119, 127, 127, 107,  22,   0,   0,   0,   0,   0, 
      9,  94, 117, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 117,  80,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  59, 124, 127, 127,  85,   7,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   9,  32,   3,   0,   5,  80, 127, 127, 124,  49,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   7,  76, 117,  45,   0,   0,  18, 104, 127, 127, 103,  15,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,  63, 126, 127, 111,  26,   0,   0,  49, 124, 127, 127,  58,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,  46, 120, 127, 127,  89,   7,   0,   7,  92, 127, 127, 102,  12,   0,   0, 
     10, 104, 127, 127, 127, 125, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 120, 126, 127, 127, 127,  88,   2,   0,   0,   0,   2,   1,   0,   2,  65, 126, 127, 124,  49,   0,   0,  44, 124, 127, 125,  45,   0,   0, 
     10, 104, 127, 127, 127, 102,  29,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  25,  37, 112, 127, 127, 127,  88,   2,   0,   0,   3,  59,  48,   0,   0,  10,  95, 127, 127, 100,  10,   0,   9, 100, 127, 127,  83,   2,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 108, 127, 127, 127,  88,   2,   0,   3,  58, 122, 114,  30,   0,   0,  40, 122, 127, 125,  46,   0,   0,  63, 127, 127, 112,  17,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 109, 127, 127, 127,  88,   2,   0,  20, 110, 127, 127,  91,   8,   0,   6,  91, 127, 127,  86,   3,   0,  29, 119, 127, 124,  40,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 109, 127, 127, 127,  88,   2,   0,   1,  60, 125, 127, 124,  45,   0,   0,  49, 126, 127, 113,  19,   0,  10, 103, 127, 127,  66,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 109, 127, 127, 127,  88,   2,   0,   0,   9,  95, 127, 127,  88,   4,   0,  19, 112, 127, 125,  42,   0,   1,  81, 127, 127,  87,   3, 
     10, 104, 127, 127, 127,  95,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 109, 127, 127, 127,  88,   2,   0,   0,   0,  48, 125, 127, 115,  22,   0,   4,  92, 127, 127,  66,   0,   0,  61, 127, 127, 101,  10, 
     10, 104, 127, 127, 127,  95,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 109, 127, 127, 127,  88,   2,   0,   0,   0,  17, 111, 127, 126,  44,   0,   0,  71, 127, 127,  83,   1,   0,  45, 126, 127, 111,  19, 
     10, 104, 127, 127, 127,  95,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 109, 127, 127, 127,  88,   2,   0,   0,   0,   4,  92, 127, 127,  62,   0,   0,  56, 127, 127,  95,   4,   0,  35, 123, 127, 115,  25, 
     10, 104, 127, 127, 127,  96,   7,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   3,  17, 109, 127, 127, 127,  88,   2,   0,   0,   0,   0,  79, 127, 127,  73,   0,   0,  48, 126, 127, 100,   6,   0,  31, 122, 127, 118,  28, 
     10, 104, 127, 127, 127, 118,  93,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  95, 122, 127, 127, 127,  88,   2,   0,   0,   0,   0,  77, 127, 127,  76,   0,   0,  48, 126, 127, 102,   8,   0,  28, 121, 127, 120,  31, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   2,  83, 127, 127,  68,   0,   0,  51, 127, 127,  98,   5,   0,  33, 122, 127, 117,  27, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   8, 100, 127, 127,  55,   0,   0,  62, 127, 127,  90,   3,   0,  39, 124, 127, 114,  23, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,  29, 119, 127, 122,  34,   0,   1,  80, 127, 127,  76,   0,   0,  52, 127, 127, 107,  15, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,  70, 127, 127, 105,  12,   0,   9, 102, 127, 127,  56,   0,   0,  69, 127, 127,  95,   6, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,  27, 114, 127, 127,  69,   0,   0,  31, 120, 127, 121,  31,   0,   4,  91, 127, 127,  80,   1, 
     10, 104, 127, 127, 127, 110,  60,  57,  78, 125, 127, 116,  65,  57,  70, 123, 127, 121,  70,  57,  65, 117, 127, 127, 127,  88,   2,   0,  11,  92, 127, 127, 113,  24,   0,   0,  68, 127, 127, 102,  10,   0,  17, 112, 127, 127,  55,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,  36, 124, 127, 106,  11,   0,  23, 119, 127, 116,  22,   0,  13, 108, 127, 127, 127,  88,   2,   0,  15, 100, 127, 126,  63,   0,   0,  17, 108, 127, 127,  68,   0,   0,  43, 125, 127, 120,  29,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,  36, 124, 127, 106,  12,   0,  23, 119, 127, 116,  22,   0,  13, 109, 127, 127, 127,  88,   2,   0,   0,  24, 102,  89,  10,   0,   0,  66, 127, 127, 116,  27,   0,   2,  81, 127, 127, 100,   9,   0, 
     10, 104, 127, 127, 127, 114,  75,  72,  89, 126, 127, 118,  78,  72,  83, 124, 127, 122,  83,  72,  79, 119, 127, 127, 127,  88,   2,   0,   0,   0,  20,  16,   0,   0,  31, 115, 127, 127,  78,   2,   0,  22, 114, 127, 127,  65,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,  15,  96, 127, 127, 113,  25,   0,   0,  67, 127, 127, 118,  28,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   1,  71, 127, 127, 125,  58,   0,   0,  22, 111, 127, 127,  83,   3,   0,   0, 
     10, 104, 127, 127, 127, 114,  76,  73,  89, 126, 127, 118,  79,  73,  84, 124, 127, 122,  83,  73,  80, 119, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,  34, 110, 127,  84,   7,   0,   3,  77, 127, 127, 120,  35,   0,   0,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,  36, 124, 127, 106,  12,   0,  23, 119, 127, 116,  22,   0,  13, 109, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,  38,  84,  18,   0,   0,  43, 121, 127, 127,  80,   3,   0,   0,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,  36, 124, 127, 106,  11,   0,  23, 119, 127, 116,  22,   0,  13, 108, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   1,   5,   0,   0,  23, 107, 127, 127, 112,  24,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 110,  60,  56,  77, 125, 127, 116,  64,  56,  70, 123, 127, 121,  69,  56,  65, 117, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15,  94, 127, 127, 124,  54,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  37, 119, 127, 127,  80,   5,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  55, 121,  94,  15,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 116,  83,  81,  94, 126, 127, 120,  85,  81,  90, 124, 127, 123,  89,  81,  86, 120, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  45,  23,   0,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127,  96,   5,   0,  37, 124, 127, 107,  13,   0,  24, 119, 127, 116,  23,   0,  14, 109, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127,  95,   4,   0,  36, 124, 127, 106,  11,   0,  23, 119, 127, 116,  22,   0,  13, 108, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 106,  47,  43,  68, 125, 127, 113,  52,  43,  59, 122, 127, 120,  58,  43,  53, 115, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 126, 126, 126, 127, 127, 127, 126, 126, 126, 127, 127, 127, 126, 126, 126, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     10, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      8,  84, 105, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 105,  72,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      1,   8,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};