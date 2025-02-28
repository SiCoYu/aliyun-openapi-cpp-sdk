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

#ifndef ALIBABACLOUD_IOT_MODEL_LISTDEVICEDISTRIBUTEJOBREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_LISTDEVICEDISTRIBUTEJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT ListDeviceDistributeJobRequest : public RpcServiceRequest
			{

			public:
				ListDeviceDistributeJobRequest();
				~ListDeviceDistributeJobRequest();

				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getJobType()const;
				void setJobType(const std::string& jobType);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getTargetUid()const;
				void setTargetUid(const std::string& targetUid);
				int getStatus()const;
				void setStatus(int status);

            private:
				std::string jobId_;
				std::string nextToken_;
				int pageSize_;
				int currentPage_;
				std::string productKey_;
				std::string jobType_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string targetUid_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_LISTDEVICEDISTRIBUTEJOBREQUEST_H_