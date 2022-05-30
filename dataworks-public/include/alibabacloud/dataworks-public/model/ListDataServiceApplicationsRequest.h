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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTDATASERVICEAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTDATASERVICEAPPLICATIONSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListDataServiceApplicationsRequest : public RpcServiceRequest {
public:
	ListDataServiceApplicationsRequest();
	~ListDataServiceApplicationsRequest();
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getTenantId() const;
	void setTenantId(long tenantId);
	std::string getProjectIdList() const;
	void setProjectIdList(const std::string &projectIdList);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	int pageSize_;
	long tenantId_;
	std::string projectIdList_;
	int pageNumber_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTDATASERVICEAPPLICATIONSREQUEST_H_
