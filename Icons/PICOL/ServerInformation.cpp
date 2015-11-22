#include <PICOL.h>

namespace PICOL {
  const uint8_t ServerInformation[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      2,  18,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  20,   6,   0,   0,   0, 
     11,  98, 117, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 112,  32,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 125, 107, 102, 103, 103, 102, 108, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 118,  31,   7,   9,   9,   7,  34, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 117,  24,   0,   0,   0,   0,  27, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 120,  55,  38,  39,  39,  38,  58, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 125, 124, 124, 124, 124, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
      9,  80,  96,  98, 123, 127, 123,  99,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95,  95, 115, 127, 127, 106,  95,  92,  26,   0,   0,   0, 
      0,   3,   3,  17, 109, 127, 112,  20,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   5,  82, 127, 126,  47,   2,   3,   1,   0,   0,   0, 
      0,   0,   0,  13, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  80, 127, 126,  44,   0,   0,   0,   0,   0,   0, 
      5,  41,  48,  57, 116, 127, 118,  59,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  49,  98, 127, 126,  76,  47,  47,  13,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 123,  85,  75,  76,  76,  75,  87, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 118, 105,  97,  97, 106, 119, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 117,  24,   0,   0,   0,   0,  27, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  99,  56,  25,  10,   4,   5,  11,  27,  60, 103, 126, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 117,  24,   0,   0,   0,   0,  27, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  57,  10,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 118, 127, 127, 125,  48,   0,   0,   0, 
     12, 107, 127, 122,  73,  60,  60,  60,  60,  75, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 108,  35,   0,   0,   0,   0,  32,  61,  61,  28,   0,   0,   0,   1,  44, 114, 127, 127, 103,  17,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 116,  36,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,  46, 120, 127, 127,  69,   1,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  60,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   2,  71, 127, 127, 113,  21,   0, 
      6,  55,  66,  72, 118, 127, 120,  74,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  66, 104, 127, 127, 102,  12,   0,   0,   0,   0,   0,   0,  34,  66,  66,  30,   0,   0,   0,   0,   0,   0,  20, 111, 127, 127,  57,   0, 
      0,   0,   0,  13, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  98, 127, 127,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  74, 127, 127,  89,   4, 
      0,   0,   0,  13, 109, 127, 112,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21, 115, 127, 121,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42, 125, 127, 109,  16, 
      7,  61,  73,  78, 119, 127, 121,  80,  72,  73,  73,  73,  73,  73,  73,  73,  73,  72,  86, 125, 127, 110,  15,   0,   0,   0,   0,   0,   0,   0,  38,  74,  73,  33,   0,   0,   0,   0,   0,   0,   0,  24, 117, 127, 117,  27, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,   9,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,  16, 112, 127, 121,  34, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,   9,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,  17, 113, 127, 120,  33, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 113,  17,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,  26, 119, 127, 116,  25, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  36,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   0,  47, 126, 127, 105,  13, 
     12, 107, 127, 127, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  70,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,   2,  82, 127, 127,  84,   2, 
     12, 107, 127, 121,  60,  43,  44,  44,  43,  62, 122, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  19,   0,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   0,  28, 116, 127, 126,  50,   0, 
     12, 107, 127, 117,  24,   0,   0,   0,   0,  27, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   3,   0,   0,   0,   0,   0,  67, 127, 127,  58,   0,   0,   0,   0,   0,   6,  84, 127, 127, 106,  15,   0, 
     12, 107, 127, 118,  27,   2,   4,   4,   2,  30, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  51,   1,   0,   0,   0,   0,  66, 127, 127,  58,   0,   0,   0,   0,   2,  62, 125, 127, 126,  57,   0,   0, 
     12, 107, 127, 124,  98,  91,  91,  91,  91,  99, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  52,   4,   0,   0,   0,  22,  43,  43,  19,   0,   0,   0,   6,  62, 121, 127, 127,  92,  10,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  77,  22,   1,   0,   0,   0,   0,   0,   0,   2,  27,  85, 124, 127, 127, 107,  25,   0,   0,   0, 
     12, 105, 125, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 127, 127, 127, 113,  78,  44,  25,  17,  17,  27,  48,  82, 116, 127, 127, 127, 107,  32,   0,   0,   0,   0, 
      3,  28,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  33,  43,  98, 127, 127, 127, 127, 125, 118, 114, 114, 119, 126, 127, 127, 127, 126,  93,  25,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 111, 126, 127, 127, 127, 127, 127, 127, 127, 127, 126, 107,  58,  10,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  19,  55,  88, 108, 118, 122, 121, 117, 107,  85,  50,  15,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  13,  23,  29,  28,  22,  12,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
