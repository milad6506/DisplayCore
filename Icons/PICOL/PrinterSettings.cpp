#include <PICOL.h>

namespace PICOL {
  const uint8_t PrinterSettings[] = {
    46, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   3,  19,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,  21,   9,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  18, 105, 117, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116,  49,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 123, 107, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 118, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 107,  21,  10,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  11,  81, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  12,  29,  43,  49,  48,  94, 127, 127,  54,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  35,  76, 106, 120, 126, 127, 127, 127, 127, 127,  88,  29,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  20, 115, 127, 105,  11,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  85, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 118,  78,  21,   0,   0,   0,   0,   0,   0, 
      6,  49,  59,  59,  59,  58,  69, 121, 127, 116,  65,  58,  59,  59,  59,  59,  59,  59,  59,  59,  59,  59,  58,  67, 112, 127, 127, 127, 126, 118, 105,  97,  97, 106, 119, 127, 127, 127, 127, 107,  64,  56,  16,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  99,  56,  25,  10,   4,   5,  11,  27,  60, 103, 126, 127, 127, 127, 123,  35,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  57,  10,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 118, 127, 127, 125,  48,   0,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 108,  35,   0,   0,   0,   0,  32,  61,  61,  28,   0,   0,   0,   1,  44, 114, 127, 127, 103,  17,   0,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 116,  36,   0,   0,  16,  10,   0,  67, 127, 127,  58,   0,  11,  18,   0,   0,  46, 120, 127, 127,  69,   1,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  60,   0,   0,  24, 100,  82,  12,  72, 127, 127,  64,  12,  83, 103,  27,   0,   2,  71, 127, 127, 113,  21,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 102,  12,   0,  15, 100, 127, 125, 103, 117, 127, 127, 114, 102, 126, 127, 101,  14,   0,  20, 111, 127, 127,  57,   0, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  61,   0,   0,   6,  72, 125, 127, 127, 127, 127, 127, 127, 127, 127, 124,  70,   6,   0,   0,  74, 127, 127,  89,   4, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 121,  30,   0,   0,   0,   9,  98, 127, 127, 121,  97,  99, 123, 127, 127,  92,   7,   0,   0,   0,  42, 125, 127, 109,  16, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 110,  15,   0,  31,  73,  76, 116, 127, 122,  52,   5,   7,  62, 125, 127, 113,  80,  78,  27,   0,  24, 117, 127, 117,  27, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,   9,   0,  54, 127, 127, 127, 127, 101,   8,   0,   0,  14, 109, 127, 127, 127, 126,  44,   0,  16, 112, 127, 121,  34, 
     12, 107, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,   9,   0,  54, 127, 127, 127, 127, 104,  12,   0,   0,  19, 112, 127, 127, 127, 126,  44,   0,  17, 113, 127, 120,  33, 
     12, 107, 127, 127, 127, 127, 127, 127, 127,  87,  52,  53,  53,  53,  53,  53,  53,  52,  70, 123, 127, 113,  17,   0,  22,  53,  57, 110, 127, 125,  70,  16,  20,  79, 127, 127, 104,  55,  52,  18,   0,  26, 119, 127, 116,  25, 
     12, 107, 127, 127, 127, 127, 127, 127, 113,  24,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 123,  36,   0,   0,   0,  11,  98, 127, 127, 125, 112, 114, 126, 127, 127,  92,   9,   0,   0,   0,  47, 126, 127, 105,  13, 
     12, 106, 127, 126, 126, 127, 127, 127,  68,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  94, 127, 127,  70,   0,   0,   8,  81, 126, 127, 127, 127, 127, 127, 127, 127, 127, 126,  79,   8,   0,   2,  82, 127, 127,  84,   2, 
      4,  37,  45,  44,  89, 127, 127, 109,  19,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  61, 127, 127, 109,  19,   0,  12,  94, 127, 124,  89, 108, 127, 127, 104,  89, 125, 127,  97,  13,   0,  28, 116, 127, 126,  50,   0, 
      0,   0,   0,  15, 104, 127, 127,  60,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22, 113, 127, 127,  73,   3,   0,  19,  93,  73,   6,  68, 127, 127,  59,   6,  75,  96,  21,   0,   6,  84, 127, 127, 106,  15,   0, 
      0,   0,   0,  62, 127, 127, 106,  18,   3,   4,   4,   4,   4,   4,   4,   4,   4,   4,   3,   4,  71, 127, 127, 122,  51,   1,   0,  11,   6,   0,  66, 127, 127,  58,   0,   7,  13,   0,   2,  62, 125, 127, 126,  57,   0,   0, 
      0,   0,  19, 109, 127, 127, 114,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91, 101, 126, 127, 127, 118,  52,   4,   0,   0,   0,  22,  43,  43,  19,   0,   0,   0,   6,  62, 121, 127, 127,  92,  10,   0,   0, 
      0,   0,  69, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  77,  22,   1,   0,   0,   0,   0,   0,   0,   2,  27,  85, 124, 127, 127, 107,  25,   0,   0,   0, 
      0,  22, 111, 125, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 127, 127, 127, 113,  78,  44,  25,  17,  17,  27,  48,  82, 116, 127, 127, 127, 107,  32,   0,   0,   0,   0, 
      0,  12,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  33,  43,  98, 127, 127, 127, 127, 125, 118, 114, 114, 119, 126, 127, 127, 127, 126,  93,  25,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13,  64, 111, 126, 127, 127, 127, 127, 127, 127, 127, 127, 126, 107,  58,  10,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  19,  55,  88, 108, 118, 122, 121, 117, 107,  85,  50,  15,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,  13,  23,  29,  28,  22,  12,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
