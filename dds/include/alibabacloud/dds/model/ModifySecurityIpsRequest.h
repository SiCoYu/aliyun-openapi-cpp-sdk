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

#ifndef ALIBABACLOUD_DDS_MODEL_MODIFYSECURITYIPSREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_MODIFYSECURITYIPSREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT ModifySecurityIpsRequest : public RpcServiceRequest {
public:
	ModifySecurityIpsRequest();
	~ModifySecurityIpsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSecurityIps() const;
	void setSecurityIps(const std::string &securityIps);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityIpGroupName() const;
	void setSecurityIpGroupName(const std::string &securityIpGroupName);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getModifyMode() const;
	void setModifyMode(const std::string &modifyMode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSecurityIpGroupAttribute() const;
	void setSecurityIpGroupAttribute(const std::string &securityIpGroupAttribute);

private:
	long resourceOwnerId_;
	std::string securityIps_;
	std::string accessKeyId_;
	std::string securityIpGroupName_;
	std::string securityToken_;
	std::string dBInstanceId_;
	std::string modifyMode_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string securityIpGroupAttribute_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_MODIFYSECURITYIPSREQUEST_H_
