"""
    Cavoke

    API for cavoke interaction between main server and clients  # noqa: E501

    The version of the OpenAPI document: 0.2.1
    Generated by: https://openapi-generator.tech
"""


import sys
import unittest

import cavoke_openapi_client
from cavoke_openapi_client.model.invite_code import InviteCode
from cavoke_openapi_client.model.user import User
globals()['InviteCode'] = InviteCode
globals()['User'] = User
from cavoke_openapi_client.model.room_info import RoomInfo


class TestRoomInfo(unittest.TestCase):
    """RoomInfo unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testRoomInfo(self):
        """Test RoomInfo"""
        # FIXME: construct object with mandatory attributes with example values
        # model = RoomInfo()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
