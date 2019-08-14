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

#ifndef ALIBABACLOUD_EMR_MODEL_REASSIGNKAFKAREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_REASSIGNKAFKAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ReassignKafkaRequest : public RpcServiceRequest
			{

			public:
				ReassignKafkaRequest();
				~ReassignKafkaRequest();

				long getThrottle()const;
				void setThrottle(long throttle);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTopicId()const;
				void setTopicId(const std::string& topicId);
				std::vector<int> getBrokerId()const;
				void setBrokerId(const std::vector<int>& brokerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long throttle_;
				long resourceOwnerId_;
				std::string topicId_;
				std::vector<int> brokerId_;
				std::string regionId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_REASSIGNKAFKAREQUEST_H_