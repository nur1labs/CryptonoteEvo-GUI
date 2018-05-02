#pragma once

#include <QJsonObject>
#include <QVariant>

#include "JsonRpcObject.h"

namespace JsonRpc {

class JsonRpcRequest : public JsonRpcObject {
  Q_DISABLE_COPY(JsonRpcRequest)

public:
  JsonRpcRequest();
  explicit JsonRpcRequest(const QJsonObject& _jsonObject);
  virtual ~JsonRpcRequest();

  QString getId() const;
  QString getMethod() const;
  QVariantList getParamsAsArray() const;
  QVariantMap getParamsAsObject() const;

  void setId(const QString& _id);
  void setMethod(const QString& _method);
  void setParamsFromArray(const QVariantList& _variantList);
  void setParamsFromObject(const QVariantMap& _variantMap);
};

}
