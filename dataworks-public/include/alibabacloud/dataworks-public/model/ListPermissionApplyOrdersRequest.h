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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListPermissionApplyOrdersRequest : public RpcServiceRequest {
public:
	ListPermissionApplyOrdersRequest();
	~ListPermissionApplyOrdersRequest();
	std::string getMaxComputeProjectName() const;
	void setMaxComputeProjectName(const std::string &maxComputeProjectName);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	int getFlowStatus() const;
	void setFlowStatus(int flowStatus);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	int getQueryType() const;
	void setQueryType(int queryType);
	int getWorkspaceId() const;
	void setWorkspaceId(int workspaceId);
	int getOrderType() const;
	void setOrderType(int orderType);
	std::string getEngineType() const;
	void setEngineType(const std::string &engineType);

private:
	std::string maxComputeProjectName_;
	long endTime_;
	long startTime_;
	int pageNum_;
	int flowStatus_;
	int pageSize_;
	std::string tableName_;
	int queryType_;
	int workspaceId_;
	int orderType_;
	std::string engineType_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTPERMISSIONAPPLYORDERSREQUEST_H_
