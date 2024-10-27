// StaticLib.c : スタティック ライブラリ用の関数を定義します。
//

#include "framework.h"// プロジェクトで共有の項目を載せる

#include "../include/my_lib.h"

// num個の整数の和を得る
int sum(int num, int* array)
{
	int sum = 0;

	for (int i = 0; i < num; i++)
	{
		sum += array[i];
	}

	return sum;
}

// num個の整数の平均を得る
int average(int num, int* array)
{
	// オーバーフロー防止のため、long long型で合計を計算
	long long total = 0;

	for (int i = 0; i < num; i++)
	{
		total += array[i];
	}

	return (int)(total / num);
}