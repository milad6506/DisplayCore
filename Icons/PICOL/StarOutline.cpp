#include <PICOL.h>

namespace PICOL {
  const uint8_t StarOutline[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  76,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 120,  52,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  74, 127,  93,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17, 110, 127, 120,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  52, 126, 127, 127,  72,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  93, 127, 127, 127, 108,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 120, 127, 127, 127, 126,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  72, 127, 127, 127, 127, 127,  91,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16, 108, 127, 126, 101, 123, 127, 119,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50, 126, 127, 115,  37, 103, 127, 127,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  91, 127, 127,  84,   2,  66, 127, 127, 107,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 119, 127, 124,  43,   0,  27, 117, 127, 125,  48,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  70, 127, 127, 103,  12,   0,   4,  87, 127, 127,  89,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     28,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  38, 109, 127, 127,  65,   0,   0,   0,  46, 125, 127, 118,  47,  29,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  28,   6, 
     70, 120, 122, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 122, 127, 127, 117,  26,   0,   0,   0,  13, 105, 127, 127, 123, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 123,  78,   7, 
     10,  86, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  86,   4,   0,   0,   0,   0,  68, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 101,  18,   0, 
      0,  19, 102, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  45,   0,   0,   0,   0,   0,  28, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  32,   0,   0, 
      0,   0,  34, 114, 127, 127, 127, 122,  80,  68,  69,  69,  69,  69,  69,  69,  69,  69,  62,  11,   0,   0,   0,   0,   0,   5,  55,  70,  69,  69,  69,  69,  69,  69,  69,  68,  74, 117, 127, 127, 127, 122,  50,   0,   0,   0, 
      0,   0,   0,  52, 122, 127, 127, 127,  73,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  56, 123, 127, 127, 126,  69,   3,   0,   0,   0, 
      0,   0,   0,   3,  71, 127, 127, 127, 123,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  39, 117, 127, 127, 127,  88,  10,   0,   0,   0,   0, 
      0,   0,   0,   0,  10,  89, 127, 127, 127, 116,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23, 106, 127, 127, 127, 103,  20,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  22, 105, 127, 127, 127, 104,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  91, 127, 127, 127, 115,  34,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  37, 116, 127, 127, 127,  89,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  73, 127, 127, 127, 123,  52,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  55, 124, 127, 127, 126,  70,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 123, 127, 127, 127,  72,   4,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   4,  75, 127, 127, 127, 122,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35, 116, 127, 127, 127,  90,  11,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  12,  93, 127, 127, 127, 115,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20, 104, 127, 127, 127, 105,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 107, 127, 127, 127, 101,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  86, 127, 127, 127, 117,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 119, 127, 127, 110,  16,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  97, 127, 127, 124,  56,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11, 105, 127, 127,  82,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127, 117,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 122, 127, 126,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 120, 127, 127,  51,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  69, 127, 127, 111,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  98, 127, 127,  87,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   9, 101, 127, 127,  83,   2,   0,   0,   0,   0,   0,   0,  12,  44,  19,   0,   0,   0,   0,   0,   0,   0,  65, 127, 127, 113,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  33, 121, 127, 126,  47,   0,   0,   0,   0,   0,   4,  42,  99, 125, 107,  52,   8,   0,   0,   0,   0,   0,  31, 120, 127, 126,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  68, 127, 127, 112,  18,   0,   0,   0,   1,  26,  83, 122, 127, 127, 127, 125,  93,  35,   3,   0,   0,   0,   8,  99, 127, 127,  85,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   9, 100, 127, 127,  84,   2,   0,   0,  14,  65, 115, 127, 127, 127, 127, 127, 127, 127, 119,  76,  21,   0,   0,   0,  65, 127, 127, 113,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  32, 121, 127, 126,  49,   0,   6,  47, 103, 126, 127, 127, 127, 103,  62,  94, 125, 127, 127, 127, 110,  58,  10,   0,  32, 121, 127, 126,  49,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127, 111,  19,  29,  88, 123, 127, 127, 127, 115,  66,  15,   0,   9,  55, 108, 127, 127, 127, 126,  97,  40,  12,  99, 127, 127,  84,   2,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   8,  99, 127, 127,  99,  72, 117, 127, 127, 127, 122,  84,  27,   1,   0,   0,   0,   0,  19,  73, 118, 127, 127, 127, 121,  81,  89, 127, 127, 112,  19,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 127, 124, 126, 127, 127, 126,  99,  42,   5,   0,   0,   0,   0,   0,   0,   0,   2,  33,  90, 124, 127, 127, 127, 124, 127, 127, 126,  48,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  65, 127, 127, 127, 127, 127, 127, 112,  60,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  49, 105, 127, 127, 127, 127, 127, 127,  83,   2,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   8,  99, 127, 127, 127, 127, 120,  78,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  67, 116, 127, 127, 127, 127, 112,  18,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  31, 120, 127, 127, 125,  95,  38,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  28,  85, 123, 127, 127, 126,  47,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  64, 127, 127, 108,  55,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  44, 101, 126, 127,  82,   2,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   8,  99, 120,  73,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  62, 114, 112,  18,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  27,  83,  33,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  24,  79,  40,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   9,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  11,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
