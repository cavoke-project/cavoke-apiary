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

#include "OAIRoomInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRoomInfo::OAIRoomInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRoomInfo::OAIRoomInfo() {
    this->initializeModel();
}

OAIRoomInfo::~OAIRoomInfo() {}

void OAIRoomInfo::initializeModel() {

    m_room_id_isSet = false;
    m_room_id_isValid = false;

    m_display_name_isSet = false;
    m_display_name_isValid = false;

    m_invite_code_isSet = false;
    m_invite_code_isValid = false;

    m_session_id_isSet = false;
    m_session_id_isValid = false;

    m_host_id_isSet = false;
    m_host_id_isValid = false;

    m_members_isSet = false;
    m_members_isValid = false;
}

void OAIRoomInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRoomInfo::fromJsonObject(QJsonObject json) {

    m_room_id_isValid = ::OpenAPI::fromJsonValue(room_id, json[QString("room_id")]);
    m_room_id_isSet = !json[QString("room_id")].isNull() && m_room_id_isValid;

    m_display_name_isValid = ::OpenAPI::fromJsonValue(display_name, json[QString("display_name")]);
    m_display_name_isSet = !json[QString("display_name")].isNull() && m_display_name_isValid;

    m_invite_code_isValid = ::OpenAPI::fromJsonValue(invite_code, json[QString("invite_code")]);
    m_invite_code_isSet = !json[QString("invite_code")].isNull() && m_invite_code_isValid;

    m_session_id_isValid = ::OpenAPI::fromJsonValue(session_id, json[QString("session_id")]);
    m_session_id_isSet = !json[QString("session_id")].isNull() && m_session_id_isValid;

    m_host_id_isValid = ::OpenAPI::fromJsonValue(host_id, json[QString("host_id")]);
    m_host_id_isSet = !json[QString("host_id")].isNull() && m_host_id_isValid;

    m_members_isValid = ::OpenAPI::fromJsonValue(members, json[QString("members")]);
    m_members_isSet = !json[QString("members")].isNull() && m_members_isValid;
}

QString OAIRoomInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRoomInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_room_id_isSet) {
        obj.insert(QString("room_id"), ::OpenAPI::toJsonValue(room_id));
    }
    if (m_display_name_isSet) {
        obj.insert(QString("display_name"), ::OpenAPI::toJsonValue(display_name));
    }
    if (m_invite_code_isSet) {
        obj.insert(QString("invite_code"), ::OpenAPI::toJsonValue(invite_code));
    }
    if (m_session_id_isSet) {
        obj.insert(QString("session_id"), ::OpenAPI::toJsonValue(session_id));
    }
    if (m_host_id_isSet) {
        obj.insert(QString("host_id"), ::OpenAPI::toJsonValue(host_id));
    }
    if (members.size() > 0) {
        obj.insert(QString("members"), ::OpenAPI::toJsonValue(members));
    }
    return obj;
}

QString OAIRoomInfo::getRoomId() const {
    return room_id;
}
void OAIRoomInfo::setRoomId(const QString &room_id) {
    this->room_id = room_id;
    this->m_room_id_isSet = true;
}

bool OAIRoomInfo::is_room_id_Set() const{
    return m_room_id_isSet;
}

bool OAIRoomInfo::is_room_id_Valid() const{
    return m_room_id_isValid;
}

QString OAIRoomInfo::getDisplayName() const {
    return display_name;
}
void OAIRoomInfo::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

bool OAIRoomInfo::is_display_name_Set() const{
    return m_display_name_isSet;
}

bool OAIRoomInfo::is_display_name_Valid() const{
    return m_display_name_isValid;
}

QString OAIRoomInfo::getInviteCode() const {
    return invite_code;
}
void OAIRoomInfo::setInviteCode(const QString &invite_code) {
    this->invite_code = invite_code;
    this->m_invite_code_isSet = true;
}

bool OAIRoomInfo::is_invite_code_Set() const{
    return m_invite_code_isSet;
}

bool OAIRoomInfo::is_invite_code_Valid() const{
    return m_invite_code_isValid;
}

QString OAIRoomInfo::getSessionId() const {
    return session_id;
}
void OAIRoomInfo::setSessionId(const QString &session_id) {
    this->session_id = session_id;
    this->m_session_id_isSet = true;
}

bool OAIRoomInfo::is_session_id_Set() const{
    return m_session_id_isSet;
}

bool OAIRoomInfo::is_session_id_Valid() const{
    return m_session_id_isValid;
}

QString OAIRoomInfo::getHostId() const {
    return host_id;
}
void OAIRoomInfo::setHostId(const QString &host_id) {
    this->host_id = host_id;
    this->m_host_id_isSet = true;
}

bool OAIRoomInfo::is_host_id_Set() const{
    return m_host_id_isSet;
}

bool OAIRoomInfo::is_host_id_Valid() const{
    return m_host_id_isValid;
}

QList<OAIUser> OAIRoomInfo::getMembers() const {
    return members;
}
void OAIRoomInfo::setMembers(const QList<OAIUser> &members) {
    this->members = members;
    this->m_members_isSet = true;
}

bool OAIRoomInfo::is_members_Set() const{
    return m_members_isSet;
}

bool OAIRoomInfo::is_members_Valid() const{
    return m_members_isValid;
}

bool OAIRoomInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_room_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invite_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_session_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_host_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (members.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRoomInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_room_id_isValid && m_display_name_isValid && m_invite_code_isValid && m_host_id_isValid && m_members_isValid && true;
}

} // namespace OpenAPI
