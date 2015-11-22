#include <PICOL.h>

namespace PICOL {
  const uint8_t ViewerText[] = {
    48, 33, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   5,   6,   5,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  16,  37,  59,  76,  88,  96,  97,  96,  89,  78,  61,  39,  18,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  46,  83, 110, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 112,  88,  51,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  60, 105, 125, 127, 127, 127, 127, 127, 126, 123, 121, 123, 125, 127, 127, 127, 127, 127, 126, 109,  67,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  55, 106, 127, 127, 127, 127, 117,  97,  74,  55,  40,  34,  30,  33,  39,  53,  71,  93, 115, 126, 127, 127, 127, 111,  62,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  31,  93, 125, 127, 127, 122,  97,  57,  24,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  21,  51,  91, 120, 127, 127, 127,  98,  36,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   5,  55, 115, 127, 127, 124,  91,  40,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  34,  84, 121, 127, 127, 118,  62,   7,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  11,  75, 124, 127, 127, 106,  50,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  41,  99, 127, 127, 125,  83,  15,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  17,  88, 127, 127, 125,  83,  20,   0,   0,   0,   2,  49,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  63,  54,   6,   0,   0,   0,  14,  73, 122, 127, 127,  94,  21,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  18,  94, 127, 127, 120,  62,   7,   0,   0,   0,   0,   5, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  13,   0,   0,   0,   0,   3,  51, 115, 127, 127, 100,  24,   0,   0,   0,   0,   0, 
      0,   0,   0,  17,  94, 127, 127, 118,  49,   2,   0,   0,   0,   0,   0,   5,  99, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  13,   0,   0,   0,   0,   0,   0,  37, 110, 127, 127, 100,  21,   0,   0,   0,   0, 
      0,   0,  11,  88, 127, 127, 117,  47,   1,   0,   0,   0,   0,   0,   0,   2,  47,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  52,   6,   0,   0,   0,   0,   0,   0,   0,  34, 110, 127, 127,  95,  16,   0,   0,   0, 
      0,   6,  77, 127, 127, 120,  49,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  37, 114, 127, 127,  85,   8,   0,   0, 
      1,  57, 124, 127, 124,  61,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 121, 127, 126,  66,   2,   0, 
     40, 116, 127, 127,  81,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  59,  77,  77,  77,  77,  77,  77,  77,  77,  77,  77,  77,  77,  77,  65,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  68, 126, 127, 120,  42,   0, 
    107, 127, 127, 111,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  99, 127, 127, 103,  15, 
     81, 126, 127, 116,  32,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  97, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 108,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20, 108, 127, 127,  91,  10, 
     15,  97, 127, 127,  98,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  37,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  48,  41,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  86, 127, 127, 112,  27,   0, 
      0,  29, 112, 127, 127,  82,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  68, 125, 127, 121,  47,   0,   0, 
      0,   0,  46, 120, 127, 125,  70,   5,   0,   0,   0,   0,   0,   0,   0,   0,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  58, 122, 127, 125,  65,   3,   0,   0, 
      0,   0,   2,  58, 122, 127, 124,  68,   6,   0,   0,   0,   0,   0,   0,   3,  70,  91,  91,  91,  91,  91,  91,  91,  91,  91,  47,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  54, 121, 127, 126,  76,   6,   0,   0,   0, 
      0,   0,   0,   3,  64, 124, 127, 125,  73,   9,   0,   0,   0,   0,   0,   5, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127,  67,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  61, 121, 127, 127,  82,   9,   0,   0,   0,   0, 
      0,   0,   0,   0,   5,  64, 122, 127, 126,  86,  19,   0,   0,   0,   0,   5,  95, 123, 123, 123, 123, 123, 123, 123, 123, 123,  63,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  75, 124, 127, 126,  80,  11,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   3,  57, 119, 127, 127, 104,  41,   3,   0,   0,   1,  26,  34,  34,  34,  34,  34,  34,  34,  34,  34,  17,   0,   0,   0,   0,   0,   0,   0,   1,  32,  96, 127, 127, 124,  73,   8,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   1,  44, 110, 127, 127, 120,  76,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  67, 116, 127, 127, 118,  59,   5,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  27,  92, 126, 127, 127, 112,  68,  24,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  20,  61, 107, 127, 127, 127, 103,  38,   1,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  63, 114, 127, 127, 127, 116,  86,  50,  23,   8,   1,   0,   0,   0,   0,   0,   1,   7,  20,  45,  80, 112, 127, 127, 127, 120,  75,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27,  81, 119, 127, 127, 127, 127, 116, 101,  84,  71,  63,  58,  62,  69,  82,  99, 114, 126, 127, 127, 127, 123,  90,  36,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  33,  78, 113, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 117,  86,  41,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  21,  54,  86, 109, 121, 126, 127, 127, 127, 127, 127, 127, 122, 112,  91,  59,  25,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  15,  30,  46,  59,  68,  69,  69,  61,  48,  33,  17,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
