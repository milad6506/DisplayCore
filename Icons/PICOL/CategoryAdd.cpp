#include <PICOL.h>

namespace PICOL {
  const uint8_t CategoryAdd[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      2,  18,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  17,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     11,  98, 117, 116, 116, 116, 116, 116, 116, 116, 116, 117,  93,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      9,  80,  96,  95,  95,  95, 100, 124, 127, 122,  98,  96,  76,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   3,   4,   4,   4,   2,  23, 115, 127, 106,  15,   3,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,  15,  47,  48,  48,  48,  48,  48,  48,  48,  48,  48,  49,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,  40, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,  40, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  71,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 114,  56,  49,  49,  49,  48,  74, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  72,  11,  28,  43,  49,  49,  41,  27,  10,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110, 105, 120, 126, 127, 127, 125, 119, 104,  72,  30,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  78,  21,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 118,  80,  76,  76,  76,  75,  92, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 118, 105,  97,  97, 106, 119, 127, 127, 127, 127, 108,  41,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  99,  56,  25,  10,   4,   5,  11,  27,  60, 103, 126, 127, 127, 117,  47,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 127, 127, 115,  57,  10,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 118, 127, 127, 116,  37,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 127, 108,  35,   0,   0,   0,   0,  32,  61,  61,  28,   0,   0,   0,   1,  44, 114, 127, 127, 103,  17,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 116,  36,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,  46, 120, 127, 127,  69,   1,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 126,  60,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   2,  71, 127, 127, 113,  21,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 108,  13,   0,   0,   0,   0,  20,  64,  65,  66, 104, 127, 127, 102,  12,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,  20, 111, 127, 127,  57,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 110,  14,   0,   0,   0,   0,   0,   0,   0,   7,  98, 127, 127,  61,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,  74, 127, 127,  89,   4, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 110,  14,   0,   0,   0,   0,   0,   0,   0,  21, 115, 127, 121,  30,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,  42, 125, 127, 108,  16, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 110,  14,   0,   0,   0,   0,  23,  71,  72,  86, 125, 127, 110,  15,   0,  31,  73,  73,  73,  73,  72, 101, 127, 127,  97,  72,  73,  73,  73,  72,  25,   0,  24, 117, 127, 117,  27, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 110,  14,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 103,   9,   0,  54, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  44,   0,  16, 112, 127, 121,  34, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 110,  15,   0,   1,   1,   0,  41, 125, 127, 127, 127, 127, 103,   9,   0,  54, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  44,   0,  17, 113, 127, 120,  33, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 121,  87,  81,  82,  82,  81,  96, 126, 127, 127, 127, 127, 113,  17,   0,  22,  53,  53,  53,  53,  52,  92, 127, 127,  87,  52,  53,  53,  53,  52,  18,   0,  26, 119, 127, 116,  25, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  36,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,  47, 126, 127, 105,  13, 
      0,   0,   0,   0,   0,   0,  20, 114, 127, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127,  70,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   2,  82, 127, 127,  84,   2, 
      0,   0,   0,   0,   0,   0,   7,  40,  44,  44,  44,  44,  44,  44,  43,  70, 125, 127, 127, 127, 127, 127, 109,  19,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,  28, 116, 127, 126,  50,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 124, 127, 127, 127, 127, 127, 127,  73,   3,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   6,  84, 127, 127, 106,  15,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 122,  51,   1,   0,   0,   0,   0,  66, 127, 127,  58,   0,   0,   0,   0,   2,  62, 125, 127, 126,  57,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 127, 118,  52,   4,   0,   0,   0,  22,  43,  43,  19,   0,   0,   0,   6,  62, 121, 127, 127,  92,  10,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 127, 127, 122,  77,  22,   1,   0,   0,   0,   0,   0,   0,   2,  27,  85, 124, 127, 127, 107,  25,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  39, 121, 124, 124, 124, 124, 124, 124, 125, 127, 127, 127, 113,  78,  44,  25,  17,  17,  27,  48,  82, 116, 127, 127, 127, 107,  32,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  33,  34,  34,  34,  34,  34,  33,  43,  98, 127, 127, 127, 127, 125, 118, 114, 114, 119, 126, 127, 127, 127, 126,  93,  25,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 111, 126, 127, 127, 127, 127, 127, 127, 127, 127, 126, 107,  58,  10,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  19,  55,  88, 108, 118, 122, 121, 117, 107,  85,  50,  15,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  13,  23,  29,  28,  22,  12,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};