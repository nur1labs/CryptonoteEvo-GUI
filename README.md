# CryptonoteEvo-GUI
cryptonote evo guiシステムツリー

## 要件

1. Qt5 としょうかん</br>
Ubuntuに必要なパッケージをすべてインストールするには、次のコマンドを使用します:
```
sudo apt install qt5-qmake qtbase5-dev qtbase5-dev-tools
```

## ソースコードからバイナリをビルドする方法

### Windows

する

### MacOS

する

### Linux & BSD's
```
$ git clone https://github.com/FndNur1Labs/CryptonoteEvo.git
$ cd CryptonoteEvo
$ mkdir -p build
$ cd build
$ cmake ..
$ make -j4 CryptonoteEvo-crypto
$ cd ../..
$ git clone https://github.com/Nur1Labs/CryptonoteEvo-GUI.git
$ cd CryptonoteEvo-GUI
$ mkdir -p build
$ cd build
$ cmake ..
$ make -j4
```
