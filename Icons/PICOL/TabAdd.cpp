#include <PICOL.h>

namespace PICOL {
  const uint8_t TabAdd[] = {
    48, 42, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   3,   0,   0,   1,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   2,   0,   0,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   1,   0,   0,   0, 
     93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  68,   3,   0,  36,  92,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  47,   0,   0,  58,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  89,  24,   0,   0,   0, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  95,   4,   0,  50, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  65,   0,   0,  81, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  34,   0,   0,   0, 
    127, 127, 126, 122, 121, 121, 121, 121, 121, 121, 121, 123, 127, 127,  93,   4,   0,  50, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  64,   0,   0,  80, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  34,   0,   0,   0, 
    127, 127, 114,  42,  30,  30,  30,  30,  30,  30,  30,  59, 125, 127,  93,   4,   0,  50, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  64,   0,   0,  80, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  34,   0,   0,   0, 
    127, 127, 110,  13,   0,   0,   0,   0,   0,   0,   0,  37, 124, 127,  93,   3,   0,  49, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  64,   0,   0,  80, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  33,   0,   0,   0, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 124, 127,  96,  15,  11,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  70,  11,  11,  84, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  42,  11,  11,   3, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 124, 127, 122, 107, 106, 114, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117, 106, 106, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 112, 106, 102,  30, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  34, 111, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 114, 115, 124, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   5,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  23, 103, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  99, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   9,  17,  21,  20,  15,   7,   0,   0,   0,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  49,  81, 103, 113, 118, 117, 111,  99,  74,  41,  10,   0,   0,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  63, 108, 126, 127, 127, 127, 127, 127, 127, 127, 127, 124,  99,  49,   6,   0,   8, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33,  98, 127, 127, 127, 127, 127, 121, 117, 117, 122, 127, 127, 127, 127, 124,  84,  19,   6, 100, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  44, 114, 127, 127, 127, 114,  80,  49,  29,  20,  21,  32,  54,  89, 119, 127, 127, 127, 100,  34,  99, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  39, 116, 127, 127, 122,  75,  23,   2,   0,   0,   0,   0,   0,   0,   4,  33,  90, 126, 127, 127, 108, 114, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20, 107, 127, 127, 116,  49,   3,   0,   0,   0,  23,  36,  36,  15,   0,   0,   0,   9,  67, 123, 127, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  78, 127, 127, 119,  45,   0,   0,   0,   0,   0,  78, 124, 124,  52,   0,   0,   0,   0,   4,  66, 125, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 119, 127, 126,  65,   1,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   7,  87, 127, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  73, 127, 127, 103,  13,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,  29, 117, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11, 105, 127, 127,  60,   0,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,   3,  84, 127, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 120, 127, 119,  26,   0,   0,   0,   0,   0,   0,   0,  79, 127, 127,  53,   0,   0,   0,   0,   0,   0,   0,  49, 126, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  43, 126, 127, 105,  11,   0,  29,  54,  54,  54,  54,  54, 100, 127, 127,  85,  54,  54,  54,  54,  53,  18,   0,  28, 120, 127, 122,  36, 
    127, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  51, 127, 127,  96,   5,   0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  42,   0,  19, 114, 127, 122,  36, 
    127, 127, 110,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  49, 127, 127,  95,   5,   0,  70, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,  19, 114, 127, 122,  36, 
    127, 127, 119,  73,  66,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  67,  66,  88, 127, 127, 104,  10,   0,  37,  69,  68,  68,  68,  68, 105, 127, 127,  93,  68,  68,  68,  68,  67,  22,   0,  26, 119, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  25,   0,   0,   0,   0,   0,   0,   0,  80, 127, 127,  53,   0,   0,   0,   0,   0,   0,   0,  46, 126, 127, 122,  36, 
    127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  55,   0,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,   2,  80, 127, 127, 123,  36, 
     56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  56,  92, 127, 127,  99,  10,   0,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   0,  26, 116, 127, 126,  76,  15, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33, 121, 127, 125,  59,   1,   0,   0,   0,   0,   0,  80, 127, 127,  54,   0,   0,   0,   0,   0,   5,  81, 127, 127, 107,  15,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  83, 127, 127, 116,  38,   0,   0,   0,   0,   0,  81, 127, 127,  54,   0,   0,   0,   0,   2,  58, 123, 127, 126,  59,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  24, 111, 127, 127, 112,  41,   1,   0,   0,   0,  32,  51,  51,  21,   0,   0,   0,   5,  58, 120, 127, 127,  94,  10,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  45, 119, 127, 127, 118,  66,  16,   0,   0,   0,   0,   0,   0,   0,   2,  25,  81, 124, 127, 127, 108,  26,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  51, 118, 127, 127, 127, 107,  69,  37,  20,  13,  14,  23,  44,  79, 115, 127, 127, 127, 108,  33,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  41, 106, 127, 127, 127, 127, 123, 115, 110, 111, 117, 125, 127, 127, 127, 127,  94,  27,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19,  73, 114, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 107,  60,  11,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  23,  61,  92, 111, 119, 123, 122, 118, 107,  86,  51,  16,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  16,  25,  32,  30,  23,  13,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};