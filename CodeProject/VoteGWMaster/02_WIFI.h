#ifndef _WiFi_h
#define _WiFi_h

#include "VoteGWMaster.h"  // Có define debug để bật/tắt các debug ra Serial.
#include <Arduino.h>       // Để khai báo kiểu String

#define _ChanBuzzer 2

//MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//============================ Begin: classWiFi =====================================================//
//MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
#pragma region classWiFi
class WIFI {
public:
  static bool DaLuuMACVaoEEPROM;
  bool DaBatAP;

private:
  static String TenWiFi;
  static String MatKhauWiFi;
  char AP_SSID[25];
  String AP_PASS = "EMG@2023";


public:
  String LaySoMAC(void);
  void DocWiFiDaLuuTrongEEPROM(void);
  void XoaWiFiDaLuuTrongEEPROM(void);
  void KetNoiWiFi(int ThoiGianChoKetNoi);
  void KiemTraKetNoiWiFi(void);
  int TinhDoManhCuaWiFi(void);
  void CapNhatWiFiVaoEEPROM(String TenWiFi, String MatKhauWiFi);

private:
  void ThietLapAP(void);
  static void TrangChu(void);
  static void StyleCSS(void);
  static void CodeJS(void);
  static void QuetTimWiFi(void);
  static void LuuWiFiVaoEEPROM(void);
  static void ServerON(void);
  static String rssiToIcon(int rssi);

  static void LuuThongTinServerVaoEEPROM(void);
};
#pragma endregion classWiFi
//MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
//============================ End: classWiFi =======================================================//
//MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM

#endif
