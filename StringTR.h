#ifndef StringTR_H
 #define StringTR_h
#endif
#include <inttypes.h>
#include <Arduino.h>
#define BUYUK_CENGELLI_C (int8_t) 0xC7 
#define KUCUK_CENGELLI_C (int8_t) 0xE7
#define BUYUK_NOKTALI_U  (int8_t) 0xDC
#define KUCUK_NOKTALI_U  (int8_t) 0xFC
#define BUYUK_NOKTALI_I  (int8_t) 0xDD
#define KUCUK_I          (int8_t) 0xFD
#define BUYUK_CENGELLI_S (int8_t) 0xDE
#define KUCUK_CENGELLI_S (int8_t) 0xFE
#define BUYUK_NOKTALI_O  (int8_t) 0xD6
#define KUCUK_NOKTALI_O  (int8_t) 0xF6
#define BUYUK_YUMUSAK_G  (int8_t) 0xD0
#define KUCUK_YUMUSAK_G  (int8_t) 0xF0

#define BUYUK_CENGELLI_C_INT (uint16_t) 0xC387 
#define KUCUK_CENGELLI_C_INT (uint16_t) 0xC3A7
#define BUYUK_NOKTALI_U_INT  (uint16_t) 0xC39C
#define KUCUK_NOKTALI_U_INT  (uint16_t) 0xC3BC
#define BUYUK_NOKTALI_I_INT  (uint16_t) 0xC4B0
#define KUCUK_I_INT          (uint16_t) 0xC4B1
#define BUYUK_CENGELLI_S_INT (uint16_t) 0xC59E
#define KUCUK_CENGELLI_S_INT (uint16_t) 0xC59F
#define BUYUK_NOKTALI_O_INT  (uint16_t) 0xC396
#define KUCUK_NOKTALI_O_INT  (uint16_t) 0xC3B6
#define BUYUK_YUMUSAK_G_INT  (uint16_t) 0xC49E
#define KUCUK_YUMUSAK_G_INT  (uint16_t) 0xC49F

#define MAX_STR 127
 class StringTR {
	public:
  StringTR(String str_in);
  /*void copystr();*/
   void copystr2();
  String get_str();
  //char temp_str[MAX_STR];
    private:
    //char str[MAX_STR];
	String temp_str;
	String turkish_str;
 // uint8_t c[3];
  char TurkishCharacters[12];
 uint16_t TurkishCharacters_Int[12];  
                              
};
