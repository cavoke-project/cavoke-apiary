QT += network

HEADERS += \
# Models
    $${PWD}/OAIError.h \
    $${PWD}/OAIGameInfo.h \
    $${PWD}/OAIGameMove.h \
    $${PWD}/OAIGameState.h \
    $${PWD}/OAIGameStatistics.h \
    $${PWD}/OAIOccupiedPositions.h \
    $${PWD}/OAIPlayer.h \
    $${PWD}/OAIRoomInfo.h \
    $${PWD}/OAISessionCreationRequest.h \
    $${PWD}/OAISessionInfo.h \
    $${PWD}/OAIUser.h \
    $${PWD}/OAIUserGameStatistics.h \
    $${PWD}/OAIUserStatistics.h \
    $${PWD}/OAIValidationResult.h \
# APIs
    $${PWD}/OAIDefaultApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h \
    $${PWD}/OAIServerConfiguration.h \
    $${PWD}/OAIServerVariable.h \
    $${PWD}/OAIOauth.h

SOURCES += \
# Models
    $${PWD}/OAIError.cpp \
    $${PWD}/OAIGameInfo.cpp \
    $${PWD}/OAIGameMove.cpp \
    $${PWD}/OAIGameState.cpp \
    $${PWD}/OAIGameStatistics.cpp \
    $${PWD}/OAIOccupiedPositions.cpp \
    $${PWD}/OAIPlayer.cpp \
    $${PWD}/OAIRoomInfo.cpp \
    $${PWD}/OAISessionCreationRequest.cpp \
    $${PWD}/OAISessionInfo.cpp \
    $${PWD}/OAIUser.cpp \
    $${PWD}/OAIUserGameStatistics.cpp \
    $${PWD}/OAIUserStatistics.cpp \
    $${PWD}/OAIValidationResult.cpp \
# APIs
    $${PWD}/OAIDefaultApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp \
    $${PWD}/OAIOauth.cpp
