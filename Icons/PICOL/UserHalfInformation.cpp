#include <PICOL.h>

namespace PICOL {
  const uint8_t UserHalfInformation[] = {
    36, 48, // width, height
      0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  33,  56,  60,  46,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,  27,  87, 119, 126, 127, 124, 106,  55,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,  29, 108, 127, 127, 127, 127, 127, 127, 124,  67,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   8,  93, 127, 127, 127, 127, 127, 127, 127, 127, 122,  40,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  37, 123, 127, 127, 127, 127, 127, 127, 127, 127, 127,  86,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  60, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 107,  12,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  66, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  15,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  52, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 101,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,  23, 115, 127, 127, 127, 127, 127, 127, 127, 127, 127,  68,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   2,  67, 126, 127, 127, 127, 127, 127, 127, 127, 107,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   9,  77, 123, 127, 127, 127, 127, 127, 106,  34,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   6,  45,  89, 108, 110, 100,  67,  20,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  13,  15,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,  14,  29,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  24,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      2,  49, 107, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 121, 118,  85,  14,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     26, 114, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  64,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     45, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  91,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 105,  43,  22,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125, 116,  93,  53,  13,   0,   0,   0,   0,   0,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 102,  45,   3,   0,   0,   0,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 113,  93,  79,  77,  84, 101, 119, 127, 127, 127, 122,  72,   9,   0,   0,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  99,  51,  18,   5,   0,   0,   1,   9,  29,  70, 114, 127, 127, 126,  79,   9,   0,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 120,  65,  11,   0,   0,   0,   3,   3,   2,   0,   0,   0,  28,  92, 127, 127, 126,  69,   3,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  49,   2,   0,   0,   0,  20,  85,  91,  65,   2,   0,   0,   0,  12,  83, 127, 127, 121,  41,   0,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  60,   1,   0,   0,   0,   0,  29, 122, 127,  93,   3,   0,   0,   0,   0,  13,  96, 127, 127,  97,   9,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  92,   8,   0,   0,   0,   0,   0,  27, 113, 119,  86,   3,   0,   0,   0,   0,   0,  33, 118, 127, 124,  43,   0, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 123,  40,   0,   0,   0,   0,   0,   0,   6,  25,  27,  19,   1,   0,   0,   0,   0,   0,   2,  81, 127, 127,  82,   2, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,  10,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  41, 124, 127, 107,  15, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  79,   1,   0,   0,   0,   0,   0,   0,   4,  18,  20,  14,   0,   0,   0,   0,   0,   0,   0,  18, 113, 127, 118,  29, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  63,   0,   0,   0,   0,   0,   0,   0,  26, 108, 115,  82,   3,   0,   0,   0,   0,   0,   0,   8, 103, 127, 123,  41, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  57,   0,   0,   0,   0,   0,   0,   0,  29, 121, 127,  92,   3,   0,   0,   0,   0,   0,   0,   6,  99, 127, 124,  45, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  66,   0,   0,   0,   0,   0,   0,   0,  28, 120, 127,  91,   3,   0,   0,   0,   0,   0,   0,  10, 106, 127, 123,  38, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  84,   1,   0,   0,   0,   0,   0,   0,  28, 120, 127,  91,   3,   0,   0,   0,   0,   0,   0,  23, 116, 127, 116,  27, 
     46, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 109,  15,   0,   0,   0,   0,   0,   0,  28, 120, 127,  91,   3,   0,   0,   0,   0,   0,   0,  50, 126, 127, 102,  11, 
     47, 124, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  52,   0,   0,   0,   0,   0,   0,  28, 120, 127,  91,   3,   0,   0,   0,   0,   0,   6,  92, 127, 127,  73,   1, 
     36, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 103,  15,   0,   0,   0,   0,   0,  28, 120, 127,  91,   3,   0,   0,   0,   0,   0,  47, 123, 127, 121,  34,   0, 
      7,  79, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  77,   6,   0,   0,   0,   0,  29, 122, 127,  93,   3,   0,   0,   0,   0,  25, 109, 127, 127,  85,   5,   0, 
      0,   8,  44,  93, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  71,   8,   0,   0,   0,  16,  66,  70,  50,   2,   0,   0,   0,  26, 100, 127, 127, 114,  28,   0,   0, 
      0,   0,   0,  56, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  87,  27,   1,   0,   0,   0,   0,   0,   0,   0,   7,  48, 109, 127, 127, 122,  52,   0,   0,   0, 
      0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 115,  76,  39,  17,   8,   7,  11,  24,  52,  93, 124, 127, 127, 121,  60,   3,   0,   0,   0, 
      0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124, 112, 103, 101, 106, 117, 127, 127, 127, 127, 112,  50,   3,   0,   0,   0,   0, 
      0,   0,   0,  57, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  82,  26,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  56, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 124, 123, 124, 122, 115,  99,  69,  31,   3,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,  17,  39,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  38,  39,  37,  33,  35,  30,  20,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};
