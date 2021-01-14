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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSAVINGSPLANSINSTANCEREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSAVINGSPLANSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QuerySavingsPlansInstanceRequest : public RpcServiceRequest
			{

			public:
				QuerySavingsPlansInstanceRequest();
				~QuerySavingsPlansInstanceRequest();

				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getLocale()const;
				void setLocale(const std::string& locale);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				std::string endTime_;
				std::string startTime_;
				std::string locale_;
				int pageNum_;
				std::string instanceId_;
				std::string requestId_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSAVINGSPLANSINSTANCEREQUEST_H_