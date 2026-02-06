#pragma once

#define HUMANIOD_DEEP_DEBUG 0
#define HUMANIOD_RELEASE_BUILD 0
#define HUMANIOD_TRANSMIT_DEFAULT_DATA 0

/*
% ***************************************************************
% Created for SDK ver:03.05
% Created using Visualizer ver:3.6.0.0
% Frequency:60
% Platform:xWR68xx_AOP
% Scene Classifier:best_range_res
% Azimuth Resolution(deg):30 + 30
% Range Resolution(m):0.04
% Maximum unambiguous Range(m):9.02
% Maximum Radial Velocity(m/s):1.21
% Radial velocity resolution(m/s):0.16
% Frame Duration(msec):33.333
% RF calibration data:None
% ***************************************************************
*/

const char* RADAR_systemConfig[] = {
    "flushCfg\n",
    "dfeDataOutputMode 1\n",
    "channelCfg 15 7 0\n",
    "adcCfg 2 1\n",
    "adcbufCfg -1 0 1 1 1\n",
    "profileCfg 0 60 230 7 114.29 0 0 35 1 272 2559 0 0 158\n",
    "chirpCfg 0 0 0 0 0 0 0 1\n",
    "chirpCfg 1 1 0 0 0 0 0 2\n",
    "chirpCfg 2 2 0 0 0 0 0 4\n",
    "frameCfg 0 2 16 0 33.333 1 0\n",
    "lowPower 0 0\n",
    "guiMonitor -1 1 0 0 0 0 1\n",
    "cfarCfg -1 0 2 8 4 3 0 15 1\n",
    "cfarCfg -1 1 0 4 2 3 1 15 1\n",
    "multiObjBeamForming -1 1 0.5\n",
    "clutterRemoval -1 0\n",
    "calibDcRangeSig -1 0 -5 8 256\n",
    "extendedMaxVelocity -1 0\n",
    "lvdsStreamCfg -1 0 0 0\n",
    "compRangeBiasAndRxChanPhase 0.0 1 0 -1 0 1 0 -1 0 1 0 -1 0 1 0 -1 0 1 0 -1 0 1 0 -1 0\n",
    "measureRangeBiasAndRxChanPhase 0 1.5 0.2\n",
    "CQRxSatMonitor 0 3 11 119 0\n",
    "CQSigImgMonitor 0 89 6\n",
    "analogMonitor 0 0\n",
    "aoaFovCfg -1 -90 90 -90 90\n",
    "cfarFovCfg -1 0 0 4\n",
    "cfarFovCfg -1 1 -1.21 1.21\n",
    "calibData 0 0 0\n",
    "sensorStart\n"
};

const int32_t RADAR_systemConfigLineCount = 30;