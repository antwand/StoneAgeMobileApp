#ifndef _SPRITE_H_
#define _SPRITE_H_

//??????��????�e??????
#define mxSPRITE	32768

typedef unsigned char MOJI;
typedef unsigned char U1;
typedef          char S1;
typedef unsigned short U2;
typedef          short S2;
typedef unsigned long U4;
typedef          long S4;
typedef float  F4;
typedef double F8;

typedef enum {
	ANIM_ATTACK, //����
	ANIM_DAMAGE, //����
	ANIM_DEAD,  //����
	ANIM_STAND, //վ��
	ANIM_WALK, //����
	ANIM_SIT, //����
	ANIM_HAND, //����
	ANIM_HAPPY, //����
	ANIM_ANGRY, //����
	ANIM_SAD, //����
	ANIM_GUARD, //����
	ANIM_NOD, //��ͷ
	ANIM_THROW, //Ͷ��
	ANIM_LIST_
} ANIM_LIST;


// 1?????�ѩ�
typedef struct
{
	unsigned int BmpNo;				// bmp�k?(real.bin???�t)
	S2 PosX,PosY;			// ����?�t??????
	U2 SoundNo;				// С��10000������Ч���,��ʾҪ����Ч;���ڵ���10000С��10100����Ҫ��ʾ�˺�Ч��,���ֻ�����Ч��
										// ���ڵ���10100��������????�k?
} FRAMELIST;


// ?????????�ѩ�
typedef struct
{
	U2 dir;					// ??????????
	U2 no;					// ??????????(0????????)
    U4 dtAnim;				// ????????��???
    U4 frameCnt;
	FRAMELIST *ptFramelist;	// ?????????�ѩ�
} ANIMLIST;


// SPR??�t�ѩ�
typedef struct
{
	unsigned int sprNo;				// ??��???��??(��??SPR�k??65536?????)
    unsigned int offset;				// SPR.BIN??????��????�t
	U2 animSize;			// ?????????
} SPRADRN;


typedef struct
{
	U2 animSize;				// ?????????
	ANIMLIST	*ptAnimlist;	//?????????????NULL??����BMP?����
} SPRITEDATA;


typedef struct {
	U2			dtz;			//��????????�k????
	U2			noSpritedata;	//?????�k?
	U2			mdAnim;			//??????????
	U2			mdAnim2;		//????????????
	U2			dir;			//��???
	U2			ctLoop;			//?????????
	float		ctAnim;			//???????????? ???�t??�ۥh��?��???��??????�k???
	float		dtAnim;			//????	?????????spr????????��?
} SPRITE;

extern SPRITEDATA SpriteData[mxSPRITE];


bool InitSprBinFileOpen( char *, char * );


#endif