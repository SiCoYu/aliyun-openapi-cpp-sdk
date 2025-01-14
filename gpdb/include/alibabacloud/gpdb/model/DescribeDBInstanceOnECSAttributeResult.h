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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEONECSATTRIBUTERESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEONECSATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstanceOnECSAttributeResult : public ServiceResult
			{
			public:
				struct DBInstanceAttribute
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					int masterNodeNum;
					std::string port;
					int segNodeNum;
					std::string encryptionKey;
					std::string instanceNetworkType;
					bool supportRestore;
					std::string dBInstanceCategory;
					std::string dBInstanceId;
					std::vector<DBInstanceAttribute::Tag> tags;
					std::string dBInstanceDescription;
					std::string engine;
					std::string encryptionType;
					int memorySize;
					std::string storageType;
					std::string engineVersion;
					std::string dBInstanceStatus;
					std::string zoneId;
					std::string dBInstanceClass;
					std::string vSwitchId;
					int storageSize;
					std::string minorVersion;
					std::string payType;
					std::string lockMode;
					std::string vpcId;
					std::string creationTime;
					std::string instanceDeployType;
					std::string connectionMode;
					int cpuCores;
					std::string regionId;
					std::string connectionString;
					std::string expireTime;
				};


				DescribeDBInstanceOnECSAttributeResult();
				explicit DescribeDBInstanceOnECSAttributeResult(const std::string &payload);
				~DescribeDBInstanceOnECSAttributeResult();
				std::vector<DBInstanceAttribute> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstanceAttribute> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEONECSATTRIBUTERESULT_H_