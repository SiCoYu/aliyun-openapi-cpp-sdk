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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMWATERMARKRULEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMWATERMARKRULEREQUEST_H_

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
			class ALIBABACLOUD_LIVE_EXPORT UpdateLiveStreamWatermarkRuleRequest : public RpcServiceRequest
			{

			public:
				UpdateLiveStreamWatermarkRuleRequest();
				~UpdateLiveStreamWatermarkRuleRequest();

				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getRuleId()const;
				void setRuleId(const std::string& ruleId);

            private:
				std::string description_;
				long ownerId_;
				std::string templateId_;
				std::string name_;
				std::string ruleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATELIVESTREAMWATERMARKRULEREQUEST_H_