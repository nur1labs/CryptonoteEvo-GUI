# CryptonoteEvo-GUI
cryptonote evo guiシステムツリー

## Requirements

1. Qt5 としょうかん</br>
Ubuntuに必要なパッケージをすべてインストールするには、次のコマンドを使用します:
```
sudo apt install qt5-qmake qtbase5-dev qtbase5-dev-tools
```

## ソースコードからバイナリをビルドする方法

### Windows

TODO

### MacOS

TODO

### Linux
```
$ git clone https://github.com/bcndev/bytecoin.git
$ cd bytecoin
$ mkdir -p build
$ cd build
$ cmake ..
$ make -j4 bytecoin-crypto
$ cd ../..
$ git clone https://github.com/bcndev/bytecoin-gui.git
$ cd bytecoin-gui
$ mkdir -p build
$ cd build
$ cmake ..
$ make -j4
```
