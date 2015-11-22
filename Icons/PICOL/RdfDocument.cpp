#include <PICOL.h>

namespace PICOL {
  const uint8_t RdfDocument[] = {
    36, 48, // width, height
     45,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  58,  16,   0,   0,   0,   0,   0,   0,   0,   0, 
     93, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  90,  16,   0,   0,   0,   0,   0,   0,   0, 
     93, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,  16,   0,   0,   0,   0,   0,   0, 
     93, 127, 126,  82,  60,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61, 101, 127, 127, 127, 127, 127,  92,  17,   0,   0,   0,   0,   0, 
     93, 127, 125,  41,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  76, 127, 125,  89, 118, 127, 127,  93,  17,   0,   0,   0,   0, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 125,  42,  48, 119, 127, 127,  93,  18,   0,   0,   0, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 125,  41,   1,  49, 118, 127, 127,  94,  18,   0,   0, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 125,  41,   0,   0,  48, 117, 127, 127,  95,  19,   0, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 125,  48,  10,  10,  11,  58, 121, 127, 127,  86,   6, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127, 111, 103, 103, 103, 104, 122, 127, 127, 104,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  78, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67, 111, 111, 111, 111, 111, 111, 111, 113, 125, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  16,  15,  15,  15,  15,  15,  15,  31, 114, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17, 112, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  14,  27,  24,   8,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  63, 108, 120, 118,  96,  40,   1,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  73, 126, 127, 127, 127, 127, 117,  40,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 121, 127, 127, 127, 127, 127, 127,  96,   8,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58, 127, 127, 127, 127, 127, 127, 127, 117,  23,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  82, 127, 127, 127, 127, 127, 127, 127, 119,  26,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  52, 100, 125, 127, 127, 127, 127, 127, 127, 127, 105,  12,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   1,  12,  18,  10,   0,   0,   0,  12,  53, 101, 126, 127, 127, 127, 127, 127, 127, 127, 127, 124,  56,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,  17,  72, 106, 113, 103,  64,  23,  54, 102, 126, 127, 127, 126, 102,  59,  85, 122, 127, 127, 115,  62,   5,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,  15,  96, 127, 127, 127, 127, 127, 115, 126, 127, 127, 126, 103,  55,  13,   0,   6,  85, 127, 125,  51,   1,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,  66, 127, 127, 127, 127, 127, 127, 127, 127, 126, 102,  54,  13,   0,   0,   0,   0,  77, 127, 125,  41,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   7,  98, 127, 127, 127, 127, 127, 127, 127, 114,  53,  12,   0,   0,   0,   0,   0,   0,  77, 127, 125,  42,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,  10, 104, 127, 127, 127, 127, 127, 127, 127, 100,  12,   0,   0,   0,   0,   0,   0,   0,  77, 127, 125,  42,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   3,  86, 127, 127, 127, 127, 127, 127, 127, 125, 100,  52,  12,   0,   0,   0,   0,   0,  77, 127, 125,  42,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,  40, 120, 127, 127, 127, 127, 127, 127, 127, 127, 126, 101,  52,  12,   0,   0,   0,  77, 127, 125,  41,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   2,  55, 114, 127, 127, 127, 109,  72, 101, 126, 127, 127, 126, 101,  53,  15,  37, 104, 127, 127,  82,  19,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   1,  24,  57,  68,  53,  19,   0,  12,  53, 101, 126, 127, 127, 126, 108, 119, 127, 127, 127, 127, 103,  24,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  12,  52, 100, 125, 127, 127, 127, 127, 127, 127, 127, 127,  85,   4,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  51, 107, 127, 127, 127, 127, 127, 127, 127, 115,  20,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66, 127, 127, 127, 127, 127, 127, 127, 119,  27,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 126, 127, 127, 127, 127, 127, 127, 111,  16,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 104, 127, 127, 127, 127, 127, 127,  72,   2,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36, 108, 127, 127, 127, 125,  86,  14,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  60,  80,  76,  47,   8,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17, 113, 127, 103,  11, 
     93, 127, 125,  43,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  19, 113, 127, 103,  11, 
     93, 127, 127,  98,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  84,  90, 122, 127, 103,  11, 
     94, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,  11, 
     91, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 101,  10, 
     28,  39,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  39,  31,   3, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
