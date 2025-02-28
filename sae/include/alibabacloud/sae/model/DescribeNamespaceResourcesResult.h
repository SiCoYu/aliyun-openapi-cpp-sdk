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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBENAMESPACERESOURCESRESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBENAMESPACERESOURCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribeNamespaceResourcesResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string description;
					std::string securityGroupId;
					std::string vSwitchId;
					long appCount;
					bool notificationExpired;
					std::string belongRegion;
					std::string namespaceName;
					std::string tenantId;
					std::string vpcId;
					bool lastChangeOrderRunning;
					std::string userId;
					std::string lastChangeOrderId;
					std::string vpcName;
					std::string vSwitchName;
					std::string namespaceId;
					std::string lastChangeOrderStatus;
					std::string jumpServerAppId;
				};


				DescribeNamespaceResourcesResult();
				explicit DescribeNamespaceResourcesResult(const std::string &payload);
				~DescribeNamespaceResourcesResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBENAMESPACERESOURCESRESULT_H_