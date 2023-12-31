#include<stdio.h>
#include<cstdlib>
#include <cassert>
#include <DirectXTex.h>
#include "TextureConverter.h"

enum Argument {
	kApplicationPath,//アプリケーションのパス
	kFilePath,       //渡されたファイルのパス

	NumArgument
};

int main(int argc,char*argv[]) {
	assert(argc>=NumArgument);

	// COM ライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバータ
	TextureConverter converter;

	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	// COM ライブラリの終了
	CoUninitialize();

	system("pause");
	return 0;
}