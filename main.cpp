#include <cstdio>
#include <cstdlib>
#include <cassert>
#include "TextureConverter.h"

// コマンドライン追加
enum Argument {
	kApplicationPath, // アプリケーションのパス
	kFilePath,        // 渡されたファイルのパス

	NumArgument
};

int main(int argc, char* argv[]) {

	// argcの数だけ繰り返す
	for (int i = 0; i < argc; i++) {
		// 文字列 argv の i 番を表示
		printf(argv[i]);
		// 改行
		printf("\n");
	}

	assert(argc >= NumArgument);

	// COM ライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	// テクスチャコンバーター
	TextureConverter converter;

	// テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	// COM ライブラリの終了
	CoUninitialize();

	system("pause");

	return 0;
}