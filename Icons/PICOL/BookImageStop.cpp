#include <PICOL.h>

namespace PICOL {
  const uint8_t BookImageStop[] = {
    46, 48, // width, height
      0,   2,  25,  55,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  63,  43,   1,   0,   0,   0,   0,   0,   0,   0,   0, 
      5,  61, 114, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
     58, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    110, 127, 125,  88,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  60,  68, 119, 127, 116,  67,  61,  42,   1,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 107,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14, 112, 127, 106,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 112,  26,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   3,  18, 112, 127, 107,  16,   3,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 109,  93,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  96, 123, 127, 122,  96,  94,  64,   2,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127, 125, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 122, 127, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  92,  30,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  29,  28,  49, 121, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  29,  30,  30,  30,  30,  23,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,  11,  83, 122, 121, 121, 121, 122, 115,  48,   1,   0,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,  11,  83, 127, 127, 127, 127, 127, 127, 127, 118,  47,   1,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   6,  32,  47,  48,  48,  86, 126, 127, 127, 127, 127, 127, 127, 127, 127, 117,  62,  47,  48,  42,  19,   1,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  11,  83, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 111,  45,   0,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  51, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,  11,   0,  26, 119, 127,  88,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  68, 127, 127, 127, 127, 127, 127, 127, 127, 122,  96,  77,  83, 109, 127, 127, 127, 127, 127, 127, 127, 127, 120,  67,  58,  70, 122, 127,  89,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  69, 127, 127, 127, 127, 127, 127, 127, 112,  45,   6,   0,   1,  18,  78, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  56,  14,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  69, 127, 127, 127, 127, 127, 127, 122,  45,   0,   0,   0,   0,   0,   8,  90, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 104,  47,   4,   0,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  69, 127, 127, 127, 127, 127, 127,  96,   7,   0,   0,   0,   0,   0,   0,  45, 125, 127, 127, 127, 124, 105,  81,  64,  58,  65,  82, 106, 124, 127, 127, 123,  71,   9,   0,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  69, 127, 127, 127, 127, 127, 127,  76,   0,   0,   0,   0,   0,   0,   9,  82, 127, 127, 125,  96,  45,  12,   1,   0,   0,   0,   1,  13,  47,  98, 126, 127, 126,  79,   8,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  69, 127, 127, 127, 127, 127, 127,  80,   1,   0,   0,   0,   0,   3,  69, 126, 127, 121,  65,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  70, 122, 127, 126,  67,   2,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  69, 127, 127, 127, 127, 127, 127, 106,  15,   0,   0,   0,   0,  40, 121, 127, 122,  55,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  61, 123, 127, 120,  38,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  69, 127, 127, 127, 127, 127, 127, 127,  70,   4,   0,   0,   9,  96, 127, 127,  70,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  75, 127, 127,  93,   7,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  69, 127, 127, 127, 127, 127, 127, 127, 123,  79,  29,  11,  47, 123, 127, 104,  15,   0,   0,   0,   8,  11,  11,  11,  11,  11,  11,  11,   8,   0,   0,   0,  18, 107, 127, 123,  39,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  65, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120, 109, 117, 127, 127,  57,   0,   0,   0,   3,  79, 108, 106, 106, 106, 106, 106, 108,  74,   2,   0,   0,   0,  62, 127, 127,  76,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,  37, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  22,   0,   0,   0,   4,  95, 127, 127, 127, 127, 127, 127, 127,  89,   3,   0,   0,   0,  26, 118, 127, 101,  10, 
    127, 127, 127, 127, 127,  81,   1,   0,   3,  51, 100, 112, 113, 113, 113, 113, 113, 113, 112, 116, 127, 127,  97,   6,   0,   0,   0,   4,  95, 127, 127, 127, 127, 127, 127, 127,  88,   3,   0,   0,   0,   9, 102, 127, 115,  24, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   8,  16,  17,  17,  17,  17,  17,  17,  15,  47, 124, 127,  84,   1,   0,   0,   0,   4,  95, 127, 127, 127, 127, 127, 127, 127,  88,   3,   0,   0,   0,   3,  89, 127, 120,  33, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 124, 127,  79,   0,   0,   0,   0,   4,  95, 127, 127, 127, 127, 127, 127, 127,  88,   3,   0,   0,   0,   2,  84, 127, 122,  36, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 123, 127,  86,   2,   0,   0,   0,   4,  95, 127, 127, 127, 127, 127, 127, 127,  88,   3,   0,   0,   0,   3,  91, 127, 119,  32, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22, 116, 127, 101,   8,   0,   0,   0,   4,  95, 127, 127, 127, 127, 127, 127, 127,  88,   3,   0,   0,   0,  11, 105, 127, 113,  21, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9, 102, 127, 119,  28,   0,   0,   0,   4,  95, 127, 127, 127, 127, 127, 127, 127,  89,   3,   0,   0,   0,  33, 121, 127,  96,   7, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  73, 127, 127,  67,   0,   0,   0,   2,  61,  83,  82,  82,  82,  82,  82,  83,  57,   2,   0,   0,   1,  74, 127, 127,  68,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 121, 127, 112,  24,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,   0,  28, 115, 127, 119,  30,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  86, 127, 127,  86,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  91, 127, 127,  82,   3,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  29, 114, 127, 126,  76,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  80, 127, 127, 112,  26,   0,   0, 
    127, 127, 127, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 123, 127, 126,  87,  24,   1,   0,   0,   0,   0,   0,   0,   0,   1,  26,  90, 126, 127, 121,  50,   0,   0,   0, 
    127, 127, 127, 127, 127,  81,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   4,  64, 123, 127, 127, 113,  69,  28,   9,   3,   1,   3,  10,  31,  71, 114, 127, 127, 122,  60,   3,   0,   0,   0, 
    127, 127, 127, 127, 127, 112,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  83,  88, 119, 127, 127, 127, 127, 119, 103,  89,  84,  89, 104, 120, 127, 127, 127, 113,  51,   3,   0,   0,   0,   0, 
    109, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  85,  27,   0,   0,   0,   0,   0,   0, 
     40, 103, 123, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 124, 122, 116, 101,  72,  33,   5,   0,   0,   0,   0,   0,   0,   0, 
      0,  13,  33,  39,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  39,  37,  30,  21,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
