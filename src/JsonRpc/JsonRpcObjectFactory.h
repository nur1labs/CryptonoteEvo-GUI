#include <QByteArray>

class QJsonObject;
class QJsonValue;

namespace JsonRpc {

class JsonRpcObject;

class JsonRpcObjectFactory {
public:
  static JsonRpcObject* createJsonRpcObject(const QJsonValue& _jsonValue, int& _jsonRpcErrorCode, QString& _jsonRpcErrorString,
    QString& _jsonRpcErrorData);

private:
  static JsonRpcObject* parseJsonRpcObject(const QJsonObject& _jsonObject, int& _jsonRpcErrorCode, QString& _jsonRpcErrorString,
  QString& _jsonRpcErrorData);
};

}
