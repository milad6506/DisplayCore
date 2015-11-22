#include <PICOL.h>

namespace PICOL {
  const uint8_t GroupHalfRemove[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   7,  18,  16,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  13,  19,  11,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   3,  46,  96, 113, 112,  90,  36,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  19,  75, 108, 114, 105,  66,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   1,  58, 122, 127, 127, 127, 127, 117,  43,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18,  99, 127, 127, 127, 127, 127,  87,  10,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  24, 114, 127, 127, 127, 127, 127, 127, 103,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  72, 127, 127, 127, 127, 127, 127, 126,  55,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  54, 127, 127, 127, 127, 127, 127, 127, 123,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10, 104, 127, 127, 127, 127, 127, 127, 127,  90,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 126,  45,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 111, 127, 127, 127, 127, 127, 127, 127,  98,   6,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  48, 126, 127, 127, 127, 127, 127, 127, 121,  31,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8, 100, 127, 127, 127, 127, 127, 127, 127,  84,   2,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  16, 106, 127, 127, 127, 127, 127, 127,  92,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60, 126, 127, 127, 127, 127, 127, 122,  43,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  40, 112, 127, 127, 127, 127, 104,  27,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  81, 125, 127, 127, 127, 122,  67,   4,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  26,  72,  93,  92,  65,  19,   0,   0,   0,   0,   0,   0,   3,  20,  33,  26,   8,   0,   0,   0,   0,   0,   0,   8,  50,  86,  95,  82,  41,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   1,   4,   4,   0,   0,   0,   0,   0,   0,   0,  17,  78, 115, 123, 119,  95,  35,   0,   0,   0,   0,   0,   0,   0,   2,   5,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  92, 127, 127, 127, 127, 127, 113,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  11,  33,  40,  40,  40,  40,  40,  40,  40,  40,  40,  40,  19,   0,   0,  54, 126, 127, 127, 127, 127, 127, 127,  87,   4,   0,   8,  38,  40,  40,  40,  40,  40,  40,  40,  40,  40,  39,  21,   2,   0,   0,   0,   0, 
      0,  27,  98, 123, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125,  54,   0,   2,  84, 127, 127, 127, 127, 127, 127, 127, 113,  18,   0,  23, 115, 126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 114,  50,   0,   0,   0,   0, 
      3,  83, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  52,   0,   3,  89, 127, 127, 127, 127, 127, 127, 127, 115,  21,   0,  21, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  17,   0,   0,   0, 
     11, 104, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  65,   0,   0,  71, 127, 127, 127, 127, 127, 127, 127, 102,  10,   0,  30, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  33,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,   5,   0,  28, 115, 127, 127, 127, 127, 127, 126,  58,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  35,   0,   1,  47, 114, 127, 127, 127, 122,  74,   8,   0,  12, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119, 101,  54,   1,   0,   1,  24,  62,  80,  71,  38,   5,   0,   0,  31, 102, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  78,  29,   8,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  34,  77, 110, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 123,  56,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  84, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127,  82,   4,   0,   2,  28,  54,  59,  59,  59,  59,  59,  59,  58,  67, 111, 127, 127, 127, 126, 118, 105,  97,  97, 106, 119, 127, 127, 127, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 124,  39,   0,   1,  57, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  99,  56,  25,  10,   4,   5,  11,  27,  60, 103, 126, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 114,  18,   0,  18, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  57,  10,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 118, 127, 127, 125,  48,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 107,  12,   0,  30, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 108,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  44, 114, 127, 127, 103,  17,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 105,  11,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 116,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46, 120, 127, 127,  69,   1,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 105,  11,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127, 126,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  71, 127, 127, 113,  21,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 105,  11,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127, 102,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20, 111, 127, 127,  57,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 105,  11,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127,  61,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  74, 127, 127,  89,   4, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 105,  11,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 121,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42, 125, 127, 109,  16, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 105,  11,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 110,  15,   0,  31,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  73,  72,  25,   0,  24, 117, 127, 117,  27, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 105,  11,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 103,   9,   0,  54, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  44,   0,  16, 112, 127, 121,  34, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 105,  11,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 103,   9,   0,  54, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  44,   0,  17, 113, 127, 120,  33, 
      5,  45,  54,  53,  53,  53,  53,  53,  54,  44,   5,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 113,  17,   0,  22,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  52,  18,   0,  26, 119, 127, 116,  25, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 123,  36,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  47, 126, 127, 105,  13, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127,  70,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  82, 127, 127,  84,   2, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127, 109,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 116, 127, 126,  50,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127,  73,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  84, 127, 127, 106,  15,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  51,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  62, 125, 127, 126,  57,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  52,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  62, 121, 127, 127,  92,  10,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  77,  22,   1,   0,   0,   0,   0,   0,   0,   2,  27,  85, 124, 127, 127, 107,  25,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30, 118, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 127, 127, 127, 113,  78,  44,  25,  17,  17,  27,  48,  82, 116, 127, 127, 127, 107,  32,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  32,  34,  34,  34,  34,  34,  34,  34,  34,  33,  43,  98, 127, 127, 127, 127, 125, 118, 114, 114, 119, 126, 127, 127, 127, 126,  93,  25,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 111, 126, 127, 127, 127, 127, 127, 127, 127, 127, 126, 107,  58,  10,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  19,  55,  88, 108, 118, 122, 121, 117, 107,  85,  50,  15,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  13,  23,  29,  28,  22,  12,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
