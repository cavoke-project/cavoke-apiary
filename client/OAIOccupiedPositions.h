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
 * OAIOccupiedPositions.h
 *
 * 
 */

#ifndef OAIOccupiedPositions_H
#define OAIOccupiedPositions_H

#include <QJsonObject>

#include "OAIPlayer.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIPlayer;

class OAIOccupiedPositions : public OAIObject {
public:
    OAIOccupiedPositions();
    OAIOccupiedPositions(QString json);
    ~OAIOccupiedPositions() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getMaxPlayers() const;
    void setMaxPlayers(const qint32 &max_players);
    bool is_max_players_Set() const;
    bool is_max_players_Valid() const;

    QList<OAIPlayer> getOccupied() const;
    void setOccupied(const QList<OAIPlayer> &occupied);
    bool is_occupied_Set() const;
    bool is_occupied_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 max_players;
    bool m_max_players_isSet;
    bool m_max_players_isValid;

    QList<OAIPlayer> occupied;
    bool m_occupied_isSet;
    bool m_occupied_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOccupiedPositions)

#endif // OAIOccupiedPositions_H
