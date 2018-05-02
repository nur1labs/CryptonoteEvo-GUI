#pragma once

#include <QScrollArea>

namespace WalletGUI {

class ResizableScrollArea : public QScrollArea {
  Q_OBJECT
  Q_DISABLE_COPY(ResizableScrollArea)

public:
  explicit ResizableScrollArea(QWidget* _parent);
  virtual ~ResizableScrollArea();

  virtual QSize sizeHint() const override;
};

}
