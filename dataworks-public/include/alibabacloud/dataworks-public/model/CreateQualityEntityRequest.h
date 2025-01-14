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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEQUALITYENTITYREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEQUALITYENTITYREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateQualityEntityRequest : public RpcServiceRequest {
public:
	CreateQualityEntityRequest();
	~CreateQualityEntityRequest();
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	int getEntityLevel() const;
	void setEntityLevel(int entityLevel);
	std::string getMatchExpression() const;
	void setMatchExpression(const std::string &matchExpression);
	std::string getEnvType() const;
	void setEnvType(const std::string &envType);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);

private:
	std::string projectName_;
	int entityLevel_;
	std::string matchExpression_;
	std::string envType_;
	std::string tableName_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEQUALITYENTITYREQUEST_H_
