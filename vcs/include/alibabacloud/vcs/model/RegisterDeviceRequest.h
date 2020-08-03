/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_VCS_MODEL_REGISTERDEVICEREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_REGISTERDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT RegisterDeviceRequest : public RpcServiceRequest
			{

			public:
				RegisterDeviceRequest();
				~RegisterDeviceRequest();

				std::string getDeviceTimeStamp()const;
				void setDeviceTimeStamp(const std::string& deviceTimeStamp);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);
				std::string getServerId()const;
				void setServerId(const std::string& serverId);
				std::string getDeviceSerialNumber()const;
				void setDeviceSerialNumber(const std::string& deviceSerialNumber);

            private:
				std::string deviceTimeStamp_;
				std::string deviceId_;
				std::string serverId_;
				std::string deviceSerialNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_REGISTERDEVICEREQUEST_H_