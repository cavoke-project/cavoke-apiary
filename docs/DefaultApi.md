# cavoke_openapi_client.DefaultApi

All URIs are relative to *http://localhost:8080*

Method | HTTP request | Description
------------- | ------------- | -------------
[**change_role**](DefaultApi.md#change_role) | **POST** /sessions/{session_id}/change_role | Change user&#39;s role in session
[**config_game**](DefaultApi.md#config_game) | **GET** /games/{game_id}/get_config | Get GameInfo of specific game
[**create_session**](DefaultApi.md#create_session) | **POST** /sessions/create | Create a session (room to game pair) from requested cavoke game
[**download_client**](DefaultApi.md#download_client) | **GET** /games/{game_id}/get_client | Download QML client zip of a game
[**game_statistics**](DefaultApi.md#game_statistics) | **GET** /statistics/game/{game_id} | Game statistics
[**get_update**](DefaultApi.md#get_update) | **GET** /play/{session_id}/get_state | Get state for user from QML game
[**health**](DefaultApi.md#health) | **GET** /health | Simple health check
[**join_session**](DefaultApi.md#join_session) | **POST** /sessions/{session_id}/join | Join a session
[**leave_session**](DefaultApi.md#leave_session) | **POST** /sessions/{session_id}/leave | Leave the session
[**list_games**](DefaultApi.md#list_games) | **GET** /games/list | List available games to play
[**profile_change_name_post**](DefaultApi.md#profile_change_name_post) | **POST** /profile/change_name | Changes name for the current user
[**profile_get_me_get**](DefaultApi.md#profile_get_me_get) | **GET** /profile/get_me | Gets information about current user
[**room_create**](DefaultApi.md#room_create) | **POST** /rooms/create | Creates a new room
[**room_info**](DefaultApi.md#room_info) | **GET** /rooms/{room_id}/get_info | Room information
[**room_info_by_code**](DefaultApi.md#room_info_by_code) | **GET** /rooms/get_info_by_invite_code | Room information by invite code
[**room_join**](DefaultApi.md#room_join) | **POST** /rooms/join | Join the room by invite code
[**room_leave**](DefaultApi.md#room_leave) | **POST** /rooms/{room_id}/leave | Leave the room
[**room_new_session**](DefaultApi.md#room_new_session) | **POST** /rooms/{room_id}/create_session | Create a new session inside the room
[**send_move**](DefaultApi.md#send_move) | **POST** /play/{session_id}/send_move | Send a move from QML game
[**session_info**](DefaultApi.md#session_info) | **GET** /sessions/{session_id}/get_info | Session information
[**start_session**](DefaultApi.md#start_session) | **POST** /sessions/{session_id}/start | Start the game
[**submit_game**](DefaultApi.md#submit_game) | **POST** /submit_game | Send a game for review to the cavokedev
[**user_auth_statistics**](DefaultApi.md#user_auth_statistics) | **GET** /profile/my_user_statistics | User statistics for currently logged in user (via auth)
[**user_game_auth_statistics**](DefaultApi.md#user_game_auth_statistics) | **GET** /profile/my_user_game_statistics/{game_id} | UserGame statistics for currently logged in user (via auth)
[**user_game_statistics**](DefaultApi.md#user_game_statistics) | **GET** /statistics/user/{user_id}/game/{game_id} | UserGame statistics
[**user_statistics**](DefaultApi.md#user_statistics) | **GET** /statistics/user/{user_id} | User statistics
[**users_get_user_get**](DefaultApi.md#users_get_user_get) | **GET** /users/get_user | Gets information about given user by user_id
[**validate_session**](DefaultApi.md#validate_session) | **POST** /sessions/{session_id}/validate | Check if the host can launch the game with current config


# **change_role**
> change_role(session_id, new_role)

Change user's role in session

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    session_id = "session_id_example" # str | UUID of a game session (room to game pair)
    new_role = 0 # int | New role to join

    # example passing only required values which don't have defaults set
    try:
        # Change user's role in session
        api_instance.change_role(session_id, new_role)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->change_role: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **session_id** | **str**| UUID of a game session (room to game pair) |
 **new_role** | **int**| New role to join |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully changed the role in session |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No session with such game id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **config_game**
> GameInfo config_game(game_id)

Get GameInfo of specific game

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.game_info import GameInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    game_id = "tictactoe" # str | String id of the game to get

    # example passing only required values which don't have defaults set
    try:
        # Get GameInfo of specific game
        api_response = api_instance.config_game(game_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->config_game: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **game_id** | **str**| String id of the game to get |

### Return type

[**GameInfo**](GameInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Config of an existing game |  -  |
**404** | No such game |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **create_session**
> SessionInfo create_session(game_id)

Create a session (room to game pair) from requested cavoke game

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.session_info import SessionInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    game_id = "tictactoe" # str | String id of the game to get

    # example passing only required values which don't have defaults set
    try:
        # Create a session (room to game pair) from requested cavoke game
        api_response = api_instance.create_session(game_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->create_session: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **game_id** | **str**| String id of the game to get |

### Return type

[**SessionInfo**](SessionInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Created successfully |  -  |
**400** | Bad request |  -  |
**404** | No game with such game id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **download_client**
> file_type download_client(game_id)

Download QML client zip of a game

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    game_id = "tictactoe" # str | String id of the game to get

    # example passing only required values which don't have defaults set
    try:
        # Download QML client zip of a game
        api_response = api_instance.download_client(game_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->download_client: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **game_id** | **str**| String id of the game to get |

### Return type

**file_type**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/octet-stream, application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Client zip file of an existing game |  -  |
**404** | No such game |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **game_statistics**
> GameStatistics game_statistics(game_id)

Game statistics

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from cavoke_openapi_client.model.game_statistics import GameStatistics
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    game_id = "tictactoe" # str | Game Id

    # example passing only required values which don't have defaults set
    try:
        # Game statistics
        api_response = api_instance.game_statistics(game_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->game_statistics: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **game_id** | **str**| Game Id |

### Return type

[**GameStatistics**](GameStatistics.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully got the statistics |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No game with such id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_update**
> GameState get_update(session_id)

Get state for user from QML game

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.game_state import GameState
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    session_id = "session_id_example" # str | UUID of a game session (room to game pair)

    # example passing only required values which don't have defaults set
    try:
        # Get state for user from QML game
        api_response = api_instance.get_update(session_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->get_update: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **session_id** | **str**| UUID of a game session (room to game pair) |

### Return type

[**GameState**](GameState.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully found state for user |  -  |
**404** | No such session / no such user |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **health**
> str health()

Simple health check

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Simple health check
        api_response = api_instance.health()
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->health: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

**str**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **join_session**
> SessionInfo join_session(session_id)

Join a session

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.session_info import SessionInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    session_id = "83896dd5-6f03-4805-8cf1-03ce6bd6077f" # str | Session Id
    position = 1 # int | Position to join (optional)

    # example passing only required values which don't have defaults set
    try:
        # Join a session
        api_response = api_instance.join_session(session_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->join_session: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Join a session
        api_response = api_instance.join_session(session_id, position=position)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->join_session: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **session_id** | **str**| Session Id |
 **position** | **int**| Position to join | [optional]

### Return type

[**SessionInfo**](SessionInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Joined successfully |  -  |
**404** | No session with such id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **leave_session**
> leave_session(session_id)

Leave the session

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    session_id = "session_id_example" # str | UUID of a game session (room to game pair)

    # example passing only required values which don't have defaults set
    try:
        # Leave the session
        api_instance.leave_session(session_id)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->leave_session: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **session_id** | **str**| UUID of a game session (room to game pair) |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully left the session |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No session with such game id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list_games**
> [GameInfo] list_games()

List available games to play

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.game_info import GameInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List available games to play
        api_response = api_instance.list_games()
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->list_games: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**[GameInfo]**](GameInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | List of available games as metadata |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **profile_change_name_post**
> User profile_change_name_post(new_name)

Changes name for the current user

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.user import User
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    new_name = "John Smith" # str | New user display name

    # example passing only required values which don't have defaults set
    try:
        # Changes name for the current user
        api_response = api_instance.profile_change_name_post(new_name)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->profile_change_name_post: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **new_name** | **str**| New user display name |

### Return type

[**User**](User.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successfully changed the name |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **profile_get_me_get**
> User profile_get_me_get()

Gets information about current user

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.user import User
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Gets information about current user
        api_response = api_instance.profile_get_me_get()
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->profile_get_me_get: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**User**](User.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successfully got the info |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **room_create**
> RoomInfo room_create(display_name)

Creates a new room

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.room_info import RoomInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    display_name = "display_name_example" # str | Name of a room

    # example passing only required values which don't have defaults set
    try:
        # Creates a new room
        api_response = api_instance.room_create(display_name)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->room_create: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **display_name** | **str**| Name of a room |

### Return type

[**RoomInfo**](RoomInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully created a new room |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **room_info**
> RoomInfo room_info(room_id)

Room information

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.room_info import RoomInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    room_id = "b2dbce0f-ceef-4bdc-b4af-5199139044e2" # str | UUID of a room

    # example passing only required values which don't have defaults set
    try:
        # Room information
        api_response = api_instance.room_info(room_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->room_info: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **room_id** | **str**| UUID of a room |

### Return type

[**RoomInfo**](RoomInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully got the info |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No room with such room id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **room_info_by_code**
> RoomInfo room_info_by_code(invite_code)

Room information by invite code

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.room_info import RoomInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    invite_code = InviteCode("239566") # InviteCode | Invite code

    # example passing only required values which don't have defaults set
    try:
        # Room information by invite code
        api_response = api_instance.room_info_by_code(invite_code)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->room_info_by_code: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **invite_code** | **InviteCode**| Invite code |

### Return type

[**RoomInfo**](RoomInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully got the info |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No room with such invite code |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **room_join**
> RoomInfo room_join(invite_code)

Join the room by invite code

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.room_info import RoomInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    invite_code = InviteCode("239566") # InviteCode | Invite code

    # example passing only required values which don't have defaults set
    try:
        # Join the room by invite code
        api_response = api_instance.room_join(invite_code)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->room_join: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **invite_code** | **InviteCode**| Invite code |

### Return type

[**RoomInfo**](RoomInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully joined the room |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No room with such invite code |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **room_leave**
> room_leave(room_id)

Leave the room

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    room_id = "b2dbce0f-ceef-4bdc-b4af-5199139044e2" # str | UUID of a room

    # example passing only required values which don't have defaults set
    try:
        # Leave the room
        api_instance.room_leave(room_id)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->room_leave: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **room_id** | **str**| UUID of a room |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully left the info |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No room with such room id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **room_new_session**
> SessionInfo room_new_session(room_id, game_id)

Create a new session inside the room

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.session_info import SessionInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    room_id = "b2dbce0f-ceef-4bdc-b4af-5199139044e2" # str | UUID of a room
    game_id = "tictactoe" # str | String id of the game to get

    # example passing only required values which don't have defaults set
    try:
        # Create a new session inside the room
        api_response = api_instance.room_new_session(room_id, game_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->room_new_session: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **room_id** | **str**| UUID of a room |
 **game_id** | **str**| String id of the game to get |

### Return type

[**SessionInfo**](SessionInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully created a session |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No room with such room id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **send_move**
> send_move(session_id)

Send a move from QML game

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.game_move import GameMove
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    session_id = "83896dd5-6f03-4805-8cf1-03ce6bd6077f" # str | 
    game_move = GameMove(
        move="{"action": "x_move", x: 1, y: 1}",
    ) # GameMove | Game move data (optional)

    # example passing only required values which don't have defaults set
    try:
        # Send a move from QML game
        api_instance.send_move(session_id)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->send_move: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Send a move from QML game
        api_instance.send_move(session_id, game_move=game_move)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->send_move: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **session_id** | **str**|  |
 **game_move** | [**GameMove**](GameMove.md)| Game move data | [optional]

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Move accepted |  -  |
**404** | No such session / no such user |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **session_info**
> SessionInfo session_info(session_id)

Session information

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.session_info import SessionInfo
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    session_id = "session_id_example" # str | UUID of a game session (room to game pair)

    # example passing only required values which don't have defaults set
    try:
        # Session information
        api_response = api_instance.session_info(session_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->session_info: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **session_id** | **str**| UUID of a game session (room to game pair) |

### Return type

[**SessionInfo**](SessionInfo.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successfully got the info |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No session with such game id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **start_session**
> start_session(session_id)

Start the game

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    session_id = "session_id_example" # str | UUID of a game session (room to game pair)

    # example passing only required values which don't have defaults set
    try:
        # Start the game
        api_instance.start_session(session_id)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->start_session: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **session_id** | **str**| UUID of a game session (room to game pair) |

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully started the game |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No session with such game id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **submit_game**
> submit_game()

Send a game for review to the cavokedev

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    game_id = "game_id_example" # str |  (optional)
    display_name = "display_name_example" # str |  (optional)
    description = "description_example" # str |  (optional)
    upload_type = "Git Repository" # str |  (optional)
    git_repo = "git_repo_example" # str |  (optional)
    client_zip = open('/path/to/file', 'rb') # file_type |  (optional)
    server_zip = open('/path/to/file', 'rb') # file_type |  (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Send a game for review to the cavokedev
        api_instance.submit_game(game_id=game_id, display_name=display_name, description=description, upload_type=upload_type, git_repo=git_repo, client_zip=client_zip, server_zip=server_zip)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->submit_game: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **game_id** | **str**|  | [optional]
 **display_name** | **str**|  | [optional]
 **description** | **str**|  | [optional]
 **upload_type** | **str**|  | [optional]
 **git_repo** | **str**|  | [optional]
 **client_zip** | **file_type**|  | [optional]
 **server_zip** | **file_type**|  | [optional]

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully submitted |  -  |
**400** | Bad request |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **user_auth_statistics**
> UserStatistics user_auth_statistics()

User statistics for currently logged in user (via auth)

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from cavoke_openapi_client.model.user_statistics import UserStatistics
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # User statistics for currently logged in user (via auth)
        api_response = api_instance.user_auth_statistics()
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->user_auth_statistics: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**UserStatistics**](UserStatistics.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully got the statistics |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **user_game_auth_statistics**
> UserGameStatistics user_game_auth_statistics(game_id)

UserGame statistics for currently logged in user (via auth)

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.user_game_statistics import UserGameStatistics
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    game_id = "tictactoe" # str | Game id

    # example passing only required values which don't have defaults set
    try:
        # UserGame statistics for currently logged in user (via auth)
        api_response = api_instance.user_game_auth_statistics(game_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->user_game_auth_statistics: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **game_id** | **str**| Game id |

### Return type

[**UserGameStatistics**](UserGameStatistics.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully got the statistics |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No game with such id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **user_game_statistics**
> UserGameStatistics user_game_statistics(user_id, game_id)

UserGame statistics

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.user_game_statistics import UserGameStatistics
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    user_id = "github|123456" # str | User id
    game_id = "tictactoe" # str | Game id

    # example passing only required values which don't have defaults set
    try:
        # UserGame statistics
        api_response = api_instance.user_game_statistics(user_id, game_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->user_game_statistics: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **user_id** | **str**| User id |
 **game_id** | **str**| Game id |

### Return type

[**UserGameStatistics**](UserGameStatistics.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully got the statistics |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No game with such id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **user_statistics**
> UserStatistics user_statistics(user_id)

User statistics

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from cavoke_openapi_client.model.user_statistics import UserStatistics
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    user_id = "github|123456" # str | User id

    # example passing only required values which don't have defaults set
    try:
        # User statistics
        api_response = api_instance.user_statistics(user_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->user_statistics: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **user_id** | **str**| User id |

### Return type

[**UserStatistics**](UserStatistics.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully got the statistics |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No game with such id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **users_get_user_get**
> User users_get_user_get(req_user_id)

Gets information about given user by user_id

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.user import User
from cavoke_openapi_client.model.error import Error
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    req_user_id = "github|123456" # str | User id P.S. `user_id` not used, as it is reserved for authentication

    # example passing only required values which don't have defaults set
    try:
        # Gets information about given user by user_id
        api_response = api_instance.users_get_user_get(req_user_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->users_get_user_get: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **req_user_id** | **str**| User id P.S. &#x60;user_id&#x60; not used, as it is reserved for authentication |

### Return type

[**User**](User.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successfully changed the name |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**404** | Not Found |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **validate_session**
> ValidationResult validate_session(session_id)

Check if the host can launch the game with current config

### Example


```python
import time
import cavoke_openapi_client
from cavoke_openapi_client.api import default_api
from cavoke_openapi_client.model.error import Error
from cavoke_openapi_client.model.validation_result import ValidationResult
from pprint import pprint
# Defining the host is optional and defaults to http://localhost:8080
# See configuration.py for a list of all supported configuration parameters.
configuration = cavoke_openapi_client.Configuration(
    host = "http://localhost:8080"
)


# Enter a context with an instance of the API client
with cavoke_openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = default_api.DefaultApi(api_client)
    session_id = "session_id_example" # str | UUID of a game session (room to game pair)

    # example passing only required values which don't have defaults set
    try:
        # Check if the host can launch the game with current config
        api_response = api_instance.validate_session(session_id)
        pprint(api_response)
    except cavoke_openapi_client.ApiException as e:
        print("Exception when calling DefaultApi->validate_session: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **session_id** | **str**| UUID of a game session (room to game pair) |

### Return type

[**ValidationResult**](ValidationResult.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Validation performed |  -  |
**400** | Bad request |  -  |
**401** | Unauthorized |  -  |
**403** | Forbidden |  -  |
**404** | No session with such game id |  -  |
**0** | Unexpected error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

