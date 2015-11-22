#include <PICOL.h>

namespace PICOL {
  const uint8_t NetworkProtocol[] = {
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
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  23,  28,  19,   5,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  54,  99, 117, 121, 115,  90,  39,   2,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   9,  79, 125, 127, 127, 127, 127, 127, 120,  59,   2,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  63, 126, 127, 127, 127, 127, 127, 127, 127, 121,  40,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  17, 110, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,   5,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  40, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 114,  19,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  50, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  27,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  42, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  20,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 111, 127, 127, 127, 127, 127, 127, 127, 127, 127,  94,   6,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  13, 101, 127, 127, 127, 127, 127, 127, 127, 127, 123,  45,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  83, 126, 127, 127, 127, 127, 127, 127, 127, 123,  67,   4,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   0,   0,   0,   3,   2,   0,   0,  12,  84, 127, 127, 122,  87, 105, 122, 124, 120,  99,  49,   4,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   5,  38,  74,  89,  88,  66,  35,  84, 127, 127, 122,  60,   4,  13,  31,  37,  27,   9,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,  14,  81, 122, 127, 127, 127, 127, 122, 127, 127, 122,  59,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   7,  84, 127, 127, 127, 127, 127, 127, 127, 127, 122,  59,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,  47, 124, 127, 127, 127, 127, 127, 127, 127, 127, 117,  25,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   2,  86, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  57,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   9, 102, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  77,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   8, 102, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  76,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   2,  83, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  55,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,  42, 123, 127, 127, 127, 127, 127, 127, 127, 127, 112,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   5,  78, 127, 127, 127, 127, 127, 127, 127, 122,  54,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,  10,  73, 118, 127, 127, 127, 127, 112,  54,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
     93, 127, 125,  42,   0,   0,   0,   0,   3,  30,  64,  80,  78,  57,  21,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 103,  11, 
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
