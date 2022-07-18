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
 * OAIGameMove.h
 *
 * Information about a move made by user (e.g. placement of an X in tictactoe)
 */

#ifndef OAIGameMove_H
#define OAIGameMove_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIGameMove : public OAIObject {
public:
    OAIGameMove();
    OAIGameMove(QString json);
    ~OAIGameMove() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getMove() const;
    void setMove(const QString &move);
    bool is_move_Set() const;
    bool is_move_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString move;
    bool m_move_isSet;
    bool m_move_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGameMove)

#endif // OAIGameMove_H
