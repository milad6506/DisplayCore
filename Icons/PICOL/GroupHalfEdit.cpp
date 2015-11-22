#include <PICOL.h>

namespace PICOL {
  const uint8_t GroupHalfEdit[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   7,  43,  75,  82,  65,  25,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  63,  82,  77,  46,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  11,  80, 124, 127, 127, 127, 113,  45,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 111, 127, 127, 127, 125,  86,  14,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  66, 127, 127, 127, 127, 127, 127, 113,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21, 109, 127, 127, 127, 127, 127, 127,  73,   2,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  14, 107, 127, 127, 127, 127, 127, 127, 127,  65,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58, 127, 127, 127, 127, 127, 127, 127, 112,  18,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  25, 119, 127, 127, 127, 127, 127, 127, 127,  84,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  78, 127, 127, 127, 127, 127, 127, 127, 122,  31,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  21, 115, 127, 127, 127, 127, 127, 127, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  71, 127, 127, 127, 127, 127, 127, 127, 119,  26,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   6,  92, 127, 127, 127, 127, 127, 127, 125,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 123, 127, 127, 127, 127, 127, 127,  97,   8,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  35, 114, 127, 127, 127, 127, 127,  86,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  79, 127, 127, 127, 127, 127, 117,  41,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   1,  36,  95, 118, 122, 112,  72,  13,   0,   0,   0,   0,   0,   0,   1,   5,   5,   1,   0,   0,   0,   0,   0,   0,  11,  68, 111, 121, 119,  97,  40,   1,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   7,  24,  30,  17,   2,   0,   0,   0,   0,   0,   0,  23,  70,  96,  97,  73,  26,   0,   0,   0,   0,   0,   0,   2,  16,  29,  25,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33, 109, 127, 127, 127, 127, 111,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   4,  10,  11,  11,  11,  11,  11,  11,  11,  11,  11,   9,   1,   0,  10,  98, 127, 127, 127, 127, 127, 127, 103,  13,   0,   0,   8,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,   6,   0,   0,   0,   0,   0, 
      0,   1,  41,  91, 107, 108, 108, 108, 108, 108, 108, 108, 108, 110,  83,   5,   0,  37, 123, 127, 127, 127, 127, 127, 127, 125,  42,   0,   3,  78, 110, 108, 108, 108, 108, 108, 108, 108, 108, 107,  95,  47,   2,   0,   0,   0, 
      0,  31, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,   3,   0,  50, 127, 127, 127, 127, 127, 127, 127, 127,  56,   0,   1,  84, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  33,   0,   0,   0, 
      0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  96,   5,   0,  40, 125, 127, 127, 127, 127, 127, 127, 126,  46,   0,   3,  90, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  68,   0,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 112,  18,   0,  15, 105, 127, 127, 127, 127, 127, 127, 110,  19,   0,  14, 108, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   0,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  52,   0,   0,  45, 117, 127, 127, 127, 127, 120,  51,   0,   0,  45, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   0,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  93,   9,   0,   1,  36,  89, 110, 111,  91,  40,   2,   0,   7,  86, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   0,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  82,  43,  23,   4,   0,   0,   0,   4,  15,  15,   5,   0,   0,   3,  29,  80, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   0,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  41,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  28,  81, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  78,   0,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 121,  43,   0,   0,   2,  15,  21,  21,  21,  21,  21,  21,  21,  22,  59, 115, 127, 127, 127, 127, 126, 123, 121, 124, 127, 127, 127, 127, 127, 127, 127, 127,  78,   0,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  91,   5,   0,  10,  71, 110, 116, 115, 115, 115, 115, 115, 115, 116, 125, 127, 127, 125, 106,  73,  46,  34,  31,  37,  55,  85, 116, 127, 127, 127, 127, 127,  78,   0,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  61,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  55,  13,   0,   0,   0,   0,   0,   0,   3,  26,  78, 121, 127, 127, 127,  80,   1,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  47,   0,   4,  93, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  95,  24,   0,   0,   0,   0,   0,   0,   0,   4,   9,   0,   3,  48, 115, 127, 127, 111,  25,   0,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   7,  99, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  95,  17,   0,   0,   0,   0,   0,   0,   0,   3,  60,  91,  20,   0,   0,  43, 117, 127, 127,  84,   5,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 112,  26,   0,   0,   0,   0,   0,   0,   0,   3,  59, 122, 127,  96,  19,   0,   1,  60, 126, 127, 121,  37,   0, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127,  60,   0,   0,   0,   0,   0,   0,   0,   3,  58, 122, 127, 127, 127,  96,  19,   0,  10,  97, 127, 127,  82,   3, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 110,  17,   0,   0,   0,   0,   0,   0,   3,  58, 122, 127, 127, 127, 127, 127,  96,  20,   0,  50, 126, 127, 111,  20, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127,  79,   1,   0,   0,   0,   0,   0,   3,  58, 121, 127, 127, 127, 127, 127, 127, 124,  51,   0,  18, 112, 127, 123,  44, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127,  54,   0,   0,   0,   0,   0,   2,  57, 121, 127, 127, 127, 127, 127, 127, 124,  69,   6,   0,   5,  94, 127, 127,  64, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 125,  41,   0,   0,   0,   0,   2,  58, 121, 127, 127, 127, 127, 127, 127, 124,  69,   5,   0,   0,   0,  81, 127, 127,  76, 
      0,  69, 127, 127, 127, 127, 127, 127, 127, 127,  42,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 125,  38,   0,   0,   0,   0,   8,  91, 127, 127, 127, 127, 127, 127, 124,  69,   5,   0,   0,   0,   0,  78, 127, 127,  77, 
      0,  49,  91,  90,  90,  90,  90,  90,  90,  89,  30,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 126,  45,   0,   0,   0,  11,   1,  20,  97, 127, 127, 127, 127, 124,  69,   6,   0,   0,   0,   0,   2,  86, 127, 127,  72, 
      0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   0,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127,  64,   0,   0,   1,  65,  42,   0,  20,  97, 127, 127, 125,  70,   6,   0,   0,   0,   0,   0,   9, 102, 127, 126,  55, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127,  94,   6,   0,   0,  79, 116,  40,   0,  20,  98, 125,  70,   6,   0,   0,   0,   0,   0,   0,  31, 120, 127, 119,  32, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 120,  33,   0,   0,  78, 127, 114,  40,   0,  22,  54,   7,   0,   0,   0,   0,   0,   0,   1,  71, 127, 127,  99,  10, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127,  86,   6,   0,  74, 123, 122, 108,  35,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 114, 127, 127,  62,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  56,   1,  18,  30,  30,  31,  20,   0,   0,   0,   0,   0,   0,   0,   0,  11,  91, 127, 127, 109,  19,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  49,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  81, 127, 127, 125,  56,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  66,  12,   0,   0,   0,   0,   0,   0,   0,   0,   1,  27,  91, 126, 127, 127,  82,   7,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 101,  54,  20,   6,   1,   1,   2,  10,  30,  72, 115, 127, 127, 127,  92,  15,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  61,  79,  78,  78,  78,  78,  78,  78,  78,  78,  79, 107, 127, 127, 127, 126, 114,  97,  83,  80,  87, 103, 120, 127, 127, 127, 125,  83,  15,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  21,  80, 120, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  57,   7,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  34,  80, 111, 124, 127, 127, 127, 127, 127, 120, 101,  63,  20,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  16,  37,  56,  67,  69,  63,  49,  28,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
