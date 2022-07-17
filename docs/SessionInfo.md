# SessionInfo

Metadata about a session (room to game pair)

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**session_id** | **str** |  | 
**game_id** | **str** | cavoke game unique id | 
**status** | **int** | 0 - NOT STARTED; 1 - RUNNING; 2 - FINISHED | 
**host_id** | **str** | User identifier from auth engine | 
**players** | [**[Player]**](Player.md) |  | 
**any string name** | **bool, date, datetime, dict, float, int, list, str, none_type** | any string name can be used but the value must be the correct type | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


