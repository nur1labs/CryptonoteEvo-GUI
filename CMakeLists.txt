# to build on mac you should have added a path to your qt directory in CMAKE_PREFIX_PATH environment variable
# for ex.: export CMAKE_PREFIX_PATH="$CMAKE_PREFIX_PATH:/Users/testnet/Qt/5.9.2/clang_64/lib/cmake"

cmake_minimum_required(VERSION 3.11.0)
project(cryptonote-gui)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++14")
set(CONFIG "${CONFIG} c++14 strict_c++")

if(APPLE)
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -mmacosx-version-min=10.11")
endif()

set(SOURCES
    src/main.cpp
    src/base/mainwindow.cpp 
    src/net/signalhandler.cpp 
    src/base/overviewframe.cpp 
    src/base/aboutdialog.cpp 
    src/JsonRpc/JsonRpcClient.cpp 
    src/JsonRpc/JsonRpcNotification.cpp 
    src/JsonRpc/JsonRpcObject.cpp 
    src/JsonRpc/JsonRpcObjectFactory.cpp 
    src/JsonRpc/JsonRpcRequest.cpp 
    src/JsonRpc/JsonRpcResponse.cpp 
    src/base/application.cpp 
    src/log/logger.cpp 
    src/base/okbutton.cpp 
    src/base/statusbar.cpp 
    src/base/windoweditemmodel.cpp 
    src/wallet/walletmodel.cpp 
    src/net/sendframe.cpp 
    src/net/transferframe.cpp 
    src/base/resizablescrollarea.cpp 
    src/base/common.cpp 
    src/net/connectionoptionsframe.cpp 
    src/base/settings.cpp 
    src/Miner/Miner.cpp 
    src/Miner/StratumClient.cpp 
    src/Miner/Worker.cpp 
    src/Miner/MinerDelegate.cpp 
    src/Miner/MinerModel.cpp 
    src/Miner/MiningFrame.cpp 
    src/Miner/MiningManager.cpp 
    src/net/connectselectiondialog.cpp 
    src/wallet/walletd.cpp 
    src/rpc/rpcapi.cpp 
    src/base/progressbar.cpp 
    src/acc/addressbookframe.cpp 
    src/acc/addressbookmodel.cpp 
    src/acc/addressbooksortedmodel.cpp 
    src/acc/newaddressdialog.cpp 
    src/acc/addressbookdelegate.cpp 
    src/acc/addressbookmanager.cpp 
    src/acc/balanceoverviewframe.cpp 
    src/Miner/miningoverviewframe.cpp 
    src/base/crashdialog.cpp 
    src/base/changepassworddialog.cpp
    src/net/sendconfirmationdialog.cpp
    src/acc/addressbookdialog.cpp
    src/base/popup.cpp
    src/log/logframe.cpp
    src/base/askpassworddialog.cpp
    src/key/importkeydialog.cpp
    src/base/questiondialog.cpp
    src/Miner/PoolTreeView.cpp
    src/base/createproofdialog.cpp
    src/base/checkproofdialog.cpp
    src/wallet/walletdparamsdialog.cpp
    src/key/exportkeydialog.cpp

)

include_directories(${CMAKE_BINARY_DIR} src )
include_directories(../evonote/include)
include_directories(../evonote/src)
link_directories(../evonote/libs)
add_executable(cryptonote-gui ${SOURCES} src/resources.qrc)
target_link_libraries(cryptonote-gui evonote-crypto)
qt5_use_modules(cryptonote-gui Core Network Gui Widgets)
