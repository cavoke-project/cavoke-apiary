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

#include "OAIPlayer.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPlayer::OAIPlayer(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPlayer::OAIPlayer() {
    this->initializeModel();
}

OAIPlayer::~OAIPlayer() {}

void OAIPlayer::initializeModel() {

    m_player_id_isSet = false;
    m_player_id_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;
}

void OAIPlayer::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPlayer::fromJsonObject(QJsonObject json) {

    m_player_id_isValid = ::OpenAPI::fromJsonValue(player_id, json[QString("player_id")]);
    m_player_id_isSet = !json[QString("player_id")].isNull() && m_player_id_isValid;

    m_user_isValid = ::OpenAPI::fromJsonValue(user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;
}

QString OAIPlayer::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPlayer::asJsonObject() const {
    QJsonObject obj;
    if (m_player_id_isSet) {
        obj.insert(QString("player_id"), ::OpenAPI::toJsonValue(player_id));
    }
    if (user.isSet()) {
        obj.insert(QString("user"), ::OpenAPI::toJsonValue(user));
    }
    return obj;
}

qint32 OAIPlayer::getPlayerId() const {
    return player_id;
}
void OAIPlayer::setPlayerId(const qint32 &player_id) {
    this->player_id = player_id;
    this->m_player_id_isSet = true;
}

bool OAIPlayer::is_player_id_Set() const{
    return m_player_id_isSet;
}

bool OAIPlayer::is_player_id_Valid() const{
    return m_player_id_isValid;
}

OAIUser OAIPlayer::getUser() const {
    return user;
}
void OAIPlayer::setUser(const OAIUser &user) {
    this->user = user;
    this->m_user_isSet = true;
}

bool OAIPlayer::is_user_Set() const{
    return m_user_isSet;
}

bool OAIPlayer::is_user_Valid() const{
    return m_user_isValid;
}

bool OAIPlayer::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_player_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPlayer::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_player_id_isValid && m_user_isValid && true;
}

} // namespace OpenAPI
