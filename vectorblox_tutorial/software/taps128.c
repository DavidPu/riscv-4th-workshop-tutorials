#define NTAPS 128		// NTAPS must be power of 2

static int16_t filter_taps[NTAPS] = {
  -1,
  -8,
  -24,
  -54,
  -99,
  -156,
  -217,
  -266,
  -285,
  -259,
  -185,
  -73,
  51,
  151,
  195,
  166,
  71,
  -56,
  -167,
  -215,
  -173,
  -52,
  105,
  231,
  268,
  188,
  14,
  -186,
  -327,
  -335,
  -191,
  58,
  311,
  454,
  405,
  164,
  -183,
  -491,
  -612,
  -464,
  -82,
  391,
  746,
  802,
  491,
  -96,
  -727,
  -1114,
  -1035,
  -451,
  452,
  1308,
  1704,
  1355,
  261,
  -1243,
  -2553,
  -2983,
  -2015,
  486,
  4171,
  8266,
  11780,
  13806,
  13806,
  11780,
  8266,
  4171,
  486,
  -2015,
  -2983,
  -2553,
  -1243,
  261,
  1355,
  1704,
  1308,
  452,
  -451,
  -1035,
  -1114,
  -727,
  -96,
  491,
  802,
  746,
  391,
  -82,
  -464,
  -612,
  -491,
  -183,
  164,
  405,
  454,
  311,
  58,
  -191,
  -335,
  -327,
  -186,
  14,
  188,
  268,
  231,
  105,
  -52,
  -173,
  -215,
  -167,
  -56,
  71,
  166,
  195,
  151,
  51,
  -73,
  -185,
  -259,
  -285,
  -266,
  -217,
  -156,
  -99,
  -54,
  -24,
  -8,
  -1
};
