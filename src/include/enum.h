//+------------------------------------------------------------------+
//|                              EA31337 Libre - Forex trading robot |
//|                                 Copyright 2016-2023, EA31337 Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

/*
 *  This file is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#define ENUM_STRATEGY_DEFINED
// Defines enum with supported strategy list.
enum ENUM_STRATEGY {
  STRAT_NONE = 0,                // (None)
  STRAT_AC,                      // AC
  STRAT_AD,                      // AD
  STRAT_ADX,                     // ADX
  STRAT_ALLIGATOR,               // Alligator
  STRAT_AMA,                     // AMA
  STRAT_ARROWS,                  // Arrows
  STRAT_ASI,                     // ASI
  STRAT_ATR,                     // ATR
  STRAT_AWESOME,                 // Awesome
  STRAT_BANDS,                   // Bands
  STRAT_BEARS_POWER,             // Bear Power
  STRAT_BULLS_POWER,             // Bulls Power
  STRAT_BWMFI,                   // BWMFI
  STRAT_CCI,                     // CCI
  STRAT_CHAIKIN,                 // Chaikin
  STRAT_DEMA,                    // DEMA
  STRAT_DEMARKER,                // DeMarker
  STRAT_ENVELOPES,               // Envelopes
  STRAT_FORCE,                   // Force
  STRAT_FRACTALS,                // Fractals
  STRAT_GATOR,                   // Gator
  STRAT_HEIKEN_ASHI,             // Heiken Ashi
  STRAT_ICHIMOKU,                // Ichimoku
  STRAT_INDICATOR,               // Indicator
  STRAT_MA,                      // MA
  STRAT_MA_CROSS_PIVOT,          // MA Cross Pivot
  STRAT_MA_CROSS_SHIFT,          // MA Cross Shift
  STRAT_MA_CROSS_SUP_RES,        // MA Cross Sup/Res
  STRAT_MACD,                    // MACD
  STRAT_MFI,                     // MFI
  STRAT_MOMENTUM,                // Momentum
  STRAT_OBV,                     // OBV
  STRAT_OSCILLATOR,              // Oscillator
  STRAT_OSCILLATOR_DIVERGENCE,   // Oscillator
  STRAT_OSCILLATOR_MULTI,        // Oscillator Multi
  STRAT_OSCILLATOR_CROSS,        // Oscillator Cross
  STRAT_OSCILLATOR_CROSS_SHIFT,  // Oscillator Cross Shift
  STRAT_OSCILLATOR_CROSS_ZERO,   // Oscillator Cross Zero
  STRAT_OSCILLATOR_RANGE,        // Oscillator Range
  STRAT_OSMA,                    // OSMA
  STRAT_PATTERN,                 // Pattern
  STRAT_PINBAR,                  // Pinbar
  STRAT_PIVOT,                   // Pivot
  STRAT_RETRACEMENT,             // Retracement
  STRAT_RSI,                     // RSI
  STRAT_RVI,                     // RVI
  STRAT_SAR,                     // SAR
  STRAT_STDDEV,                  // StdDev
  STRAT_STOCHASTIC,              // Stochastic
  STRAT_WPR,                     // WPR
  STRAT_ZIGZAG,                  // ZigZag
};
