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

#ifndef ALIBABACLOUD_CDRS_MODEL_GETMONITORLISTREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_GETMONITORLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT GetMonitorListRequest : public RpcServiceRequest
			{

			public:
				GetMonitorListRequest();
				~GetMonitorListRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);

            private:
				std::string corpId_;
				int pageNumber_;
				int pageSize_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_GETMONITORLISTREQUEST_H_