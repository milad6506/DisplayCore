#include <PICOL.h>

namespace PICOL {
  const uint8_t Mail[] = {
    48, 39, // width, height
      9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   9,   8,   2, 
    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  96,  28, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
    127, 127, 127, 127, 127, 126, 119, 119, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 119, 119, 125, 127, 127, 127, 127, 122,  36, 
    127, 127, 127, 127, 127, 123,  70,  28,  27,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  27,  27,  60, 119, 127, 127, 127, 127, 122,  36, 
    127, 127, 124, 121, 127, 127, 118,  59,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  47, 112, 127, 127, 123, 124, 127, 122,  36, 
    127, 127, 111,  53, 106, 127, 127, 124,  78,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  67, 121, 127, 127, 114,  57, 102, 127, 122,  36, 
    127, 127, 110,  15,  23,  94, 127, 127, 127,  95,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  84, 125, 127, 127, 103,  32,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,  12,  77, 124, 127, 127, 108,  40,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 100, 127, 127, 126,  88,  19,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   5,  59, 118, 127, 127, 118,  57,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  46, 112, 127, 127, 122,  71,   9,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   1,  41, 109, 127, 127, 124,  76,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  65, 121, 127, 127, 116,  52,   3,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,  26,  96, 127, 127, 127,  93,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  83, 125, 127, 127, 105,  35,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,  14,  79, 125, 127, 127, 107,  37,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  29,  99, 127, 127, 126,  90,  21,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   6,  61, 119, 127, 127, 117,  55,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  45, 111, 127, 127, 123,  73,  11,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   2,  44, 111, 127, 127, 123,  73,  11,   0,   0,   0,   0,   0,   0,   0,   7,  62, 120, 127, 127, 117,  55,   4,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28,  98, 127, 127, 126,  90,  21,   0,   0,   0,   0,   0,  15,  81, 125, 127, 127, 107,  38,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  82, 125, 127, 127, 104,  35,   0,   0,   0,  27,  97, 127, 127, 127,  93,  23,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  64, 120, 127, 127, 115,  52,   5,  42, 110, 127, 127, 123,  75,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  46, 112, 127, 127, 121,  92, 117, 127, 127, 117,  56,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 100, 127, 127, 127, 127, 127, 107,  39,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  85, 125, 127, 127,  94,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  67, 118,  77,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  27,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 122,  36, 
    127, 127, 115,  45,  33,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  39, 107, 127, 122,  36, 
    127, 127, 127, 123, 122, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 122, 123, 126, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  36, 
     94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  94,  95,  91,  26, 
      5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   4,   1, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
