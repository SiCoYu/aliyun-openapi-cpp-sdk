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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CHANGECOLUMNSECLEVELREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CHANGECOLUMNSECLEVELREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ChangeColumnSecLevelRequest : public RpcServiceRequest {
public:
	ChangeColumnSecLevelRequest();
	~ChangeColumnSecLevelRequest();
	std::string getSchemaName() const;
	void setSchemaName(const std::string &schemaName);
	bool getIsLogic() const;
	void setIsLogic(bool isLogic);
	std::string getNewLevel() const;
	void setNewLevel(const std::string &newLevel);
	std::string getColumnName() const;
	void setColumnName(const std::string &columnName);
	long getTid() const;
	void setTid(long tid);
	long getDbId() const;
	void setDbId(long dbId);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);

private:
	std::string schemaName_;
	bool isLogic_;
	std::string newLevel_;
	std::string columnName_;
	long tid_;
	long dbId_;
	std::string tableName_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CHANGECOLUMNSECLEVELREQUEST_H_
