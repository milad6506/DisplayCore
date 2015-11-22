#include <PICOL.h>

namespace PICOL {
  const uint8_t Buy[] = {
    48, 46, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  23,  35,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  36,  34,  27,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  83, 113, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 121, 116, 103,  69,  21,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 100, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  41,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66, 127, 127, 120, 101,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99, 105, 121, 127, 127, 115,  35,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   2,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   9,  96, 127, 124,  51,   9,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,  11,  37, 101, 127, 127,  96,   9,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   9,  51,  84,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  93,  95, 120, 127, 121,  30,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 115, 127, 123,  33,   0,   0,   0,   0,   0, 
      0,   0,   0,  12,  87, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  50,  44,  44,  44,  44,  44,  44,  44,  44,  44,  37,   4,   0,   0,   0,   1,  77, 127, 127,  75,  44,  44,  44,  42,  12, 
      0,   0,   1,  66, 127, 127, 127, 124, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 126, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 107,  11,   0,   0,   0,   0,  47, 126, 127, 126, 126, 126, 126, 121,  35, 
      0,   0,  11, 105, 127, 122,  69,  34,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  31,  59, 117, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  13,   0,   0,   0,   0,  35, 126, 127, 127, 127, 127, 127, 124,  36, 
      0,   0,  20, 116, 127, 109,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,  68,  81,  81,  81,  81,  81,  81,  81,  82, 114, 127, 123,  51,   1,   0,   0,   0,  21,  79,  81,  81,  81,  81,  81,  78,  23, 
      0,   0,  10, 105, 127, 118,  42,  11,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   6,   1,   1,   1,   1,   1,   1,   1,   1,   1,  67, 127, 127, 119,  73,  33,  16,   4,   0,   1,   1,   1,   1,   1,   1,   1,   0, 
      0,  14,  61, 112, 127, 127, 120, 106, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104,  98,  23,   0,   0,   0,   0,   0,   0,   0,   0,  19, 103, 127, 127, 127, 122, 110,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     17,  93, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,  91, 124, 127, 127, 127,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     76, 127, 127, 126, 118, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 110,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  43,  81, 103, 113,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    117, 127, 122,  61,  24,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  22,  20,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  10,  18,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 112,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    116, 127, 122,  57,  19,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,  16,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     70, 125, 127, 125, 115, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 112, 106,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     26, 114, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  29,   0,   0,   0,   0,   0,   8,  41,  66,  65,  41,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     75, 125, 127, 123, 111, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 103,  24,   0,   0,   0,   0,  19,  89, 124, 127, 127, 124,  89,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    118, 127, 121,  51,  15,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  14,  13,   3,   0,   0,   0,   7,  87, 127, 127, 127, 127, 127, 127,  86,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    127, 127, 112,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35, 122, 127, 127, 127, 127, 127, 127, 122,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
    116, 127, 123,  68,  30,  27,  27,  27,  27,  27,  27,  27,  27,  27,  27,  27,  27,  27,  27,  27,  18,   0,   0,  55, 127, 127, 127, 127, 127, 127, 127, 127,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     72, 127, 127, 127, 121, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119,  79,   0,   0,  52, 127, 127, 127, 127, 127, 127, 127, 127,  50,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     13,  85, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  86,   0,   0,  26, 118, 127, 127, 127, 127, 127, 127, 117,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,  10,  54, 110, 127, 127, 117, 100,  98,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  99,  65,   0,   0,   3,  69, 126, 127, 127, 127, 127, 126,  68,   2,   0,   0,   0,   0,   1,  25,  36,  35,  35,  35,  35,  35,  35,  34,  10, 
      0,   0,  11, 106, 127, 117,  37,   7,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   6,   3,   1,   2,   0,   7,  64, 112, 124, 124, 111,  65,   8,   0,   0,   0,   0,   0,   2,  86, 123, 123, 123, 123, 123, 123, 123, 118,  35, 
      0,   0,  20, 116, 127, 110,  13,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  56,  85,  87,  63,  20,   0,  17,  35,  35,  16,   0,   0,   0,   0,   0,   0,   0,  11, 101, 127, 127, 127, 127, 127, 127, 127, 124,  36, 
      0,   0,  10, 103, 127, 124,  76,  46,  44,  45,  45,  45,  45,  45,  45,  45,  45,  44,  49,  97, 127, 127, 127, 127, 107,  55,  43,  43,  43,  43,  44,  45,  45,  45,  45,  44,  52,  90, 125, 127, 117,  91,  90,  90,  90,  90,  86,  25, 
      0,   0,   1,  62, 126, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 126,  64,   4,   3,   3,   3,   3,   3,   1, 
      0,   0,   0,  10,  81, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  67,   8,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   7,  43,  76,  88,  88,  88,  88,  88,  88,  88,  88,  88,  88, 103, 127, 127, 127, 127, 127, 127, 127, 127, 109,  88,  88,  88,  88,  88,  88,  88,  88,  87,  78,  57,  25,   1,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  38, 124, 127, 127, 127, 127, 127, 127, 127,  58,   1,   1,   1,   1,   1,   1,   1,   1,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14, 105, 127, 127, 127, 127, 127, 127, 118,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  46, 118, 127, 127, 127, 127, 124,  64,   2,   0,   4,  29,  49,  48,  26,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  40,  93, 115, 116, 100,  53,   5,   0,  14,  80, 119, 127, 127, 117,  72,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  20,  21,   9,   0,   0,   6,  82, 127, 127, 127, 127, 127, 127,  71,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35, 122, 127, 127, 127, 127, 127, 127, 117,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  59, 127, 127, 127, 127, 127, 127, 127, 126,  46,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127,  47,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 123, 127, 127, 127, 127, 127, 127, 118,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  85, 127, 127, 127, 127, 127, 127,  74,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  16,  84, 121, 127, 127, 119,  76,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  32,  54,  52,  29,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};