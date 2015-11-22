#include <PICOL.h>

namespace PICOL {
  const uint8_t SizeHeightSecurity[] = {
    36, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  28,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  82, 110,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  83, 127, 127, 113,  39,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  12,  84, 127, 127, 127, 127, 113,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  12,  85, 127, 127, 127, 127, 127, 127, 114,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  13,  85, 127, 127, 127, 127, 127, 127, 127, 127, 114,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  13,  86, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  14,  87, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  43,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  11,  81, 121, 121, 121, 121, 125, 127, 127, 127, 127, 127, 122, 121, 121, 122, 109,  38,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   9,  29,  29,  29,  29,  30,  93, 127, 127, 127, 127, 122,  51,  29,  29,  29,  30,  21,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  82, 127, 127, 127, 127, 120,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      8,  21,  21,  21,  21,  21,  21,  21,  22,  91, 127, 127, 127, 127, 121,  45,  21,  21,  21,  21,  21,  21,  21,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     42, 113, 116, 116, 116, 116, 116, 116, 116, 123, 127, 127, 127, 127, 127, 118, 116, 116, 116, 116, 116, 116, 116,  83,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     47, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  92,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127, 118, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 109, 126, 127,  91,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127,  81,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,   8,  35, 121, 127,  91,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 120, 127,  91,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 120, 127,  91,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28, 120, 127,  91,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  27, 120, 127,  91,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  29,  63, 123, 127, 105,  43,  22,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  27,  70, 104, 120, 126, 127, 127, 127, 125, 116,  93,  53,  13,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  70, 116, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 102,  45,   3,   0,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,   0,  28,  98, 127, 127, 127, 126, 113,  93,  79,  77,  84, 101, 119, 127, 127, 127, 122,  72,   9,   0,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,   0,  29, 107, 127, 127, 126,  99,  51,  18,   5,   0,   0,   1,   9,  29,  70, 114, 127, 127, 126,  79,   9,   0,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   0,  18, 102, 127, 127, 120,  65,  11,   0,   0,   0,   2,   3,   0,   0,   0,   0,  28,  92, 127, 127, 126,  69,   3,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,   4,  79, 127, 127, 119,  49,   2,   0,   0,  14,  58,  86,  90,  79,  41,   4,   0,   0,  12,  83, 127, 127, 121,  41,   0,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   0,  37, 121, 127, 125,  60,   1,   0,   0,  21,  98, 127, 127, 127, 127, 122,  68,   4,   0,   0,  13,  96, 127, 127,  97,   9,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,   3,  85, 127, 127,  91,   7,   0,   0,   3,  80, 127, 127, 125, 121, 127, 127, 122,  38,   0,   0,   0,  33, 118, 127, 124,  43,   0, 
     46, 124, 127,  78,   0,   0,   0,   0,   0,  21, 115, 127, 123,  40,   0,   0,   0,  19, 114, 127, 118,  52,  31,  81, 127, 127,  78,   1,   0,   0,   2,  81, 127, 127,  82,   2, 
     46, 124, 127,  77,   0,   0,   0,   0,   0,  45, 126, 127, 103,  10,   0,   0,   0,  34, 123, 127,  91,   1,   0,  28, 120, 127,  97,   5,   0,   0,   0,  41, 124, 127, 107,  15, 
     46, 124, 127,  85,  20,  20,  20,  20,  20,  75, 127, 127,  78,   0,   0,   0,   9,  53, 125, 127,  88,  20,  19,  38, 118, 127, 105,  25,   3,   0,   0,  18, 113, 127, 118,  29, 
     46, 124, 127, 122, 114, 114, 114, 114, 114, 122, 127, 127,  62,   0,   0,   0,  56, 118, 127, 127, 122, 114, 114, 117, 126, 127, 125, 106,  22,   0,   0,   8, 103, 127, 123,  41, 
     47, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  56,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  24,   0,   0,   6,  99, 127, 124,  45, 
     36,  97,  99,  99,  99,  99,  99,  99,  99, 117, 127, 127,  65,   0,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  24,   0,   0,  10, 106, 127, 123,  38, 
      2,   6,   7,   7,   7,   7,   7,   7,   7,  86, 127, 127,  83,   1,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  24,   0,   0,  23, 116, 127, 116,  27, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,  82, 127, 127, 108,  14,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  24,   0,   0,  50, 126, 127, 102,  11, 
      0,   0,   0,  15,  51,  53,  53,  53,  53, 102, 127, 127, 125,  52,   0,   0,  63, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  24,   0,   6,  92, 127, 127,  73,   1, 
      0,   0,   0,   8,  74, 126, 127, 127, 127, 127, 127, 127, 127, 103,  15,   0,  59, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 111,  23,   0,  47, 123, 127, 121,  34,   0, 
      0,   0,   0,   0,   7,  73, 125, 127, 127, 127, 127, 127, 127, 127,  77,   6,  13,  28,  28,  28,  28,  28,  28,  28,  28,  28,  28,  26,   4,  25, 109, 127, 127,  85,   5,   0, 
      0,   0,   0,   0,   0,   7,  73, 125, 127, 127, 127, 127, 127, 127, 124,  71,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25, 100, 127, 127, 114,  28,   0,   0, 
      0,   0,   0,   0,   0,   0,   6,  72, 125, 127, 127, 127, 127, 127, 127, 126,  87,  27,   1,   0,   0,   0,   0,   0,   0,   0,   7,  48, 109, 127, 127, 122,  52,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   6,  71, 125, 127, 127, 127, 127, 127, 127, 127, 115,  76,  39,  17,   8,   7,  11,  24,  52,  93, 124, 127, 127, 121,  60,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   6,  70, 125, 127, 127, 127, 117, 123, 127, 127, 127, 124, 112, 103, 101, 106, 117, 127, 127, 127, 127, 112,  50,   3,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  70, 124, 127, 105,  33,  45, 100, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  82,  26,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  70, 101,  28,   0,   0,  11,  46,  83, 106, 118, 123, 124, 122, 115,  99,  69,  31,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  15,   0,   0,   0,   0,   0,   2,  12,  24,  33,  36,  30,  20,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};