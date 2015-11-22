#include <PICOL.h>

namespace PICOL {
  const uint8_t NotesAccept[] = {
    46, 48, // width, height
      3,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   5,   3,   0,   0,   0,   0,   0,   0,   0, 
     64,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  92,  64,   2,   0,   0,   0,   0,   0,   0, 
     90, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  90,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127, 105,  67,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  97, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  63, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   4,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,  15,   6,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,  32, 107, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 110,  41,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,  38, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  48,   0,   0,  64, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,  37, 122, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 124, 124, 126, 127, 127, 126,  48,   0,   0,  63, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,  13,  43,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  44,  43,  42,  50,  71,  97, 117, 127, 127, 127,  96,  63,  38,  74, 127, 127,  89,   3,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,  45,  90, 116, 125, 127, 127, 127, 127, 127, 127, 123, 121, 127, 127,  88,   2,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  34,  94, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,  98,  12,   0,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,  22,  72,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  74,  80, 116, 127, 127, 127, 127, 121, 106,  93,  85,  88,  99, 115, 126, 127, 127, 127, 125,  90,  20,   0,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,  38, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 111,  70,  33,  12,   4,   1,   2,   7,  21,  50,  94, 124, 127, 127, 127,  99,  22,   0,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,  38, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  81,  22,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,  50, 109, 127, 127, 127,  96,  14,   0,   0,   0, 
     89, 127, 127,  81,   1,   0,  25,  85,  87,  87,  87,  87,  87,  87,  87,  87,  87,  87, 105, 127, 127, 127, 121,  60,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  99, 127, 127, 127,  76,   4,   0,   0, 
     89, 127, 127,  81,   1,   0,   1,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   9,  90, 127, 127, 124,  62,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  23, 104, 127, 127, 121,  39,   0,   0, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  39, 123, 127, 127,  83,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15,  65,  19,   0,   0,  38, 119, 127, 127,  91,   6,   0, 
     89, 127, 127,  81,   1,   0,   9,  30,  31,  31,  31,  31,  31,  31,  31,  31,  32,  90, 127, 127, 115,  26,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15,  89, 127,  94,  18,   0,   2,  76, 127, 127, 121,  33,   0, 
     89, 127, 127,  81,   1,   0,  36, 118, 122, 122, 122, 122, 122, 122, 122, 122, 122, 126, 127, 127,  77,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15,  89, 127, 127, 127,  95,  20,   0,  28, 118, 127, 127,  67,   0, 
     89, 127, 127,  81,   1,   0,  38, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 124,  39,   0,   0,   0,   0,  34,  29,   0,   0,   0,   0,  15,  89, 127, 127, 127, 127, 127,  61,   0,   5,  93, 127, 127,  94,   6, 
     89, 127, 127,  81,   1,   0,  35, 114, 117, 117, 117, 117, 117, 117, 117, 117, 123, 127, 127, 112,  18,   0,   0,   0,  39, 114, 109,  32,   0,   0,  15,  89, 127, 127, 127, 127, 127,  83,  13,   0,   0,  67, 127, 127, 109,  17, 
     89, 127, 127,  81,   1,   0,   7,  23,  24,  24,  24,  24,  24,  24,  24,  24,  86, 127, 127, 101,   7,   0,   1,  39, 113, 127, 127, 108,  31,  15,  89, 127, 127, 127, 127, 127,  83,  11,   0,   0,   0,  49, 127, 127, 116,  25, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  80, 127, 127,  95,   4,   0,  17, 107, 127, 127, 127, 127, 109,  98, 127, 127, 127, 127, 127,  83,  11,   0,   0,   0,   0,  42, 127, 127, 119,  29, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  77, 127, 127, 100,   6,   0,   4,  59, 121, 127, 127, 127, 127, 127, 127, 127, 127, 127,  83,  11,   0,   0,   0,   0,   0,  47, 127, 127, 118,  28, 
     89, 127, 127,  81,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  67, 127, 127, 108,  14,   0,   0,   3,  58, 121, 127, 127, 127, 127, 127, 127, 127,  83,  11,   0,   0,   0,   0,   0,   0,  62, 127, 127, 112,  20, 
     89, 127, 127,  81,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  48, 126, 127, 121,  32,   0,   0,   0,   3,  58, 121, 127, 127, 127, 127, 127,  83,  11,   0,   0,   0,   0,   0,   0,   3,  86, 127, 127, 100,   9, 
     89, 127, 127,  82,   2,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,  26, 118, 127, 127,  66,   0,   0,   0,   0,   3,  58, 121, 127, 127, 127,  83,  11,   0,   0,   0,   0,   0,   0,   0,  20, 113, 127, 127,  76,   1, 
     89, 127, 127, 110,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  84, 120, 127, 127, 106,  15,   0,   0,   0,   0,   3,  58, 121, 127,  83,  11,   0,   0,   0,   0,   0,   0,   0,   0,  61, 126, 127, 124,  42,   0, 
     89, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,  67,   2,   0,   0,   0,   0,   3,  58,  79,  11,   0,   0,   0,   0,   0,   0,   0,   0,  23, 111, 127, 127, 103,  12,   0, 
     91, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 119,  42,   0,   0,   0,   0,   0,   2,   5,   0,   0,   0,   0,   0,   0,   0,   0,  10,  89, 127, 127, 125,  54,   0,   0, 
     57,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  89, 122, 127, 127, 111,  37,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  80, 126, 127, 127,  94,  10,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  72, 127, 127, 127, 115,  56,   7,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  26,  90, 126, 127, 127, 111,  28,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  83, 127, 127, 127, 124,  91,  43,  13,   1,   0,   0,   0,   0,   5,  25,  68, 113, 127, 127, 127, 115,  41,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  11,  78, 124, 127, 127, 127, 124, 106,  82,  64,  56,  59,  72,  94, 117, 127, 127, 127, 127, 109,  40,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6,  57, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 125,  89,  26,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  25,  74, 112, 127, 127, 127, 127, 127, 127, 127, 127, 127, 122,  96,  49,   8,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,  20,  52,  80,  99, 110, 114, 113, 106,  92,  67,  36,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   7,  13,  17,  15,  11,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
  };
};