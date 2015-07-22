#include "StringTR.h"
#include <Arduino.h>
//String a;
/*
String StringTR::StringTR(char * str_in){
 if(sizeof(str_in)<MAX_STR)	
	 for(int i=0;sizeof(str_in) < MAX_STR && str_in[i] !=0 && i<MAX_STR;i++ )
 str[i]=str_in[i];
 else {
	Serial.println("dizi fala uzun");
   /// return;
}
//for(int i=0;i<sizeof(str);i++)
//Serial.print(str[i]);
for(int i=0;i<MAX_STR;i++)
temp_str[i]=0;

 char TurkishCharacters[]={ BUYUK_CENGELLI_C,
                              KUCUK_CENGELLI_C,
                              BUYUK_NOKTALI_U,
                              KUCUK_NOKTALI_U,
                              BUYUK_NOKTALI_I,
                              KUCUK_I,
                              BUYUK_CENGELLI_S,
                              KUCUK_CENGELLI_S,
                              BUYUK_NOKTALI_O,
                              KUCUK_NOKTALI_O,
                              BUYUK_YUMUSAK_G,
                              KUCUK_YUMUSAK_G};

}


uint16_t TurkishCharacters_Int[12]={BUYUK_CENGELLI_C_INT,
                              KUCUK_CENGELLI_C_INT,
                              BUYUK_NOKTALI_U_INT,
                              KUCUK_NOKTALI_U_INT,
                              BUYUK_NOKTALI_I_INT,
                              KUCUK_I_INT,
                              BUYUK_CENGELLI_S_INT,
                              KUCUK_CENGELLI_S_INT,
                              BUYUK_NOKTALI_O_INT,
                              KUCUK_NOKTALI_O_INT,
                              BUYUK_YUMUSAK_G_INT,
                              KUCUK_YUMUSAK_G_INT}; 
							  
uint8_t c[3]={(uint8_t)0xC3,(uint8_t)0xC4,(uint8_t)0xC5};
//uint8_t c[1]=0xC4;
//uint8_t c[2]=0xC5;

	 copystr();			
	 //return get_str();
    	 
}

*/
StringTR::StringTR(String str_in)
{
	String temp_str=String(str_in);
 char TurkishCharacters[]={ BUYUK_CENGELLI_C,
                              KUCUK_CENGELLI_C,
                              BUYUK_NOKTALI_U,
                              KUCUK_NOKTALI_U,
                              BUYUK_NOKTALI_I,
                              KUCUK_I,
                              BUYUK_CENGELLI_S,
                              KUCUK_CENGELLI_S,
                              BUYUK_NOKTALI_O,
                              KUCUK_NOKTALI_O,
                              BUYUK_YUMUSAK_G,
                              KUCUK_YUMUSAK_G};




uint16_t TurkishCharacters_Int[12]={BUYUK_CENGELLI_C_INT,
                              KUCUK_CENGELLI_C_INT,
                              BUYUK_NOKTALI_U_INT,
                              KUCUK_NOKTALI_U_INT,
                              BUYUK_NOKTALI_I_INT,
                              KUCUK_I_INT,
                              BUYUK_CENGELLI_S_INT,
                              KUCUK_CENGELLI_S_INT,
                              BUYUK_NOKTALI_O_INT,
                              KUCUK_NOKTALI_O_INT,
                              BUYUK_YUMUSAK_G_INT,
                              KUCUK_YUMUSAK_G_INT}; 
							  
uint8_t c[3]={0xC3,0xC4,0xC5};

}
/*
void StringTR::copystr()
{
  for(int i=0;i<sizeof(str);i++)	
	for(int j=0;j<3;j++)
      if(str[i]==c[j]) {
		  for(int k=0;k<12;k++)		  {
			  if(str[i] ==  highByte(TurkishCharacters_Int[k]) && str[i+1] == lowByte(TurkishCharacters[k+1]))
				  strcat(temp_str,&TurkishCharacters[k]);
	     }
	  }
	  else {
		  strcat(temp_str,&str[i]);
	}
	
}
*/
  String StringTR::get_str()
 
{
	//char* temp;
	//temp=temp_str;
	return turkish_str;
}
void StringTR::copystr2()
{
	for(int i=0;i<sizeof(temp_str.c_str());i++)
	{
		for(int j=0;j<12;j++)
		{
		 if(temp_str.substring(i,i+1)==String(TurkishCharacters_Int[j]))
		 {
			temp_str.replace(temp_str.substring(i,i+1),String(TurkishCharacters[j]));
		   //temp_str=String(turkish_str);
		 }
		 continue;
		}
	}
	turkish_str=temp_str;
		
}