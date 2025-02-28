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

#ifndef ALIBABACLOUD_DDS_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT CreateServerlessDBInstanceRequest : public RpcServiceRequest {
public:
	CreateServerlessDBInstanceRequest();
	~CreateServerlessDBInstanceRequest();
	std::string getCapacityUnit() const;
	void setCapacityUnit(const std::string &capacityUnit);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getDBInstanceStorage() const;
	void setDBInstanceStorage(int dBInstanceStorage);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getPeriodPriceType() const;
	void setPeriodPriceType(const std::string &periodPriceType);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getStorageEngine() const;
	void setStorageEngine(const std::string &storageEngine);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getAccountPassword() const;
	void setAccountPassword(const std::string &accountPassword);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	std::string capacityUnit_;
	long resourceOwnerId_;
	int dBInstanceStorage_;
	std::string clientToken_;
	std::string periodPriceType_;
	std::string engineVersion_;
	std::string networkType_;
	std::string accessKeyId_;
	std::string storageEngine_;
	std::string resourceGroupId_;
	std::string securityToken_;
	std::string regionId_;
	std::string engine_;
	std::string dBInstanceDescription_;
	int period_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string securityIPList_;
	std::string vSwitchId_;
	std::string accountPassword_;
	std::string autoRenew_;
	std::string vpcId_;
	std::string zoneId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_
