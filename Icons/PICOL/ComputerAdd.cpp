#include <PICOL.h>

namespace PICOL {
  const uint8_t ComputerAdd[] = {
    48, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   4,  20,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,   7,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  25, 111, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 114,  38,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 123, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 121, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 105,  20,  10,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  14,  93, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  89, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  13,  29,  42,  49,  49,  41,  25,  12,  90, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  38,  78, 107, 121, 125, 127, 127, 125, 118, 103, 115, 127, 125,  42,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  30,  89, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  48,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  55, 116, 127, 127, 127, 126, 117, 104,  97,  98, 106, 120, 127, 127, 127, 127, 107,  37,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  64, 123, 127, 127, 124,  95,  53,  23,  10,   4,   5,  12,  28,  62, 105, 126, 127, 127, 115,  45,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 103,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  55, 123, 127, 127, 112,  52,   8,   0,   0,   0,   0,   0,   0,   0,   0,  14,  67, 119, 127, 127, 114,  35,   0,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 114,  65,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  60,  68, 116, 127, 127, 104,  29,   0,   0,   0,   0,  38,  62,  61,  26,   0,   0,   0,   2,  47, 116, 127, 127, 101,  15,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  29,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,  49, 121, 127, 127,  66,   0,   0, 
      0,   0,   0,   0,   0,  28, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  51,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   3,  74, 127, 127, 111,  19,   0, 
      0,   0,   0,   0,   0,  14,  62,  66,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  67, 109, 127, 127,  94,   8,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,  22, 112, 127, 127,  54,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12, 106, 127, 127,  52,   0,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,   1,  77, 127, 127,  87,   3, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  29, 121, 127, 116,  23,   0,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,  45, 126, 127, 107,  14, 
      0,   0,   0,   0,   0,  27,  72,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  72,  90, 126, 127, 103,   9,   0,  39,  74,  73,  73,  73,  73, 107, 127, 127,  96,  72,  73,  73,  73,  72,  24,   0,  26, 119, 127, 116,  25, 
      0,   0,   0,   0,   4,  85, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  95,   5,   0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  42,   0,  19, 114, 127, 119,  31, 
      0,   0,   0,   0,  35, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  96,   5,   0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  42,   0,  19, 115, 127, 118,  30, 
      0,   0,   0,   4,  84, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 106,  11,   0,  29,  54,  53,  53,  53,  53, 100, 127, 127,  84,  52,  53,  53,  53,  52,  17,   0,  28, 120, 127, 114,  23, 
      0,   0,   0,  34, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  28,   0,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,  50, 127, 127, 102,  11, 
      0,   0,   4,  85, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  60,   0,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,   3,  85, 127, 127,  80,   1, 
      0,   0,  35, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,  14,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,  31, 118, 127, 125,  45,   0, 
      0,   4,  85, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  65,   1,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   7,  87, 127, 127, 103,  13,   0, 
      0,  34, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  44,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   3,  65, 125, 127, 127,  70,   0,   0, 
      5,  84, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  47,   3,   0,   0,   0,  26,  43,  42,  18,   0,   0,   0,   7,  65, 122, 127, 127, 127,  96,   9,   0, 
     39, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  73,  20,   1,   0,   0,   0,   0,   0,   0,   3,  30,  87, 125, 127, 127, 127, 127, 124,  47,   0, 
     93, 125, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 127, 127, 127, 111,  75,  42,  24,  17,  17,  28,  49,  85, 118, 127, 127, 127, 125, 124, 124, 126,  93,   9, 
     33,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  33,  47, 103, 127, 127, 127, 127, 125, 118, 113, 114, 120, 126, 127, 127, 127, 125,  90,  39,  33,  34,  34,  31,   7, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  70, 113, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 106,  56,   9,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  21,  58,  90, 109, 118, 122, 121, 117, 106,  83,  48,  14,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  14,  23,  30,  29,  22,  11,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
