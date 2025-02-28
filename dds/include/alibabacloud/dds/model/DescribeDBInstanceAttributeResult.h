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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeDBInstanceAttributeResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					struct ReplicaSet
					{
						std::string replicaSetRole;
						std::string connectionDomain;
						std::string vPCCloudInstanceId;
						std::string connectionPort;
						std::string vPCId;
						std::string networkType;
						std::string vSwitchId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct MongosAttribute
					{
						std::string connectSting;
						std::string status;
						std::string nodeClass;
						std::string nodeDescription;
						int maxConnections;
						std::string vPCId;
						std::string vSwitchId;
						int port;
						std::string nodeId;
						std::string vpcCloudInstanceId;
						int maxIOPS;
					};
					struct ShardAttribute
					{
						std::string status;
						std::string nodeClass;
						std::string nodeDescription;
						int maxConnections;
						int readonlyReplicas;
						int port;
						std::string nodeId;
						int nodeStorage;
						std::string connectString;
						int maxIOPS;
					};
					struct ConfigserverAttribute
					{
						std::string status;
						std::string nodeClass;
						std::string nodeDescription;
						int maxConnections;
						int port;
						std::string nodeId;
						int nodeStorage;
						std::string connectString;
						int maxIOPS;
					};
					std::string vPCCloudInstanceIds;
					std::string resourceGroupId;
					std::string capacityUnit;
					std::string dBInstanceType;
					std::string replicaSetName;
					std::string storageEngine;
					std::vector<DBInstance::ReplicaSet> replicaSets;
					std::string maintainEndTime;
					std::vector<DBInstance::MongosAttribute> mongosList;
					std::string dBInstanceId;
					std::string networkType;
					std::string lastDowngradeTime;
					int dBInstanceStorage;
					std::vector<DBInstance::Tag> tags;
					std::string dBInstanceDescription;
					std::string maintainStartTime;
					std::string engine;
					std::string replacateId;
					bool dBInstanceReleaseProtection;
					std::string engineVersion;
					std::string storageType;
					std::string dBInstanceStatus;
					std::string zoneId;
					int maxConnections;
					std::string readonlyReplicas;
					std::string replicationFactor;
					std::string cloudType;
					std::string vPCId;
					std::string dBInstanceClass;
					std::string vSwitchId;
					std::vector<DBInstance::ShardAttribute> shardList;
					std::string lockMode;
					int maxIOPS;
					std::string chargeType;
					std::string vpcAuthMode;
					std::string protocolType;
					std::string currentKernelVersion;
					std::string creationTime;
					std::vector<DBInstance::ConfigserverAttribute> configserverList;
					std::string regionId;
					std::string expireTime;
					std::string kindCode;
				};


				DescribeDBInstanceAttributeResult();
				explicit DescribeDBInstanceAttributeResult(const std::string &payload);
				~DescribeDBInstanceAttributeResult();
				std::vector<DBInstance> getDBInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstance> dBInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDBINSTANCEATTRIBUTERESULT_H_