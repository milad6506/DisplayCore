#include <PICOL.h>

namespace PICOL {
  const uint8_t SizeBothCancel[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  33,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  53, 117,  69,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  53, 120, 127, 124,  69,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  52, 120, 127, 127, 127, 124,  68,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  51, 119, 127, 127, 127, 127, 127, 124,  67,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  50, 119, 127, 127, 127, 127, 127, 127, 127, 124,  66,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  49, 119, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  65,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  49, 118, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  65,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42, 112, 122, 121, 121, 123, 127, 127, 127, 127, 127, 124, 121, 121, 122, 118,  57,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  22,  30,  29,  29,  28,  57, 125, 127, 127, 127, 127,  71,  28,  29,  29,  30,  25,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 124, 127, 127, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15,  22,  21,  21,  21,  21,  21,  20,  51, 124, 127, 127, 127, 127,  66,  19,  21,  21,  21,  21,  21,  21,  18,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  82, 117, 116, 116, 116, 116, 116, 115, 119, 127, 127, 127, 127, 127, 121, 115, 116, 116, 116, 116, 116, 117,  97,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  90, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   1,   7,   0,   3,  90, 127, 126, 109, 103, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 106, 124, 127, 107,  12,   0,   6,   3,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  44,  54,   0,   3,  90, 127, 121,  35,   6,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   7,  22, 113, 127, 107,  12,   0,  40,  57,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  41, 116,  67,   0,   3,  90, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14, 112, 127, 107,  12,   0,  46, 120,  57,   2,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  41, 114, 127,  66,   0,   3,  90, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14, 112, 127, 107,  12,   0,  46, 127, 121,  56,   2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  40, 114, 127, 127,  66,   0,   3,  90, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14, 112, 127, 107,  12,   0,  46, 126, 127, 121,  55,   2,   0,   0,   0,   0, 
      0,   0,   0,  39, 113, 127, 127, 127,  66,   0,   3,  90, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14, 112, 127, 106,  12,   0,  45, 126, 127, 127, 121,  54,   2,   0,   0,   0, 
      0,   0,  38, 113, 127, 127, 127, 127,  95,  59,  61, 108, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  24,  53, 118, 127, 116,  66,  58,  84, 127, 127, 127, 127, 120,  53,   2,   0,   0, 
      0,  37, 113, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17,  58,  97, 118, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  53,   1,   0, 
     43, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  51, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  52,   2, 
     97, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,   0,  11,  77, 124, 127, 127, 127, 116,  97,  81,  76,  82,  98, 117, 127, 127, 127, 127, 127, 127, 127, 127, 100,  15, 
     26,  99, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  29,   0,   0,   0,   0,   0,   0,   0,  10,  83, 127, 127, 127, 109,  62,  24,   6,   1,   0,   1,   6,  25,  65, 112, 127, 127, 127, 127, 127, 110,  34,   0, 
      0,  23, 101, 127, 127, 127, 127, 127, 126, 126, 126, 127, 127, 121,  29,   0,   0,   0,   0,   0,   0,   3,  72, 127, 127, 125,  84,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23,  88, 126, 127, 127, 117,  36,   0,   0, 
      0,   0,  24, 101, 127, 127, 127, 127,  87,  43,  46, 103, 127, 121,  29,   0,   0,   0,   0,   0,   0,  42, 121, 127, 126,  75,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  10,  81, 127, 127, 119,  36,   0,   0, 
      0,   0,   0,  24, 102, 127, 127, 127,  66,   0,   3,  90, 127, 121,  29,   0,   0,   0,   0,   0,  10,  97, 127, 127,  89,   9,   0,   0,   1,  21,   6,   0,   0,   0,   8,  22,   1,   0,   0,  12,  94, 127, 127,  93,   7,   0, 
      0,   0,   0,   0,  25, 102, 127, 127,  66,   0,   3,  90, 127, 121,  29,   0,   0,   0,   0,   0,  43, 124, 127, 115,  27,   0,   0,   0,  39, 110,  67,   4,   0,   7,  73, 111,  38,   0,   0,   0,  32, 118, 127, 123,  38,   0, 
      0,   0,   0,   0,   0,  25, 103, 127,  66,   0,   3,  90, 127, 121,  29,   0,   0,   0,   0,   2,  81, 127, 127,  75,   1,   0,   0,  38, 113, 127, 124,  65,  11,  71, 125, 127, 112,  38,   0,   0,   2,  81, 127, 127,  75,   0, 
      0,   0,   0,   0,   0,   0,  26, 105,  67,   0,   3,  90, 127, 121,  29,   0,   0,   0,   0,  12, 106, 127, 123,  36,   0,   0,  12, 100, 127, 127, 127, 122, 100, 123, 127, 127, 127,  97,  10,   0,   0,  42, 125, 127, 101,  10, 
      0,   0,   0,   0,   0,   0,   0,  28,  44,   0,   3,  90, 127, 122,  44,  18,  20,  20,  18,  39, 119, 127, 110,  15,   0,   0,   1,  45, 117, 127, 127, 127, 127, 127, 127, 127, 113,  40,   0,   0,   0,  19, 114, 127, 115,  24, 
      0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   3,  90, 127, 127, 117, 114, 114, 114, 114, 117, 127, 127,  98,   6,   0,   0,   0,   0,  45, 116, 127, 127, 127, 127, 127, 113,  39,   0,   0,   0,   0,  10, 104, 127, 120,  33, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  91, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  95,   5,   0,   0,   0,   0,   7,  90, 127, 127, 127, 127, 127,  83,   4,   0,   0,   0,   0,   8, 101, 127, 121,  36, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,  70, 100,  99,  99,  99,  99,  99,  98, 107, 126, 127, 101,   8,   0,   0,   0,   5,  67, 124, 127, 127, 127, 127, 127, 122,  61,   3,   0,   0,   0,  11, 106, 127, 119,  32, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,   7,   7,   7,   7,   7,   7,   5,  41, 124, 127, 114,  19,   0,   0,   4,  67, 124, 127, 127, 127, 127, 127, 127, 127, 122,  61,   3,   0,   0,  23, 117, 127, 112,  20, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 124, 127, 125,  44,   0,   0,  12,  98, 127, 127, 127, 114,  76, 117, 127, 127, 127,  92,   9,   0,   0,  50, 126, 127,  96,   7, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  35,  54,  53,  53,  52,  74, 125, 127, 127,  86,   4,   0,   0,  24, 102, 127, 116,  43,   1,  49, 119, 127,  97,  20,   0,   0,   6,  92, 127, 127,  67,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 108, 127, 127, 127, 127, 127, 127, 127, 121,  40,   0,   0,   0,  26,  93,  45,   0,   0,   1,  51,  91,  21,   0,   0,   0,  45, 123, 127, 118,  29,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 109, 127, 127, 127, 127, 127, 127, 127, 103,  20,   0,   0,   0,   8,   2,   0,   0,   0,   2,   8,   0,   0,   0,  24, 106, 127, 127,  81,   3,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  33, 109, 127, 127, 127, 127, 127, 127, 127,  94,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23,  98, 127, 127, 111,  25,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 110, 127, 127, 127, 127, 127, 127, 127, 103,  41,   4,   0,   0,   0,   0,   0,   0,   0,   5,  44, 106, 127, 127, 121,  49,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  34, 110, 127, 127, 127, 127, 127, 127, 127, 121,  87,  46,  20,  10,   6,  10,  22,  48,  90, 122, 127, 127, 122,  59,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  35, 111, 127, 127, 127, 120, 118, 127, 127, 127, 125, 115, 105, 100, 105, 116, 125, 127, 127, 127, 113,  51,   3,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 111, 127, 118,  50,  30,  88, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  85,  28,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  37, 104,  51,   1,   0,   5,  35,  74, 102, 117, 123, 124, 122, 116, 102,  72,  33,   5,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  14,   3,   0,   0,   0,   0,   1,   9,  22,  31,  36,  31,  22,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};