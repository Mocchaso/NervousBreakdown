# NervousBreakdown  

## 概要
描画ツールcanvasを用いた神経衰弱ゲームです。  
canvasは、学校の授業で使ったツールで、win32apiと呼ばれるWindowsライブラリを利用しています。  
このゲーム制作自体は、そのときの授業のチャレンジ課題でしたが、その時点でオブジェクト指向を習っていませんでした。  
それをオブジェクト指向に直したプロジェクトが、本リポジトリです。

## 利用方法
1. 本リポジトリからプロジェクトをダウンロードします。
2. ダウンロードしたプロジェクトをEclipseCDTにインポートします。
3. そのプロジェクトにライブラリの登録を行います。  
    win32apiを利用可能にするため、ライブラリの登録を行う必要があります。  
    * プロジェクトを右クリックし、「プロパティ」を選択します。  
    * 「C/C++ビルド」の「設定」を選択します。
    * 「ツール設定」の「Cygwin C++ Linker」の「ライブラリ」を選択します。  
    * ライブラリに「gdi32」を追加します。
4. Main.cppを実行することでゲーム画面が起動します。

## 開発環境
EclipseCDT 4.4.2