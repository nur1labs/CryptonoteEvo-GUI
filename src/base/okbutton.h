#pragma once

#include <QPushButton>

namespace WalletGUI {

class WalletOkButton : public QPushButton
{
    Q_OBJECT
    Q_DISABLE_COPY(WalletOkButton)

public:
    explicit WalletOkButton(QWidget* parent);
    ~WalletOkButton();
};

}
