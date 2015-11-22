#include <PICOL.h>

namespace PICOL {
  const uint8_t Agent[] = {
    46, 48, // width, height
      0,   0,   1,  19,  49,  61,  55,  28,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  23,  51,  61,  52,  25,   3,   0,   0,   0, 
      0,   7,  59, 109, 124, 127, 126, 116,  77,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  66, 112, 125, 127, 125, 114,  71,  12,   0,   0, 
      5,  71, 125, 127, 127, 127, 127, 127, 127,  95,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  81, 127, 127, 127, 127, 127, 127, 127,  87,  10,   0, 
     48, 121, 127, 124,  91,  65,  81, 118, 127, 127,  71,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 125, 127, 127, 127, 127, 127, 127, 127, 127,  60,   0, 
     98, 127, 127,  70,   6,   0,   1,  44, 119, 127, 111,  18,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  98, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,  13, 
    122, 127, 112,  18,   0,   0,   0,   3,  87, 127, 124,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  30, 
    127, 127, 105,  10,   0,   0,   0,   0,  76, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  34, 
    115, 127, 119,  33,   0,   0,   0,  12, 101, 127, 121,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114,  24, 
     80, 127, 127, 100,  34,  11,  22,  80, 126, 127,  99,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  83, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   5, 
     25, 108, 127, 127, 120, 107, 115, 127, 127, 122,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  88, 127, 127, 127, 127, 127, 127, 127, 127, 118,  36,   0, 
      0,  37, 109, 127, 127, 127, 127, 127, 120,  61,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  81, 127, 127, 127, 127, 127, 127, 127, 127, 116,  52,   1,   0, 
      0,   0,  22,  71, 102, 111, 106,  83,  36,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   8,  14,  18,  14,   9,   3,   0,   0,   0,   0,   0,  10,  80, 126, 127, 121,  68,  74, 104, 111, 105,  79,  31,   1,   0,   0, 
      0,   0,   0,   1,   9,  15,  12,   2,   0,   0,   0,   0,   0,   0,   0,   0,  10,  34,  64,  87, 103, 110, 113, 111, 104,  89,  68,  39,  13,   0,   9,  79, 126, 127, 121,  57,   2,   1,  10,  15,  11,   2,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  19,  62, 102, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 106,  68,  83, 126, 127, 122,  58,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  64, 110, 127, 127, 127, 127, 123, 115, 107, 104, 107, 113, 123, 127, 127, 127, 127, 127, 127, 123,  58,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  42, 103, 126, 127, 127, 122,  99,  65,  37,  20,  11,   8,  11,  18,  34,  61,  93, 120, 127, 127, 127, 120,  54,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  69, 121, 127, 127, 122,  89,  39,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  32,  80, 119, 127, 127, 123,  79,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  17,  87, 126, 127, 127, 102,  44,   5,   0,   0,   0,   0,  11,  32,  42,  35,  15,   1,   0,   0,   0,   3,  35,  94, 126, 127, 127,  97,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  22,  96, 127, 127, 123,  76,  15,   0,   0,   0,   0,   5,  52, 103, 122, 126, 123, 109,  64,  10,   0,   0,   0,   0,  10,  65, 119, 127, 127, 106,  31,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  22, 100, 127, 127, 117,  54,   4,   0,   0,   0,   0,   3,  67, 124, 127, 127, 127, 127, 127, 126,  82,   9,   0,   0,   0,   0,   2,  43, 111, 127, 127, 108,  30,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  17,  96, 127, 127, 113,  41,   1,   0,   0,   0,   0,   0,  42, 122, 127, 127, 127, 127, 127, 127, 127, 126,  60,   0,   0,   0,   0,   0,   0,  31, 106, 127, 127, 106,  25,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   9,  86, 127, 127, 113,  38,   0,   0,   0,   0,   0,   0,   4,  89, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,  12,   0,   0,   0,   0,   0,   0,  29, 106, 127, 127,  97,  16,   0,   0,   0,   0,   0, 
      0,   0,   0,   2,  67, 126, 127, 116,  40,   0,   0,   0,   0,   0,   0,   0,  15, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,  30, 109, 127, 127,  80,   6,   0,   0,   0,   0, 
      0,   0,   0,  11, 102, 127, 127,  92,   7,   0,   0,   0,   0,   0,   0,   0,  20, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  36,   0,   0,   0,   0,   0,   0,   0,   1,  75, 127, 127, 115,  24,   0,   0,   0,   0, 
      0,   0,   0,   0,  46, 120, 127, 124,  63,   3,   0,   0,   0,   0,   0,   0,  13, 108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  26,   0,   0,   0,   0,   0,   0,   0,  44, 117, 127, 126,  66,   2,   0,   0,   0,   0, 
      0,   0,   0,   0,   2,  64, 125, 127, 122,  61,   3,   0,   0,   0,   0,   0,   2,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127,  98,   8,   0,   0,   0,   0,   0,   0,  41, 115, 127, 127,  84,   8,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   6,  74, 126, 127, 122,  64,   5,   0,   0,   0,   0,   0,  32, 116, 127, 127, 127, 127, 127, 127, 127, 123,  48,   0,   0,   0,   0,   0,   2,  47, 115, 127, 127,  92,  15,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   9,  79, 126, 127, 124,  77,  13,   0,   0,   0,   0,   1,  51, 117, 127, 127, 127, 127, 127, 122,  66,   4,   0,   0,   0,   0,   7,  62, 120, 127, 127,  96,  19,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   9,  75, 125, 127, 127,  97,  32,   1,   0,   0,   0,   1,  34,  86, 112, 118, 114,  93,  44,   4,   0,   0,   0,   0,  21,  84, 125, 127, 127,  92,  18,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   6,  64, 121, 127, 127, 116,  67,  16,   0,   0,   0,   0,   3,  16,  25,  19,   5,   0,   0,   0,   0,  10,  54, 109, 127, 127, 125,  81,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  45, 109, 127, 127, 126, 107,  62,  22,   3,   0,   0,   0,   0,   0,   0,   0,   1,  16,  52,  99, 125, 127, 127, 117,  60,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 110, 127, 127, 127, 127, 115,  88,  59,  38,  26,  23,  24,  34,  53,  80, 109, 126, 127, 127, 125,  94,  33,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  62, 122, 127, 126, 124, 127, 127, 127, 127, 124, 120, 117, 118, 123, 127, 127, 127, 127, 125, 104,  54,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  62, 123, 127, 126,  76,  41,  81, 111, 125, 127, 127, 127, 127, 127, 127, 127, 126, 115,  89,  48,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   6,  22,  33,  27,   9,   4,  61, 123, 127, 126,  76,   8,   0,   2,  16,  41,  64,  83,  92,  97,  94,  85,  68,  46,  21,   4,   0,   0,   0,   0,   0,   0,   0,   0,   7,  24,  33,  24,   8,   0,   0,   0,   0, 
      0,   2,  38,  92, 116, 122, 119, 100,  83, 121, 127, 126,  77,   8,   0,   0,   0,   0,   0,   0,   1,   4,   6,   5,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  45,  96, 118, 122, 118,  98,  48,   5,   0,   0, 
      1,  53, 119, 127, 127, 127, 127, 127, 127, 127, 126,  78,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  63, 122, 127, 127, 127, 127, 127, 124,  69,   4,   0, 
     36, 115, 127, 127, 127, 127, 127, 127, 127, 127,  95,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 121, 127, 126, 106,  90, 104, 125, 127, 123,  48,   0, 
     89, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  91, 127, 127,  77,  14,   2,  12,  72, 126, 127,  96,   8, 
    119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19, 113, 127, 108,  16,   0,   0,   0,  12, 103, 127, 116,  27, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 118, 127,  93,   4,   0,   0,   0,   2,  87, 127, 121,  35, 
    119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19, 114, 127, 108,  16,   0,   0,   0,  12, 103, 127, 117,  27, 
     91, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  91, 127, 127,  75,  12,   1,  11,  69, 126, 127,  97,   9, 
     37, 116, 127, 127, 127, 127, 127, 127, 127, 126,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  43, 122, 127, 125, 104,  86, 102, 125, 127, 124,  49,   0, 
      1,  55, 120, 127, 127, 127, 127, 127, 126,  80,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  66, 123, 127, 127, 127, 127, 127, 124,  71,   5,   0, 
      0,   2,  41,  95, 118, 124, 121, 104,  58,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  47,  98, 119, 124, 120, 101,  52,   6,   0,   0, 
      0,   0,   0,   7,  24,  34,  28,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  26,  34,  26,  10,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};