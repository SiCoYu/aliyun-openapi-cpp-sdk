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

#ifndef ALIBABACLOUD_LIVE_MODEL_INITIALIZEAUTOSHOWLISTTASKREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_INITIALIZEAUTOSHOWLISTTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT InitializeAutoShowListTaskRequest : public RpcServiceRequest
			{

			public:
				InitializeAutoShowListTaskRequest();
				~InitializeAutoShowListTaskRequest();

				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getCasterConfig()const;
				void setCasterConfig(const std::string& casterConfig);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getEndTime()const;
				void setEndTime(long endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getCallBackUrl()const;
				void setCallBackUrl(const std::string& callBackUrl);
				std::string getResourceIds()const;
				void setResourceIds(const std::string& resourceIds);

            private:
				long startTime_;
				std::string casterConfig_;
				std::string domainName_;
				long endTime_;
				long ownerId_;
				std::string callBackUrl_;
				std::string resourceIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_INITIALIZEAUTOSHOWLISTTASKREQUEST_H_