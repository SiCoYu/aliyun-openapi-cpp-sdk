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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBPROXYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBPROXYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDBProxyResult : public ServiceResult
			{
			public:
				struct DBProxyConnectStringItemsItem
				{
					std::string dBProxyConnectString;
					std::string dBProxyEndpointName;
					std::string dBProxyEndpointId;
					std::string dBProxyConnectStringNetWorkType;
					std::string dBProxyConnectStringNetType;
					std::string dBProxyVpcInstanceId;
					std::string dBProxyConnectStringPort;
				};
				struct DbProxyEndpointItemsItem
				{
					std::string dbProxyEndpointName;
					std::string dbProxyEndpointAliases;
					std::string dbProxyEndpointType;
					std::string dbProxyReadWriteMode;
				};


				DescribeDBProxyResult();
				explicit DescribeDBProxyResult(const std::string &payload);
				~DescribeDBProxyResult();
				std::string getDBProxyInstanceName()const;
				std::string getDBProxyInstanceCurrentMinorVersion()const;
				std::string getDBProxyInstanceLatestMinorVersion()const;
				int getDBProxyInstanceNum()const;
				std::string getDBProxyServiceStatus()const;
				std::vector<DbProxyEndpointItemsItem> getDbProxyEndpointItems()const;
				std::string getDBProxyInstanceSize()const;
				std::vector<DBProxyConnectStringItemsItem> getDBProxyConnectStringItems()const;
				std::string getDBProxyInstanceStatus()const;
				std::string getDBProxyInstanceType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dBProxyInstanceName_;
				std::string dBProxyInstanceCurrentMinorVersion_;
				std::string dBProxyInstanceLatestMinorVersion_;
				int dBProxyInstanceNum_;
				std::string dBProxyServiceStatus_;
				std::vector<DbProxyEndpointItemsItem> dbProxyEndpointItems_;
				std::string dBProxyInstanceSize_;
				std::vector<DBProxyConnectStringItemsItem> dBProxyConnectStringItems_;
				std::string dBProxyInstanceStatus_;
				std::string dBProxyInstanceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBPROXYRESULT_H_