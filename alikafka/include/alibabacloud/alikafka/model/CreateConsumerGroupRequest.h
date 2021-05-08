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

#ifndef ALIBABACLOUD_ALIKAFKA_MODEL_CREATECONSUMERGROUPREQUEST_H_
#define ALIBABACLOUD_ALIKAFKA_MODEL_CREATECONSUMERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alikafka/AlikafkaExport.h>

namespace AlibabaCloud
{
	namespace Alikafka
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIKAFKA_EXPORT CreateConsumerGroupRequest : public RpcServiceRequest
			{

			public:
				CreateConsumerGroupRequest();
				~CreateConsumerGroupRequest();

				std::string getConsumerId()const;
				void setConsumerId(const std::string& consumerId);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

            private:
				std::string consumerId_;
				std::string remark_;
				std::string instanceId_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIKAFKA_MODEL_CREATECONSUMERGROUPREQUEST_H_