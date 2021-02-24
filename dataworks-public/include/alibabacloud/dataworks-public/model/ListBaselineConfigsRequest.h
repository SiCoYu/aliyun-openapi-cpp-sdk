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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINECONFIGSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINECONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListBaselineConfigsRequest : public RpcServiceRequest
			{

			public:
				ListBaselineConfigsRequest();
				~ListBaselineConfigsRequest();

				std::string getOwner()const;
				void setOwner(const std::string& owner);
				std::string getSearchText()const;
				void setSearchText(const std::string& searchText);
				bool getUseflag()const;
				void setUseflag(bool useflag);
				std::string getPriority()const;
				void setPriority(const std::string& priority);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getProjectId()const;
				void setProjectId(long projectId);
				std::string getBaselineTypes()const;
				void setBaselineTypes(const std::string& baselineTypes);

            private:
				std::string owner_;
				std::string searchText_;
				bool useflag_;
				std::string priority_;
				int pageNumber_;
				int pageSize_;
				long projectId_;
				std::string baselineTypes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINECONFIGSREQUEST_H_