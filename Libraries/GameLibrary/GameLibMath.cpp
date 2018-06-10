//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/
//! @file   GameLibMath.cpp
//!
//! @brief  DxLibの数学関連への追加機能のソースファイル
//!
//! @date   2017/3/27
//!
//! @author 高木 晋
//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/

// ヘッダファイルの読み込み ================================================
#include <DxLib.h>
#include "GameLib.h"




// 関数の定義 ==============================================================

//----------------------------------------------------------------------
//! @brief 角度の単位変換([度]→[ラジアン])
//!
//! @param[in] degree 角度[度]
//!
//! @return 角度[ラジアン]
//----------------------------------------------------------------------
extern float ToRadians(float degree)
{
	return degree * DX_PI_F / 180.0f;
}



//----------------------------------------------------------------------
//! @brief 角度の単位変換([ラジアン]→[度])
//!
//! @param[in] radian 角度[ラジアン]
//!
//! @return 角度[度]
//----------------------------------------------------------------------
extern float ToDegrees(float radian)
{
	return radian * 180.0f / DX_PI_F;
}



//----------------------------------------------------------------------
//! @brief 指定した値を下限〜上限の範囲内に収める(int型版)
//!
//! @param[in] x   範囲内に収めたい値の現在値
//! @param[in] min 下限
//! @param[in] max 上限
//!
//! @return 下限〜上限の範囲内に収めた値
//----------------------------------------------------------------------
extern int ClampI(int x, int min, int max)
{
	if (x < min)
	{
		x = min;
	}
	else if (x > max)
	{
		x = max;
	}

	return x;
}



//----------------------------------------------------------------------
//! @brief 指定した値を、下限〜上限の範囲内に収める(float型版)
//!
//! @param[in] x   範囲内に収めたい値の現在値 
//! @param[in] min 下限
//! @param[in] max 上限
//!
//! @return 下限〜上限の範囲内に収めた値
//----------------------------------------------------------------------
extern float ClampF(float x, float min, float max)
{
	if (x < min)
	{
		x = min;
	}
	else if (x > max)
	{
		x = max;
	}

	return x;
}
