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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ModifyBackupPolicyRequest : public RpcServiceRequest {
public:
	ModifyBackupPolicyRequest();
	~ModifyBackupPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::vector<std::string> getUuidList() const;
	void setUuidList(const std::vector<std::string> &uuidList);
	long getId() const;
	void setId(long id);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);
	std::string getPolicyVersion() const;
	void setPolicyVersion(const std::string &policyVersion);
	std::string getPolicyRegionId() const;
	void setPolicyRegionId(const std::string &policyRegionId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long resourceOwnerId_;
	std::string sourceIp_;
	std::vector<std::string> uuidList_;
	long id_;
	std::string policy_;
	std::string policyVersion_;
	std::string policyRegionId_;
	std::string name_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYBACKUPPOLICYREQUEST_H_
