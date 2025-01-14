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

#ifndef ALIBABACLOUD_DBS_MODEL_CONFIGUREBACKUPPLANREQUEST_H_
#define ALIBABACLOUD_DBS_MODEL_CONFIGUREBACKUPPLANREQUEST_H_

#include <alibabacloud/dbs/DbsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dbs {
namespace Model {
class ALIBABACLOUD_DBS_EXPORT ConfigureBackupPlanRequest : public RpcServiceRequest {
public:
	ConfigureBackupPlanRequest();
	~ConfigureBackupPlanRequest();
	std::string getSourceEndpointRegion() const;
	void setSourceEndpointRegion(const std::string &sourceEndpointRegion);
	long getBackupGatewayId() const;
	void setBackupGatewayId(long backupGatewayId);
	std::string getSourceEndpointInstanceID() const;
	void setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID);
	std::string getSourceEndpointUserName() const;
	void setSourceEndpointUserName(const std::string &sourceEndpointUserName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getBackupPlanId() const;
	void setBackupPlanId(const std::string &backupPlanId);
	std::string getSourceEndpointDatabaseName() const;
	void setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName);
	int getDuplicationInfrequentAccessPeriod() const;
	void setDuplicationInfrequentAccessPeriod(int duplicationInfrequentAccessPeriod);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getBackupStartTime() const;
	void setBackupStartTime(const std::string &backupStartTime);
	std::string getSourceEndpointIP() const;
	void setSourceEndpointIP(const std::string &sourceEndpointIP);
	std::string getCrossRoleName() const;
	void setCrossRoleName(const std::string &crossRoleName);
	bool getEnableBackupLog() const;
	void setEnableBackupLog(bool enableBackupLog);
	std::string getBackupStorageType() const;
	void setBackupStorageType(const std::string &backupStorageType);
	int getDuplicationArchivePeriod() const;
	void setDuplicationArchivePeriod(int duplicationArchivePeriod);
	int getBackupLogIntervalSeconds() const;
	void setBackupLogIntervalSeconds(int backupLogIntervalSeconds);
	std::string getCrossAliyunId() const;
	void setCrossAliyunId(const std::string &crossAliyunId);
	bool getAutoStartBackup() const;
	void setAutoStartBackup(bool autoStartBackup);
	std::string getSourceEndpointPassword() const;
	void setSourceEndpointPassword(const std::string &sourceEndpointPassword);
	std::string getBackupObjects() const;
	void setBackupObjects(const std::string &backupObjects);
	long getBackupRateLimit() const;
	void setBackupRateLimit(long backupRateLimit);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	int getSourceEndpointPort() const;
	void setSourceEndpointPort(int sourceEndpointPort);
	int getBackupRetentionPeriod() const;
	void setBackupRetentionPeriod(int backupRetentionPeriod);
	std::string getBackupPeriod() const;
	void setBackupPeriod(const std::string &backupPeriod);
	long getBackupSpeedLimit() const;
	void setBackupSpeedLimit(long backupSpeedLimit);
	std::string getSourceEndpointInstanceType() const;
	void setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType);
	std::string getBackupPlanName() const;
	void setBackupPlanName(const std::string &backupPlanName);
	std::string getSourceEndpointOracleSID() const;
	void setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID);
	std::string getOSSBucketName() const;
	void setOSSBucketName(const std::string &oSSBucketName);
	std::string getBackupStrategyType() const;
	void setBackupStrategyType(const std::string &backupStrategyType);

private:
	std::string sourceEndpointRegion_;
	long backupGatewayId_;
	std::string sourceEndpointInstanceID_;
	std::string sourceEndpointUserName_;
	std::string clientToken_;
	std::string backupPlanId_;
	std::string sourceEndpointDatabaseName_;
	int duplicationInfrequentAccessPeriod_;
	std::string resourceGroupId_;
	std::string backupStartTime_;
	std::string sourceEndpointIP_;
	std::string crossRoleName_;
	bool enableBackupLog_;
	std::string backupStorageType_;
	int duplicationArchivePeriod_;
	int backupLogIntervalSeconds_;
	std::string crossAliyunId_;
	bool autoStartBackup_;
	std::string sourceEndpointPassword_;
	std::string backupObjects_;
	long backupRateLimit_;
	std::string ownerId_;
	int sourceEndpointPort_;
	int backupRetentionPeriod_;
	std::string backupPeriod_;
	long backupSpeedLimit_;
	std::string sourceEndpointInstanceType_;
	std::string backupPlanName_;
	std::string sourceEndpointOracleSID_;
	std::string oSSBucketName_;
	std::string backupStrategyType_;
};
} // namespace Model
} // namespace Dbs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBS_MODEL_CONFIGUREBACKUPPLANREQUEST_H_
