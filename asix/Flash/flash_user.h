#ifndef	_FLASH_USER_H
#define	_FLASH_USER_H



/* MACRO DECLARATIONS */
typedef struct
{
	U16_T addr;
	U16_T len;
}STR_Flash_POS;


typedef struct
{
	U8_T table;
	U16_T index;
	U8_T flag;
	U32_T len;
	U8_T dat[500];
}STR_flag_flash;


extern STR_Flash_POS xdata Flash_Position[23];
extern STR_flag_flash 	far bac_flash;


void Flash_Inital(void);
void Flash_Write_Mass(void);
void Flash_Read_Mass(void);
void Flash_Read_Code(void);
void Flash_Store_Code(void); 
void Flash_Read_Other(void);
void Flash_Write_Other(void);


#endif

