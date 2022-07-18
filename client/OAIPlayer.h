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
 * OAIPlayer.h
 *
 * User in specific game with player_id
 */

#ifndef OAIPlayer_H
#define OAIPlayer_H

#include <QJsonObject>

#include "OAIUser.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUser;

class OAIPlayer : public OAIObject {
public:
    OAIPlayer();
    OAIPlayer(QString json);
    ~OAIPlayer() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPlayerId() const;
    void setPlayerId(const qint32 &player_id);
    bool is_player_id_Set() const;
    bool is_player_id_Valid() const;

    OAIUser getUser() const;
    void setUser(const OAIUser &user);
    bool is_user_Set() const;
    bool is_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 player_id;
    bool m_player_id_isSet;
    bool m_player_id_isValid;

    OAIUser user;
    bool m_user_isSet;
    bool m_user_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPlayer)

#endif // OAIPlayer_H
