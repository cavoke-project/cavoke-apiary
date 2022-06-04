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

/*
 * OAIRoomInfo.h
 *
 * Metadata about a room
 */

#ifndef OAIRoomInfo_H
#define OAIRoomInfo_H

#include <QJsonObject>

#include "OAIUser.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUser;

class OAIRoomInfo : public OAIObject {
public:
    OAIRoomInfo();
    OAIRoomInfo(QString json);
    ~OAIRoomInfo() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getRoomId() const;
    void setRoomId(const QString &room_id);
    bool is_room_id_Set() const;
    bool is_room_id_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QString getInviteCode() const;
    void setInviteCode(const QString &invite_code);
    bool is_invite_code_Set() const;
    bool is_invite_code_Valid() const;

    QString getSessionId() const;
    void setSessionId(const QString &session_id);
    bool is_session_id_Set() const;
    bool is_session_id_Valid() const;

    QString getHostId() const;
    void setHostId(const QString &host_id);
    bool is_host_id_Set() const;
    bool is_host_id_Valid() const;

    QList<OAIUser> getMembers() const;
    void setMembers(const QList<OAIUser> &members);
    bool is_members_Set() const;
    bool is_members_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString room_id;
    bool m_room_id_isSet;
    bool m_room_id_isValid;

    QString display_name;
    bool m_display_name_isSet;
    bool m_display_name_isValid;

    QString invite_code;
    bool m_invite_code_isSet;
    bool m_invite_code_isValid;

    QString session_id;
    bool m_session_id_isSet;
    bool m_session_id_isValid;

    QString host_id;
    bool m_host_id_isSet;
    bool m_host_id_isValid;

    QList<OAIUser> members;
    bool m_members_isSet;
    bool m_members_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRoomInfo)

#endif // OAIRoomInfo_H
