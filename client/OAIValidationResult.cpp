/**
 * Cavoke
 * API for cavoke interaction between main server and clients
 *
 * The version of the OpenAPI document: 0.2.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIValidationResult.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIValidationResult::OAIValidationResult(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIValidationResult::OAIValidationResult() {
    this->initializeModel();
}

OAIValidationResult::~OAIValidationResult() {}

void OAIValidationResult::initializeModel() {

    m_success_isSet = false;
    m_success_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;
}

void OAIValidationResult::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIValidationResult::fromJsonObject(QJsonObject json) {

    m_success_isValid = ::OpenAPI::fromJsonValue(success, json[QString("success")]);
    m_success_isSet = !json[QString("success")].isNull() && m_success_isValid;

    m_message_isValid = ::OpenAPI::fromJsonValue(message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;
}

QString OAIValidationResult::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIValidationResult::asJsonObject() const {
    QJsonObject obj;
    if (m_success_isSet) {
        obj.insert(QString("success"), ::OpenAPI::toJsonValue(success));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::OpenAPI::toJsonValue(message));
    }
    return obj;
}

bool OAIValidationResult::isSuccess() const {
    return success;
}
void OAIValidationResult::setSuccess(const bool &success) {
    this->success = success;
    this->m_success_isSet = true;
}

bool OAIValidationResult::is_success_Set() const{
    return m_success_isSet;
}

bool OAIValidationResult::is_success_Valid() const{
    return m_success_isValid;
}

QString OAIValidationResult::getMessage() const {
    return message;
}
void OAIValidationResult::setMessage(const QString &message) {
    this->message = message;
    this->m_message_isSet = true;
}

bool OAIValidationResult::is_message_Set() const{
    return m_message_isSet;
}

bool OAIValidationResult::is_message_Valid() const{
    return m_message_isValid;
}

bool OAIValidationResult::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_success_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIValidationResult::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_success_isValid && true;
}

} // namespace OpenAPI
