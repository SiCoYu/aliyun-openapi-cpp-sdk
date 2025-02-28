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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEQUALITYRULEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEQUALITYRULEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateQualityRuleRequest : public RpcServiceRequest {
public:
	CreateQualityRuleRequest();
	~CreateQualityRuleRequest();
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getTrend() const;
	void setTrend(const std::string &trend);
	int getRuleType() const;
	void setRuleType(int ruleType);
	int getBlockType() const;
	void setBlockType(int blockType);
	std::string getPropertyType() const;
	void setPropertyType(const std::string &propertyType);
	long getEntityId() const;
	void setEntityId(long entityId);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	int getChecker() const;
	void setChecker(int checker);
	int getTemplateId() const;
	void setTemplateId(int templateId);
	std::string getExpectValue() const;
	void setExpectValue(const std::string &expectValue);
	std::string get_Operator() const;
	void set_Operator(const std::string &_operator);
	std::string getWhereCondition() const;
	void setWhereCondition(const std::string &whereCondition);
	std::string getCriticalThreshold() const;
	void setCriticalThreshold(const std::string &criticalThreshold);
	std::string getProperty() const;
	void setProperty(const std::string &property);
	std::string getComment() const;
	void setComment(const std::string &comment);
	int getPredictType() const;
	void setPredictType(int predictType);
	std::string getWarningThreshold() const;
	void setWarningThreshold(const std::string &warningThreshold);
	std::string getMethodName() const;
	void setMethodName(const std::string &methodName);

private:
	std::string projectName_;
	std::string trend_;
	int ruleType_;
	int blockType_;
	std::string propertyType_;
	long entityId_;
	std::string ruleName_;
	int checker_;
	int templateId_;
	std::string expectValue_;
	std::string _operator_;
	std::string whereCondition_;
	std::string criticalThreshold_;
	std::string property_;
	std::string comment_;
	int predictType_;
	std::string warningThreshold_;
	std::string methodName_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEQUALITYRULEREQUEST_H_
