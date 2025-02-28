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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_ADDDESENSITIZATIONRULEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_ADDDESENSITIZATIONRULEREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT AddDesensitizationRuleRequest : public RpcServiceRequest {
public:
	AddDesensitizationRuleRequest();
	~AddDesensitizationRuleRequest();
	std::string getRuleDescription() const;
	void setRuleDescription(const std::string &ruleDescription);
	std::vector<std::map<std::string, std::string>> getFunctionParams() const;
	void setFunctionParams(const std::vector<std::map<std::string, std::string>> &functionParams);
	std::string getRuleType() const;
	void setRuleType(const std::string &ruleType);
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getFunctionType() const;
	void setFunctionType(const std::string &functionType);
	long getTid() const;
	void setTid(long tid);

private:
	std::string ruleDescription_;
	std::vector<std::map<std::string, std::string>> functionParams_;
	std::string ruleType_;
	std::string ruleName_;
	std::string functionType_;
	long tid_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_ADDDESENSITIZATIONRULEREQUEST_H_
