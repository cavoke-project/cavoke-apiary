"""
    Cavoke

    API for cavoke interaction between main server and clients  # noqa: E501

    The version of the OpenAPI document: 0.2.1
    Generated by: https://openapi-generator.tech
"""


import sys
import unittest

import cavoke_openapi_client
from cavoke_openapi_client.model.player import Player
globals()['Player'] = Player
from cavoke_openapi_client.model.session_info import SessionInfo


class TestSessionInfo(unittest.TestCase):
    """SessionInfo unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testSessionInfo(self):
        """Test SessionInfo"""
        # FIXME: construct object with mandatory attributes with example values
        # model = SessionInfo()  # noqa: E501
        pass


if __name__ == '__main__':
    unittest.main()
